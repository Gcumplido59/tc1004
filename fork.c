#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 20;
    int b = 20;
    int pid = fork();
    while(1){
        printf("soy el proceso hijo a=%d\n", a);
        printf("Soy el proceso padre a=%d\n", a);
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        fork();
        printf("Soy el proceso padre a=%d\n", a);
        printf("Mi hijo es pid=%d\n",pid);
        printf("soy el proceso hijo a=%d\n", a);
        printf("Soy el proceso padre a=%d\n", a);
        printf("Mi hijo es pid=%d\n",pid);
        printf("Soy el proceso padre a=%d\n", a);
        printf("Mi hijo es pid=%d\n",pid);
        a = 15;
        fork();
        }
        }
    
    

    return 0;
}