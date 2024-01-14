0x0A-argc_argv
This was a project for the acclaiming to understand the usage of command-line options even a precursor to that "SH"
	Also some of the info to research on more is how to utilize the arguments passed to main
	
What are two prototypes of main that you know of, and in which case do you use one or the other
	They are 3; namely int main (void) && int main (int ac, char **av) && int main (int ac, char **av, char **envp)
	The ENVP interacts with the environment as the command-line args are usually in UNIX-like hosted environment args.
