/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;

    //For Wait2 uncomment the below code

    // int i;
    // int u=10;
    // pid = Exec("../test/num_io");
    // if (pid < 0) {
    //     Write("Exec failed: ", 14, stdout);
    //     PrintNum(pid);
    // }
    // while(u>0)
    //     {
    //         for(i=1;i<30;i++);
    //         PrintString("In Prog: exec.c\n");
    //         u--;
    //     }

////////////////////////////////////////////////////////////////////////////

    //For Priority Scheduling uncomment the below code
    int i;
    PrintString("start-In Prog: exec.c\n");
    pid = Exec2("../test/num_io",0);            //Exec2 for priority Execution and 0 is priority number
    if (pid < 0) {  
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } 
    while(1){
        for(i=1;i<300000;i++);
        PrintString("In Prog: exec.c\n");    
    }
}