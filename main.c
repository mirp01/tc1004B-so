#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    fork();
    printf("hello :D!\nPID = %d\n", getpid());

    return 0;
}