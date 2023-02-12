#include<iostream>
using namespace std;
int pow(int n, int p)
{
   int i,result=1;
   for(i=1;i<=p;i++)
   {
      result=result*n;
   }
   return result;
}
int main()
{
    int x,y;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    int result=pow(x,y);
    cout<<endl<<"Resultant value is: "<<result;
    return 0;
}
