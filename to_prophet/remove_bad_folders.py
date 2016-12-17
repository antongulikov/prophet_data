import os


for folder in os.listdir('.'):
	if not folder.endswith(".cpp"):
		continue
	os.chdir(folder)
	fl = True
	if os.path.isfile("revision.log"):
		fl = False
	os.chdir("../")
	if fl:
		os.system("rm -r {}".format(folder))
