#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    fork();
    printf("hello :D!\nPID = %d\n", getpid());
    printf("Proceso Padre\n");
    int pid = fork();
    if (pid==0){
        printf("Proceso hijo\n");
    } else {
        printf("Proceso padre e hijo son %d, pid")
    }

    

    return 0;
}