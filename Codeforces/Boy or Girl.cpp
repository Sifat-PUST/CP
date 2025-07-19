#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100],temp[100];
    cin>>str;
    //pushpo
    int l;
    int i=0,j=0,k=0;
    while(str[i]!='\0')
    {
        j=i+1;
        while(str[j]!='\0')
        {
            if(str[i]==str[j])
              {
                  k=j;
                 while(str[k]!='\0')
                 {
                     str[k]=str[k+1];
                     k++;
                 }
                 continue;
              }
              else;
              j++;
        }
        i++;
    }
    l=strlen(str);
    if(l%2==0)
       cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
