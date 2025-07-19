#include<bits/stdc++.h>
using namespace std;
int sizeofstring(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
int last_latter(char *s,int x)
{
    if(s[x]=='M'||s[x]=='m')
        return 2;
    else if (s[x]=='L'||s[x]=='l')
        return 3;
    else
        return 1;

}
int countx(char *s)
{
    int i=0,number_of_x=0;
    while(s[i]!='\0')
    {
        if(s[i]=='X'||s[i]=='x')
            number_of_x++;
        else;
        i++;
    }
    return number_of_x;
}
void check(char s1[],char s2[],int x,int y)
{
    int a,b;
    int s1x,s2x;
    a=last_latter(s1,x);
    b=last_latter(s2,y);
    if(a==b)
    {
        if(x==y)
            cout<<"="<<endl;
        else
        {
            if(s1[x]=='S'||s1[x]=='s')
            {
                if(countx(s1)>countx(s2))
                    cout<<"<"<<endl;
                else if(countx(s1)<countx(s2))
                    cout<<">"<<endl;
                else
                    cout<<"="<<endl;
            }
            else
            {
                if(countx(s1)>countx(s2))
                    cout<<">"<<endl;
                else if(countx(s1)<countx(s2))
                    cout<<"<"<<endl;
                else
                    cout<<"="<<endl;
            }
        }
    }
    else if(a>b)
        cout<<">"<<endl;
    else
        cout<<"<"<<endl;
}
int main()
{
    int size,l1,l2;
    cin>>size;
    char s1[50],s2[50];
    while(size--)
    {
        cin>>s1>>s2;
        l1=sizeofstring(s1)-1;
        l2=sizeofstring(s2)-1;
        check(s1,s2,l1,l2);
    }
}
