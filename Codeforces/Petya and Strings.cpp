#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char str1[100],str2[100] ;
   cin>>str1>>str2;
   strupr(str1);
   strupr(str2);
   int i=0,sum1=0,sum2=0;
   while(str1[i]!='\0')
   {
       sum1+=str1[i];
       sum2+=str2[i];
       i++;
   }
   if(sum1>sum2)
    cout<<"1"<<endl;
   else if(sum1<sum2)
    cout<<"-1"<<endl;
   else
    cout<<"0"<<endl;
}
