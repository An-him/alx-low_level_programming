0x10-variadic_functions
stdarg.h:
	This is a C-header that allows to handle an unknown number and type of variables
	The function parameters must have atleast one variable known and elpsis to indicate it being a variadic_function
How to use va_start, va_arg and va_end macros
	The above are functions that help in the parsing of the variadic functions
	va_list is a macro pointer to the arguments that are supplied
	va_list ap;
	va_start intializes the va_list with last known arguments
	va_start(ap, last_known_argument)
	
