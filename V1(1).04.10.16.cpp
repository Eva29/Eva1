//Напишите эффективную программу, которая по двум данным натуральным числам x,y, не превосходящим 10000, находит наибольший общий
//делитель, то есть самое большое натуральное число, на которое x и y делятся без остатка.
#include <iostream>
using namespace std;
 int main()
 {
     int x,y;
     cout<<"Vvedite x,y kotorie <=10000"<<endl;
     cin>>x>>y;

     for(;x!=y;)
     {
         if(x>y) x=x-y;
            else  y=y-x;
         cout<<x<<endl;
     }
      return 0;
}



