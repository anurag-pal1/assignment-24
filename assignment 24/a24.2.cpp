#include<iostream>
using namespace std;
int LargestDigit(int n)
{
    int i,num,digit=0,temp,m;
    m=-1;
    num=n;
    while(num!=0)
    {
      temp=num%10;
      num=num/10;
      if(temp>m)
      {
          m=temp;
      }
    }
    return m;
}
int main()
{
     int x;
     cout<<"Enter a number: ";
     cin>>x;
     int result;
     result=LargestDigit(x);
     cout<<endl<<"Largest number in digit is: ";
     cout<<result;
      return 0;
}

