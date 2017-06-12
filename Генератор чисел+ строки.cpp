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

  // строки
    // обьявление переменной типа string
    string name;
    cout<<"Enter ur name";
    // используем функцию getline. В скобках пишем сначала функцию, которую передаем, а затем переменную, куда мы будем это записывать
    getline(cin, name);
    /*1- Дальше с этой переменной можно работать как с обычной
      2- В данной ситуации .length это длинна переменной(её кол-во символов) и проверка ведется на длинну*/
    if(name.length() != 0)
      cout<<"Ur name is "<< name;
    else
      cout<<"Error";

  system("pause");
  return pause;
}
