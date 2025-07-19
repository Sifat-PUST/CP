#include<bits/stdc++.h>
using namespace std;
int generic_root(int n)
{
    int r=0;
    while(n)
    {
        r+=n%10;
        n/=10;
    }
    if(r/10)
        generic_root(r);
    else
       return r;
}
int main()
{
    char c1[25],c2[25];
    while(gets(c1)!=NULL&&gets(c2)!=NULL)
    {
        int i=0,n=0;
        while(c1[i]!='\0')
        {
            if(c1[i]>64&&c1[i]<91)
            n+=c1[i]-64;
            else if(c1[i]>96&&c1[i]<123)
                n+=c1[i]-96;
           i++;
        }
        i=0;
        int m=0;
        while(c2[i]!='\0')
        {
            if(c2[i]>64&&c2[i]<91)
            m+=c2[i]-64;
            else if(c2[i]>96&&c2[i]<123)
                m+=c2[i]-96;
           i++;
        }
        float per;
        if(generic_root(n)<generic_root(m))
          per=(float)generic_root(n)/(float)generic_root(m)*100;
        else
          per=(float)generic_root(m)/(float)generic_root(n)*100;
        printf("%.2f %%\n",per);
    }
}
