#include<stdio.h>
#include "test.h"
int main()
{
    int num1,num2;
    int res,prod,sub;
    num1=10,num2=20;
    res=sum(num1,num2);
    prod=mult(num1,num2);
    sub=diffe(num1,num2);
    printf("Sum=%d\n",res);
    printf("Difference=%d\n",sub);
    printf("Product=%d",prod);
    return 0;


}