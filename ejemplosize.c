#include <stdio.h>

int main (int argc, char *argv[]) {
    int i=sizeof(int);
    printf("%d bytes\n", i);
    int arreglo[6]={3,6,9,12,15,18};
    int j=sizeof(arreglo);
    printf("%d bytes", j);
    return 0;
}