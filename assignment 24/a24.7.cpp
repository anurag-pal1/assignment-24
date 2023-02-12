#include<iostream>
using namespace std;
void overloadedfunction(int x)
{
    switch(x)
    {
        case 1:
            float r,Area;
            cout<<"Enter radius of circle: ";
            cin>>r;
            Area=3.14*r*r;
            cout<<"Area of circle: "<<Area<<endl;
            break;
        case 2:
            int base,h,A;
            cout<<"Enter base and height of triangle: ";
            cin>>base>>h;
            A=(base*h)/2;
            cout<<"Area of triangle: "<<A<<endl;
            break;
        case 3:
            int l,b,a;
            cout<<"Enter length and breadth of rectangle: ";
            cin>>l>>b;
            a=l*b;
            cout<<"Area of rectangle: "<<a<<endl;
            break;
        default:
            cout<<"PLEASE! Enter valid choice!!!"<<endl;
    }
}
int main()
{
     int n;
    cout<<"Press 1 for Area of Circle."<<endl;
    cout<<"Press 2 for Area of Triangle."<<endl;
    cout<<"Press 3 for Area of Rectangle."<<endl;
    cout<<"Enter a number: ";
    cin>>n;
    overloadedfunction(n);
    return 0;
}
