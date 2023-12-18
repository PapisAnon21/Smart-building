

my_file_build = open("buid.txt","r+")

for line in my_file_build:
	new = "page +=\"veu\"" + line +"\"veu\""  +  ";"
	my_file_build.write(new)
