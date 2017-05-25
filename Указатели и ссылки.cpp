#include<iostream>
using namespace std;
int main()
{
  //для начала константы
  //это неизменяемые переменные
  //для присвоения константы пишется "const" потом тип константы(как у переменных)
  //а потом ее имя и значение
  const float pi = 3.14;

  /* УКАЗАТЕЛЬ- переменная, значением которой является адрес другой
  переменной(другой ячейки памяти).
  Для создания указателя нужна переменная, на которую он будет ссылаться
  Сначала указываем тип указателя(оно должен быть таким же, как у переменной),
  Затем ставим "*" и пишем имя указателя. Принято указатели называть "ptr<имя переменной>".
  Потом присваеваем ей адркс переменной(ставим амперсант(&) и пишем имя переменной)
  */
  int value = 8;
  int *ptrvalue = &value;
  /*Теперь ""*ptrvalue" является указателем на переменную "value" и при изменении
  указателя будет меняться сама переменная.
  */
  //чтобы узнать адрес указателя при выводе просто не ставь звездочку вначале
  cout<< &value<<" - "<<ptrvalue;
  //выводим адрес "value" и "ptrvalue". В данном случае адреса будут абсолютно идентичны

  int **ptr_ptrvalue = &ptrvalue;
  //это указатель на указатель(поэтому 2 звездочки).

  /*ССЫЛКИ-особый тип данных, являющийся скрытой формой указателя, который при
  использовании автоматически разыменовывается.
  Для создания ссылки нужна переменная. Сначала ставим тип ссылки, потом "&", и
  имя для ссылки. Затем просто указываем имя переменной, на которую ссылаемся.
  */
  int &ref = value;
  /*
    Основная разница между ссылкой и указателем заключается в самом механизме
    работы этих 2 вещей. Основная функция указателей- организация динамических
    объектов, которые могут изменяться(увеличиваться, уменьшаться, менять значение
    другим способом ). А ссылки пердназначены для огранизации прямого доступа к
    тому или иному объекту(благодаря ссылке мы имее прямой доступ к объекту).
    Указатель ссылается на участок памяти, используя адрес объекта, а ссылка на
    сам объект по его имени
  */


  system("pause");
  return 0;
}
