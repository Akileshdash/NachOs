/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
	PrintString("Initial String : Hello World \n");
    PrintHashString("After Hashing : Hello World\n");
	
	PrintString("Hash String done\n");
    /* not reached */
}
