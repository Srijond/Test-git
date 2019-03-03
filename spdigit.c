#include<stdio.h>
//separate digit of integer
int main()
{
  int num,rem;
  scanf("%d",&num);
  while(num!=0){
    rem=num%10;
    printf("%d\n",rem);
    num=num/10;




  }

  return 0;

}
