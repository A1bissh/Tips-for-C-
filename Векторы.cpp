#include<iostream>
#include<vector>//Нужна для использования векторов
#include<iterator>//Для итераторов

using namespace std;

int int main() {
/* Вектор можно описать как абстрактную модель,
   которая имитирует динамический массив.

*/

vector<int> myVector; // мы создали пустой вектор типа int
myVector.reserve(10); // тут мы зарезервировали память под 10 элементов типа int

vector<int> myVector(10);//тоже самое , но одной строкой
/*
 Эта запись эквивалентна двум предыдущим, то есть здесь мы объявили вектор
 с начальным размером в 10 элементов типа int. Но кроме этого, такой способ
 объявления вектора не просто выделяет память, но и еще инициализирует все
 элементы вектора нулями.
*/

/*Если объявить вектор первым способом, то результат работы программы будет другим,
в потоке вывода ничего не появится, так как нет начальной инициализации элементов
вектора, а значит этот способ объявления вектора выполнится быстрее. Именно в этом
и заключается разница этих способов объявления векторов.
*/

vector<int> myVector2(myVector1); // при объявлении второго вектора, копируется - первый
myVector2.size()//автоматическое определение размера вектора



vector<int> array1(10);
vector<int> array2(10);
//сравнение двух векторов-массивах
if (array1 == array2) {
        cout << "array1 == array2" << endl;



/* Работа с итераторами */

vector<int> mas(3);//cоздаем вектор длинной в 3 элемента
mas.insert(mas.end(), 4);//Ввод инфы в вектор/заполнение ячейки вектора(место куда вводить, что вводить)
mas.insert(mas.end(), 3);
mas.insert(mas.end(), 2);
//вывод на экран элементов массива(вектора)
copy(mas.begin()/*Создаем итератор начала вектора*/,
     mas.end(),/* Итератор конца */
     ostream_iterator<int>(cout," ")/* И итератор потока ввода */
   );
vector<int>::iterator it;///создаем итератор it



//Работа с векторами
  array.size()//автоматическое определение размера массива
  array.empty()//определение пустой ли массив
  array.begin()//начало массива(дляустановки итератора)
  array.end()//конец массива(для установки итератора)
  ostream_iterator<int>(cout," ")//поток вывода элементов указанного типа
  array.front()//первый элементо массива
  array.back()//последний элемент массива
  array.push_back(-11)//добавление нового элемента в конец массива
  array.clear()//удаление всех элементов массива
  array.assign(10,1);///заполнение вектора из 10 элементов числом 1
  array.at(i)// = array[i]
  for(int i=0;i<10;++i) cout<<array.at(i)<<ends;// for(int i=0;i<10;++i) cout<<array[i]<<endl;
  array.capacity()//вместимость(количество элементов, которое может содержать вектор до того, как ему потребуется выделить больше места)
  array.rbegin();//реверсионное начало
  array.rend();//реверсионный конец

  //Переворот вектора//////////////////////////////

  for(auto rit=vecInt.rbegin()/*Установили итератор в реверсионное начало вектора(цифра та же, что и была, но находится теперь в конце)*/;rit<vecInt.rend()/*идем с конца(ревирсионного начала) пока не упремся в начало(реаирсионный конец). */;++rit)
   {
       cout<<*rit<<ends;//выводим тот элемент вектора, на котором сейчас стоит итератор
   }

   /////////////////////////////////////////////////////










  return 0;
}
