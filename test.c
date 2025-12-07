#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>

#define __NR_hellosys 548

int main() {
    syscall(__NR_hellosys);
    return 0;
}
