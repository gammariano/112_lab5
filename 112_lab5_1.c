#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,j,k,x=0,y;
    scanf("%d" ,&n);
    char num[n],a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        b[x]=0;
        scanf("%s" ,num);
        j=strlen(num);
        if(!(strcmp(num,"-")))
        {
            b[x-2]-=b[x-1];
            x--;
        }
        else if(!(strcmp(num,"+")))
        {
            b[x-2]+=b[x-1];
            x--;
        }
        else if(!(strcmp(num,"*")))
        {
            b[x-2]*=b[x-1];
            x--;
        }
        else
        {
            for(k=0;k<j;k++)
            {
                y=j-k-1;
                switch(y)
                {
                    case 0 : b[x]+=(num[k]-48); break;
                    case 1 : b[x]+=(num[k]-48)*10; break;
                    case 2 : b[x]+=(num[k]-48)*100; break;
                    case 3 : b[x]+=(num[k]-48)*1000; break;
                    case 4 : b[x]+=(num[k]-48)*10000; break;
                    case 5 : b[x]+=(num[k]-48)*100000; break;
                }
            }
            x++;
        }
    }
    printf("%d\n" ,b[0]);
    return 0;
}
