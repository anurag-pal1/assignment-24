#include<iostream>
using namespace std;
int prime(int x)
{
    int i,flag=0;
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            flag++;
        }
    }
    return flag;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result=prime(n);
    if(result==0)
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}
