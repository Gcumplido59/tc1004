#include <unistd.h>
#include <stdio.h>

int main()
{
    int pid = fork();
    if (pid == 0)
    {
        printf("Soy el hijo\n");
        execl("./hola", "hola", "Pedro", "Gal", "Mary", (char *)NULL);
        printf("Esta linea no debe ejecutarse");
    }
    printf("sOY EL PROCESO PADRE\n");
    return 0;
}