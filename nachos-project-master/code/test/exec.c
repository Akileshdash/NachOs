/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i;
    int u=10;
    //For Wait2 a process completes
    pid = Exec("../test/num_io");
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    }
    // else
    //     Join(pid);
    // int i;
    // pid = ExecP("../test/num_io",1);
    //>> For Testing
    // PrintString("In Exec\n");
    // for (i = 0; i < 1000000; i++)
    // PrintString("Bye Exec\n");
    while(u>0)
        {
            for(i=1;i<30;i++);
            PrintString("In Prog: exec.c\n");
            u--;
        }
}