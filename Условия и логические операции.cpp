#include<conio.h>
#include<iostream>

using namespace std;

int main ()
{
  int n1, n2, res;
  bool isAwake = true;

  /* условие "если" . Работает с любыми типами данных */
  // первый способ
  if (res == 0 ) 
  {
    res++;
    cout<< res <<endl;
  }


  // добавляется иначе
  if(! isAwake)
    cout<<"isAwake = false"<<endl;
  else
    cout<<"isAwake = true"<<endl;


  // Альтернативный способ записи, делает то же, что и предыдущий
  isAwake==false ? cout<<"isAwake=false"<<endl; : cout<<"isAwake=true"<<endl;


  /* Условие switch case. Типо вложеные "If"ы, но проверяет только на равенство числу в "case"е */
  switch (n2)
  {
    case 1:
      n2++;
      cout<<"n2=2"<<endl;
    break;

    case 15:
      n2++;
      cout<<"n2=16"<<endl;
    break;

    case 99:
      n2++;
      cout<<"n2=100"<<endl;
    break;
  default:
    cout<<"fuck u"<<endl;


  }

  /* Составные условия */
  // И( && ) - Составное условие истинно, если истинны оба простых условия
  if( (n1==2)&&(n2==8) ){
    res=10;
    cout<< "Result is "<< res <<endl;
  }
  // ИЛИ( || )- Составное условие истинно, если истинно, хотя бы одно из простых условий
  if( (n1==2) || (n2==8) ){
    res=n1=n2;
    cout<< "Result is "<< res <<endl;
  }
  // НЕ( ! )-Операция Условия истинна, если внутреннее условие ложно
  if( !a==3) {
    //если а не равно 3,то условие выполнится
    cout<<"it's true\n";
  }
  else{
    cout<<"a is equal 3\n";
  }


  system("pause");
  return 0;
}
