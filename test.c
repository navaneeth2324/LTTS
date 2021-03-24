#include<stdio.h>
#include "test.h"
int main()
{
    int num1,num2;
    int res,res1,prod,sub;
    num1=10,num2=20;
    res=sum(num1,num2);
    prod=mult(num1,num2);
    sub=diffe(num1,num2);
    res1=max(num1,num2);
    printf("Sum=%d\n",res);
    printf("Difference=%d\n",sub);
    printf("Product=%d\n",prod);
    printf("Max=%d\n",res1);
    return 0;


}