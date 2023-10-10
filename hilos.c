#include <pthread.h>
#include <stdio.h>

void* holaHilo(){
    printf("hola desde un hilo \n");
}

int main(){
    pthread_t t; 
    pthread_create(&t, NULL, holaHilo, NULL);

    return 0;
}