#include<stdio.h>
int UglyNumber(int m)
{
    while(m!=1)
    {
        if(m%2==0)
        {
            m/=2;
        }
        else if(m%3==0)
        {
            m/=3;
        }
        else if(m%5==0)
        {
            m/=5;
        }
        else
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n,i,j,k,m,c;
    scanf("%d" ,&n);
    int num[10000]={0};
    num[0]=1;
    m=1;
    for(i=2;i<n*n*2;i++)
    {
        c=UglyNumber(i);
        if(c==0)
        {
            num[m]=i;
            m++;
        }
        else if(c==1)
        {

        }
    }
    printf("%d" ,num[n-1]);
    return 0;
}
