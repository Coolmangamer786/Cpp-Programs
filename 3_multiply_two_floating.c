#include <stdio.h>

int main()
{
    double a,b;
    printf("Enter two floating numbers \n");
    scanf("%lf %lf",&a,&b);
    printf("Product upto 2 decimal : %.2f",(a*b));
    return 0;
}
