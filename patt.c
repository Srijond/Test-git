#include<stdio.h>
int main()
{
    int row,col,n,num;
    scanf("%d",&n);
    int space=n;
    for(row=1;row<=n;row++){
            num=row;
        for(col=1;col<=space;col++){
            printf(" ");}
            space--;
        for(col=1;col<=row;col++){
            printf("%d",num);
            num++;
        }
        num--;
        num--;
        for(col=1;col<row;col++){
            printf("%d",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}
