//�������� ����������� ���������, ������� �� ���� ������ ����������� ������ x,y, �� ������������� 10000, ������� ���������� �����
//��������, �� ���� ����� ������� ����������� �����, �� ������� x � y ������� ��� �������.
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



