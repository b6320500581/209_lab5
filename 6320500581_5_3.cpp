#include<stdio.h>
int main()
{
      int i=0,k,n,x=0,num[3]={2,3,5},s;
    scanf ("%d",&n);
        for (k=1;1;k++)
        {
            s=k;
            while (i!=3)
            {
                if (s%num[i]==0)
                {
                    s/=num[i];
                } else
                {
                    i++;
                }
            }
            i=0;
            if(s==1)
            {
                x++;
                if(x==n)
                {
                    printf ("%d",k);
                    break ;
                }
            }
        }
        return 0;
}
