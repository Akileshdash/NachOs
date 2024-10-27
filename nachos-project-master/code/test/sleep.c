/* sleep.c
 */

#include "syscall.h"

int main() {
    PrintString("Sleep Initiated\n");
    Sleep(500000);
    PrintString("Sleep Finished\n");
    // Halt();
    /* not reached */
}
