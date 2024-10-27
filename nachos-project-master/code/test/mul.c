/* mul.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
    result = Mul(4131, 57);
	PrintString("After Multiplying : \n");
	PrintNum(result);
	
    // Halt();
    /* not reached */
}
