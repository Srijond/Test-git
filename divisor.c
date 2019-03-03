#include<stdio.h>
//find the divisor of a number
int main()
{
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0)printf("%d\n",i);
    }



    return 0;

}

