/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
    int i;
    result = Add(41, 57);
	PrintString("After Addition : \n");
	PrintNum(result);
    // Sleep(100000);
	PrintString("\n");
	PrintString("Addition Done\n");
    // Halt();
    /* not reached */
     while(1){
        for(i=1;i<300000;i++);
        PrintString("In Prog: add.c\n");
    }
}
