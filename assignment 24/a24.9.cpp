#include<iostream>
using namespace std;
int Sum(int x,float y)
{
    return x+y;
}
int main()
{
    int a;
    float b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    int result=Sum(a,b);
    cout<<"Sum of two different data types numbers: "<<result<<endl;
    return 0;
}
