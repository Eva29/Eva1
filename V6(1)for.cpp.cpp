#include <iostream>
using namespace std;
 int main()
 {
     int a,b,n;
     cout<<"Vvedite otrezok ot a do b"<<endl;
     cin>>a>>b;

     for(n=a; n<=b; n++)
     {
         if(n%10==7) cout<<n<<endl;
     }
     return 0;
 }
