#include<iostream>
using namespace std;
void swapping(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<endl<<"x= "<<*p<<" y= "<<*q<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    swapping(&x,&y);
    return 0;
}
