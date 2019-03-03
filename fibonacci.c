#include<stdio.h>
int main()
{
    int n,first=0,sec=1,fibo,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",first);
        fibo=first+sec;
        first=sec;
        sec=fibo;
    }




  return 0;
}
