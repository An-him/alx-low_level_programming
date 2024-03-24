#include "lists.h"
/**
 *before_main_goes - prints before main
 *Return (0);
 **/
void __attribute__((constructor)) before_main_goes()
{
printf("You\'re beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
