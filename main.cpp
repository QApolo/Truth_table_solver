#include <iostream>
#include <math.h>
#include <algorithm> 

using namespace std;


string bin(int n,int m)
{
    
    string b="";
    int j=0;
    while(n>0)
       b+=to_string(n%2),n/=2,j++;
    for(int i=0;i<(m-j);i++)b+="0";
    reverse(b.begin(),b.end());
return b;
}
string res(string b,int l,string ac,string exp)
{
    if(l==0)return ac;
 return "noyet";
}

int vars(string exp)
{
    int c=0,l=exp.length();
    char e=32;
    for(int i=0;i<l;i++)
    {
        e=exp[i];
        if(e>=65&&e<=90&&e!='v')
        c++;
        else if(e>=97&&e<=122&&e!='v')c++;
    }
return c;
}
int main()
{
    string b,exp;
    int n,p;
    getline(cin,exp);
    n=vars(exp);//n=exp.length();

    p=pow(2,n);
    for(int i=0;i<p;++i)
    {
        b=bin(i,n);
        cout<<b<<"="<<res(b,b.length(),"1",exp)<<endl;
    }
    
return 0;
}
