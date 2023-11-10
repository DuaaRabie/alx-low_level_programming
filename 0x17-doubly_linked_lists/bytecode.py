import marshal
import sys

filename = sys.argv[1]  # get the filename from the command line
with open(filename, 'rb') as f:
    f.read(12)  # skip the header
    code = marshal.load(f)  # load the bytecode

print(code)  # print the bytecode
