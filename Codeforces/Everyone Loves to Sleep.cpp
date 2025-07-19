#include<iostream>
using namespace std;
int main()
{
    int t,n,H,M,h,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>H>>M;
        int A[n][2],B[n][2],C[n][2];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>A[i][j];

            }
            if(A[i][0]==H&&A[i][1]==M)
            {
                cout<<"0 0"<<endl;
                break;
            }
            else if(A[i][0]>H)
            {
             if(M)
             {
                m=60-M;
                h=H+1;
                int k=0;
                B[k][0]=A[i][0]-h;
                B[k][1]=A[i][1]+M;
                k++;
             }
             else
             {

             }
            }
        }

    }
}
