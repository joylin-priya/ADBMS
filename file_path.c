import os
print "root prints out directories only from what we specified"
print "dirs prints out sub-directories from root"
print "files prints out all files from root and directories"
print "*" * 20
for root, dirs, files in os.walk("/path"):
    print root
    print dirs
    print files
