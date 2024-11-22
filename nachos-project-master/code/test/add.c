/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int a[100];

int main() {
    int result;
    int i;
    // result = Add(41, 57);
	// PrintString("After Addition : \n");
	// PrintNum(result);
    // Sleep(100000);
	// PrintString("\n");
	// PrintString("Addition Done\n");
    int pid = Exec("../test/test_syscall");
    PrintString("Before\n");
    PrintNum(a[100]);
    // Halt();
    /* not reached */
    //  while(1){
    //     for(i=1;i<300000;i++);
    //     PrintString("In Prog: add.c\n");
    // }
    PrintString("Bye\n");
    // PrintString("Hello");
    PrintString("Byeeeeeeeee\n");
    // for (i = 0; i < 1500000; i++);
    Sleep(10000000);
    PrintString("Byeeee from child\n");
    Exit(0);
}
