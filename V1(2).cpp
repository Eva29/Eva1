//Составьте таблицу значений ф-ии y=5x^3-2x+1 на отрезке [a,b] с шагом h
#include <iostream>
using namespace std;
 int main()
 {
     int a,b,y,h,x;
     cout<<"Vvedite otrezok ot a do b ; sag h ; znacenie iksa - x"<<endl;
     cin>>a;
     cin>>b;
     cin>>h;

     x=a;
     while(x<=b)
     {
         y=5*x*x*x-2*x+1;
         cout<<y<<endl;
         x+=h;
     }
 }

