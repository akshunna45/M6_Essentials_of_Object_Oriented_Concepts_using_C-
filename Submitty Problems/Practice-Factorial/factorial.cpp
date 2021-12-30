#include<iostream>
int factorial(int number)
{
    int res=1,i;
    if (number<0) 
    {
        return -1; 
    }
    else
    {   
        for (i=1;i<=number;i++)
            res=res*i;
        return res;
    }
}
int main() 
{
    int num=0, N=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d", &num);
        printf("%d\n",factorial(num));
    }
    return 0;
}
