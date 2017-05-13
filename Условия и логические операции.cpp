#include<conioh>
#include<iostream>

using namespace std;

int main ()
{
  int n1, n2, res;
  bool isAwake = true;

  /* условие "если" при объединении нескольких условий. Работает с любыми типами данных */
  // первый способ
  if ((res == 0 ) && (n1 != 4))
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

  system("pause");
  return 0;
}
