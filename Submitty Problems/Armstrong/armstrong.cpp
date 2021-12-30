#include"iostream"
#include"bits/stdc++.h"
using namespace std;
int digits(int number)
{
    int count=0;
    while(number>0)
    {
        count=count+1;
        number=number/10;
    }
    return count;
}
int main() 
{
    int number,check,sum,arm;
    cin>>number;
    for(int i=0;i<number;i++)
    {
        sum=0;
        cin>>check;
        arm=check;
        while(check>0)
        {
            sum=sum+pow(check%10,digits(arm));
            check=check/10;
        }
        if(sum==arm)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }        
    }
}