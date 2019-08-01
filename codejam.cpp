#include<bits/stdc++.h>
using namespace std;
bool isTidy(int num)
{
    char s[10];
    itoa(num,s,10);
    int i;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]>s[i+1])
            return false;
    }
    return true;

}
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>n;

       for(j=n;j>0;j--)
       {
           if(isTidy(j))
           {
               cout<<"Case #"<<i<<":"<<j<<endl;
               break;
           }
       }
    }







    return 0;
}
