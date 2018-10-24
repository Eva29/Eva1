#include <iostream>
using namespace std;
 int main()
 {
     int a,b,n,k,s;
     cout<<"Vvedite posledovatelinosti ot a do b"<<endl;
     cin>>a>>b;

     k=0;
     for(n=a; n<=b; n++)
     {
         k=k++;
         cout<<"Kolicestvo cisel v posledovatelinosti "<<k<<endl;

         s=0;
         if(n>0 and n<344 and n%2==0) s=s+n;
         cout<<"Summa -- "<<s<<endl;
         return 0;
    }

 }
