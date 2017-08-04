
#include <stdio.h>
int main(){
    int a;
    float b;
    double c;
    char D;
    printf("Size of int: %lu bytes\n",sizeof(a));
    printf("Size of float: %lu bytes\n",sizeof(b));
    printf("Size of double: %lu bytes\n",sizeof(c));
    printf("Size of char: %lu byte\n",sizeof(D));
    return 0;
}