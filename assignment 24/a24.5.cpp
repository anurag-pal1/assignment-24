#include<iostream>
using namespace std;
int Fibonacci(int x,int n)
{
   int i,flag=0;
   int a=0,b=1,c;
   for(i=2;i<=x;i++)
   {
       c=a+b;
       a=b;
       b=c;
       if(n==c)
       {
           flag++;
       }
   }
   return flag;
}
int main()
{
    int n,num;
     cout<<"Enter value of n: ";
     cin>>n;
     cout<<"Enter number: ";
     cin>>num;
     int result=Fibonacci(n,num);
     if(result!=0)
     {
         cout<<"Number is found."<<endl;
     }
     else
     {
         cout<<"Number is not found."<<endl;
     }
     return 0;
}

