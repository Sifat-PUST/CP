#include<iostream>
using namespace std;
int sum(int x)
{
    int r,sum=0;
    while(x)
    {
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
int main()
{
    int num;
    while(1)
    {
    cin>>num;
    if(num)
    {
      int x=num;
    while(x>=10)
    {
       x=sum(x);
    }
    cout<<x<<endl;
    }
    else
        break;
    }
    return 0;
}
