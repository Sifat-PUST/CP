#include<iostream>
using namespace std;
int main()
{
    int t,n,check=1,max,index;
    cin>>t;
    while(t)
    {
        check=1;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
            {
                cin>>A[i];
            }
        max=A[0];
        for(int i=0;i<n-1;i++)
        {
            if(A[i]==A[i+1])
            {
                check++;
            }
            else;

            if(max<A[i+1])
            {
                max=A[i+1];
                index=i+1+1;
            }
            else;

        }
        if(check==n)
            cout<<n<<endl;
        else
            cout<<index<<endl;
        t--;
    }
    return 0;
}
