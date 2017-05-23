#include<iostream>
#include<conioh>
#include<ctime>
using namespace std;

/* Немного теории.
   Если переменная-это ячейка в памяти определенного размера, то МАССИВ-
   набор ячеек(несколько связанных переменных одного типа) в которые мы так же
   можем поместить информацию.
   МНОГОМЕРНЫЙ МАССИВ- это массив из массивов, т.е. элементами массива вместо
   переменных являются другие массивы, состоящие в свою очередь из переменных того
   же типа, что и массив.
*/
int main()
{
  //тип данных в массиве может быть абсолютно любым
    //объявление массива(его типа,названия,кол-ва элементов массива и можно сразу присвоить сами элементы)
    //объявлен тип: integer; имя: arr; кол-во элементов: 3; 1й элемент=3, 2й= 7, 3й=5
    int arr [ 3 ] = { 3, 7, 5 };
    //при инициализации всех элементов массива при объявлении можно не указывать его размер
    //компилятор сам его поймет
    //в массиве отсчет элементов ведется с нуля(3ка- нулевой элемент, 7ка-первый)

  /*СПОСОБЫ ОБРАТИТЬСЯ К ЭЛЕМЕНТАМ МАССИВА:*/
    //прямое обращение к конкретному элементу
    cout << arr[0];

    // перебор циклом
    for(int i = 0; i < 3; i++ )
      cout << " " << arr[i];

    // При работе с циклами всегда нужно указывать то, с каким элементом работаешь
    //поменяли 3й элемент на 34(т.к. счет с нуля, то его порядковый номер =2)
    arr[2] = 34;

  /* Инициализировать элементы массива можно и отдельно или, например, циклом.
  Пример ниже: мы инициализируем цикл где в каждой итерации новому элементу
  массива будем присваивать новое значение пока не заполним массив
  */
    int arr2[5];
    for (i = 0; i < 5; i++)
      cin >> arr2[i];
  // Или же просто присваиваем рандомное значение  в диапозоне [ -10;10 ]
    for (i = 0; i < 5; i++)
      arr2= rand() % 20 - 10;


  /*Для инициализации многомерных массивов используются вложенные циклы или
  делается подобным образом(сначала указывается кол-во столбцов, потом строк)
  */
  int arrlot[3][2] = { {23,34}, {1,2}, {5,7} }

  // задаю через for
  int arrlot2[3][2];
  for(i=0;i<3;i++)
    for(int j=0;j<2;j++)
      arrlot2[i][j]=rand() % 10;


system("pause");
return 0;
}
