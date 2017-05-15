# File_Readin_Tool
This File Readin Tool is A tool for file read in w/ active malloc.

## INSTALLATION
1. Download this repository to the program you need the files read;
2. Make sure the 'ft_read_in.h' gets to the right folder and gets '#include';
3. Make sure to include all neccessary '.c' files in your 'srcs' folder and 'Makefile'.

## TEST.C
- There is a 'test.c' in the root of this folder for testing purpose;
- Use 'gcc test.c srcs/*' to compile;
- USAGE: ./a.out <PATH OF FILE>;
- Please make sure not to include 'test.c' in your own program

## USAGE
1. Pass the 'file descriptor' (can be 0) and a un-initialized 'line' into the function;
2. Make sure to free the 'line' after usage;
3. If function return '0', file read successfully, '-1' means otherwise.

## NOTE
- There is a 'resources' folder that contains some test files if you would like to test before using them.
