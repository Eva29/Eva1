#include <iostream>
using namespace std;
 int main()
 {
     int a,b,y,h,x;
     cout<<"Vvedite otrezok ot a do b ; sag h ; znacenie iksa - x"<<endl;
     cin>>a;
     cin>>b;
     cin>>h;


     for (x=a; x<=b; x+=h)
     {
         y=4*x*x-5*x-10;
         cout<<y<<endl;
     }
 }
