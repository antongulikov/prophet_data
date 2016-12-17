import os

def main():
	dirs = os.listdir('.')
	for dir_name in dirs:
		if not dir_name[0].isalnum():
			continue
		path = os.path.join(dir_name, 'tests')
		os.chdir(path)
		tests_list = filter(lambda x: x.endswith('.out'), os.listdir('.'))
		for test_name in tests_list:
			new_name = test_name.split('.')[0] + ".exp"
			os.rename(test_name, new_name)
		os.chdir("../../")

if __name__ == "__main__":
	main()