//Температура С в градусах Цельсия изменяется от 0 до 100 с шагом 5. Напечатать таблицу перевода температуры из градусов Цельсия в
//градусы Фаренгейта (F). Формула перевода: F=1.8C+32
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
