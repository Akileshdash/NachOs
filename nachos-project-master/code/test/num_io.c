/* num_io.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a syscall that read an interger and print it
 *
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() { 
    
    // commented by me
    //PrintNum(ReadNum()); 
    // added by me

    // For Priority Scheduling Uncomment the below code
    int pid;
    int i;
    int u =10;
    PrintString("start-In Prog: num_io.c\n");
    // pid = Exec("../test/add");       //For Normal ,without priority Executing 
    pid = Exec2("../test/add",1);       // For Priority Executing and 1 is the priority number
    // Wait2(pid);
    //  pid = Exec("../test/add");
    
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
     }
    
    //For Testing 
    while(u>0){
        for(i=1;i<30;i++);
        PrintString("In Prog: num_io.c\n");
        u--;
    }
}