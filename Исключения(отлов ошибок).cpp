#include<iostream>

using namespace std;

int main()
{
  int num1, num2;

  cout << "Enter nim1:";
  cin >> num1;
  cout << "Enter num2:";
  cin >> num2;


  cout<< "num1 + num2 = "<< num1+num2<<endl;
  cout<< "num1 / num2 = ";

/*
  Перевод последующего кода ( try catch):
  Перед выводом мы проверяем для отлова ошибки
  если "num2" равен 0, то мы выкидываем число 123(номер ошибки)
  иначе, если все нормально, мы выводим деление/
  НО, если мы вытянули 123,то мы его ловим(работает "catch") и
  пишем "Ошибка номер 123- деленеие на 0 "
*/

  try
  {
    if ( num2 == 0 )
      throw 123;
    cout<< num1/num2<<endl;
  }
  catch(int i)
  {
    cout<< "Error № "<< i << "- divide by 0 !!!"<<endl;
  }


  system("pause");
  return 0;
}
