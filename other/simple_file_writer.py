#
# fout is what I usually name an "output file handler"
#
# Python "open" function "opens a file stream".
# The 1st argument is a file name
# The 2nd argument is a "mode" that can be ["r","w","a"] corresponding to ["read", "write", "append"]
# "read" mode opens an existing file and your file handler is to "read the contents"
# "write" mode opens a new file (removes if the same filename already exists) and start from scratch to "write a content"
# "append" mode opens an existing file (or create a new file if not existing) and allow you to append more contents.
#

fout=open("output_txt_file_you_can_remove.txt","w")

# Let me write hello world
fout.write("hello world")
# Let me write hello world again
fout.write("hello world")
# Let me write hello world in a new line
fout.write("\n")
fout.write("hello world\n")

# close
fout.close()
