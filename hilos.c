#include <pthread.h>
#include <stdio.h>

int saldo;

void* holaHilo(){
    printf("hola desde un hilo \n");
    pthread_exit(NULL);
}

void* incrementaSaldo(){
    printf("el saldo actual: %d. \n", saldo);
    saldo = saldo + 100;
    printf("nuevo saldo: %d. \n", saldo);
    pthread_exit(NULL);
}

int main(){
    pthread_t t; 
    //pthread_create(&t, NULL, holaHilo, NULL);
    //pthread_exit(NULL);

    int n = 100;
    int saldo = 0;

    for (int i = 1; i <= n; i++) {
        //pthread_create(&t, NULL, holaHilo, NULL);
        pthread_create(&t, NULL, incrementaSaldo, NULL);
    }
    pthread_exit(NULL);
    return 0;
}