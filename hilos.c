#include <pthread.h>
#include <stdio.h>

void* holaHilo(){
    printf("hola desde un hilo \n");
    pthread_exit(NULL);
}

int main(){
    pthread_t t; 
    pthread_create(&t, NULL, holaHilo, NULL);
    pthread_exit(NULL)

    return 0;
}