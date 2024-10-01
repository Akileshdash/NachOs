/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    // pid = Exec("num_io");
    // if (pid < 0) {
    //     Write("Exec failed: ", 14, stdout);
    //     PrintNum(pid);
    // } else
    //     Join(pid);
    int i;
    pid = ExecP("../test/add",1);
    PrintString("In Exec\n");
    for (i = 0; i < 1000000; i++);
    PrintString("Bye Exec\n");
}
