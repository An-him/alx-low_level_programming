0x00-hello_world
0-preprocessor
	 a script that runs a C file through the preprocessor and save the result into another file
1-compiler
	 script that compiles a C file but does not link.
3-name
	 script that compiles a C file and creates an executable named cisfun
4-puts.c
	 program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line using puts
5-printf.c
	 program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
6-size.c
	C program that prints the size of various types on the computer it is compiled and run on.
100-intel
	 script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
	The C file name will be saved in the variable $CFILE.
	The output file should be named the same as the C file, but with the extension .s instead of .c.
	Example: if the C file is main.c, the output file should be main.s
101-quote.c
	C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
program should return 1
program should compile without any warnings when using the -Wall gcc option
