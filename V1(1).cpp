//����������� � � �������� ������� ���������� �� 0 �� 100 � ����� 5. ���������� ������� �������� ����������� �� �������� ������� �
//������� ���������� (F). ������� ��������: F=1.8C+32
#include <iostream>
using namespace std;
 int main()
 {
     float t,f;
     int i;

     for(t=0; t<=100; t+=5)
     {
         f=1.8*t+32;
         cout<<t<<"gradus tselisia = "<<f<<"gradus frengheita"<<endl;
     }
 }
