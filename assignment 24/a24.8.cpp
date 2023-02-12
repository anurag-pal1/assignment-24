#include<iostream>
using namespace std;
int maximum(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int result=maximum(a,b);
    cout<<"Maximum number is: "<<result<<endl;
    return 0;
}

