#include<iostream>
using namespace std;
int factorial(int n)
{
    int i,prod=1;
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    return prod;
}
int main()
{
    int a,i,j;
    cout<<"Enter number of rows: ";
    cin>>a;
    for(i=0;i<a;i++)
    {
        for(j=0;j<(a-i-2);j++)
            cout<<" ";
        for(j=0;j<=i;j++)
            cout<<factorial(i)/(factorial(j)*factorial(i-j));
        cout<<endl;
    }
    return 0;
}
