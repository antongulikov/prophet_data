import os
import sys
import filecmp
from os import system as command

def main():
	os.chdir('./src')
	ret = command("make")
	if not os.path.isfile("./prog"):
		os.chdir("../")
		return
	os.chdir("../")
	ok = []
	bad = []
	for test_name in os.listdir("./tests/"):
		if test_name.endswith(".in"):
			ret = command("src/prog < tests/{0} > __out".format(test_name))
			out_file = test_name.split(".")[0] + ".exp"
			ret = command("diff __out tests/{0} > ../../out".format(out_file))
			with open("../../out", "r") as ret_:
				lines = filter(lambda x: x.find("\ No newline at end of file") == -1, ret_.readlines())
				if len(lines) < 4:
					ret = 0
				else:
					a = lines[1].split(" ")
					a = " ".join(a[1:])
					a = a.strip()
					b = lines[-1].split(" ")
					b = " ".join(b[1:])
					b = b.strip()
					if a != b:
						ret = 1
					else:
						ret = 0
			if ret == 0:
				ok.append(test_name.split(".")[0])
			else:
				bad.append(test_name.split(".")[0])
			os.remove("__out")
	with open("revision.log", "w") as rev_file:
		rev_file.writelines("-\n-\n")
		rev_file.writelines("Diff Cases: Tot {}\n".format(len(bad)))
		rev_file.writelines(" ".join(bad) + "\n")
		rev_file.writelines("Positive Cases: Tot {}\n".format(len(ok)))
		rev_file.writelines(" ".join(ok) + "\n")


if __name__ == "__main__":
	main()