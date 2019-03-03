#include<stdio.h>
/*
     1
    212
   32123
  4321234

 */
int main()
{
    int row,col,n,num;
    scanf("%d",&n);
    int space=n;
    for(row=1;row<=n;row++){
            num=row;
        for(col=1;col<=space-row;col++){
            printf(" ");}
        for(col=1;col<=(2*row)-1;col++){
            printf("%d",num);
            if(col>=row)num++;
            else num--;

        }
        printf("\n");
    }
    return 0;
}
