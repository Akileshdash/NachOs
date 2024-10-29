/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"
 int arr[10] = {10,20};
 char arr1[]="hello world"; 
int main() {
    // int result;
    // result = Add(41, 57);
	// PrintString("After Addition : \n");
	// PrintNum(result);
    // // Sleep(100000);
	// PrintString("\n");
	// PrintString("Addition Done\n");
    int result1;
    int result2;
    int i;
    char *a = "hello";
    result1 = Add(42, 23);
    result2 = Mul(9, 6);
    PrintNum(result2);
    PrintString("\n");
    // Halt();
    /* not reached */
}
