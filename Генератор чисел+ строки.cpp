#include<iostream>
#include<conio.h>
#include<ctime>
#include<string>

using namespace std;

int main()
{
    srand(time(NULL)); //запуск счетчика для рандомных чисел
  //просто выдать рандомные числа
    //вывожу на экран 5 рандомных чисел
    cout<<"1st random number: "<< rand() % 100 << endl;
    cout<<"2nd random number: "<< rand() % 100 << endl;
    cout<<"3rd random number: "<< rand() % 100 << endl;
    cout<<"4th random number: "<< rand() % 100 << endl;
    //выводит числа в диапозоне +- 100
    cout<<"5th random number: "<< rand() % 200 - 100<< endl;


  system("pause");
  return pause;
}
