#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[n];
        cin>>a;
        int b=1;
        for(int i=0;i<n;i++)
        {
            //010c010
            b++;
            if(a[i]>=97&&a[i]<=122)
            {
                char ch=a[i];
                for(int j=i;j<n;j++)
                {
                    if(a[j]==ch)
                    {
                        if(b%2==0)
                            a[j]='0';
                        else
                            a[j]='1';
                    }
                }
            }
        }
        int check=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                check=1;
            }
        }
        if(check==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


