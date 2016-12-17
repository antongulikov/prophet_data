cnt=0
cntp=0
rm -r to_prophet/*
cp run_prog.py to_prophet/
for dir_name in *_A
do
	cd $dir_name/submissions
	for submission_id in *_wa.cpp
	do
		let "cntp += 1"
		cd ../../to_prophet
		new_dir=$dir_name$submission_id
		rm -r $new_dir
		mkdir $new_dir
		cd $new_dir
		mkdir src
		mkdir tests
		cd src
		echo "
prog: prog.o
	g++ --std=c++11 prog.cpp -o prog" > Makefile
		cd ../
		echo "
#!/bin/bash
../../../src/prophet run.conf -consider-all -first-n-loc 200 -feature-para ../../../crawler/para-all.out" > run.sh
		echo "
revision_file=revision.log
src_dir=src
test_dir=tests
build_cmd=../../../tools/simple-build.py
test_cmd=../../../tools/simple-test.py
localizer=profile
single_case_timeout=1" > run.conf
		cd ../../$dir_name/submissions
		cp $submission_id ../../to_prophet/$new_dir/src/prog.cpp
		cd ../tests
		cp * ../../to_prophet/$new_dir/tests
		cd ../submissions
		if [ "$cntp" -gt "3" ]
			then 
				break
		fi
	done
	let "cntp = 0"
	cd ../../
	let "cnt += 1"
	echo $cnt
	if [ "$cnt" -gt "30" ]
		then
			break
	fi
done
cd to_prophet
for dir_name in *
do
	cp run_prog.py $dir_name/
	cd $dir_name
	cd src
	make
	cd ../
	rm tests/0.in
	rm tests/0.exp
	python run_prog.py
	rm src/prog
	rm src/prog.o
	cd ../
done