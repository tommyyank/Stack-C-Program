#include <stdio.h>
/*
*This function offsets a stack in memory by an integer value
*and prints values at each byte until it traverses the entire stack
*Prints to standard error
*@param1 char message[]: string message that is printed
*@param2 int offset: offsets the stack in memory
*Prints the address of the pointer, the address in form of unsigned int, and unsigned char, and the address of the byte
*/
register void *stackpointer asm ("esp");
void print_stack(char message[], int offset)
{
	fprintf(stderr, "Stack(offset: %d): %s\n", offset, message);

	fprintf(stderr, "Stack pointer: %p\n", stackpointer);
	
	fprintf(stderr, "Frame Pointer: %p\n", __builtin_frame_address(0));//the function "__builtin_frame_address(0))" positioned at 0 captures the frame pointer

	int i;
	
	for(i=0; i < offset; i++)
	{
		int *ptrvalue = stackpointer + (offset - i);
		fprintf(stderr, "%016p: uchar(%hhu), uint(%u), pointer(%016p)\n", stackpointer + (offset-i),
		(stackpointer + (offset - i)), stackpointer + (offset - i),
		*ptrvalue);//prints the pointer + the value entered for offset while traversing through the stack
	}

}
