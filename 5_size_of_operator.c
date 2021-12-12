#include <stdio.h>

int main()
{
    int a;
    double b;
    char c;
    long d;
    float e;
    
    printf("int is %zu bytes\n",sizeof(a));
    printf("double is %zu bytes\n",sizeof(b));
    printf("char is %zu bytes\n",sizeof(c));
    printf("long is %zu bytes\n",sizeof(d));
    printf("float is %zu bytes\n",sizeof(e));

    return 0;
}
