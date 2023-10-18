#include <pthread.h>
#include <stdio.h>


void* holaHilo(void *thid){
    printf("hola desde un hilo %d\n", *((int *)thid));
    pthread_exit(NULL);
}


int main(){
    pthread_t t; 

    int n = 0;
    int thid = 3;


    for (int i = 1, i <= n, i++){
        pthread_create(&t, NULL, holaHilo, &thid);
        
    }

    //pthread_create(&t, NULL, holaHilo, &thid);
    //pthread_exit(NULL);


    return 0;
}