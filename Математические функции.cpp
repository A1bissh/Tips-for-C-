#include<iostream>
#include<conio.h>
#include<cmath>//для математики
#include<clocale>
using namespace std;

int main()
{
  setlocale(LC_CTYPE,"rus");
  //Математические функции и выражения

  //Синус
  /*Вычисление синуса, функция sin возвращает синус угла agl, переведенного в
  радианы. Для перевода в радианы градусы умножаем на числи пи и дели на 180*/
  float const pi=3.14159265;
  int ugol=30;
  float sinus;
  sinus= sin((ugol*pi)/180);
  cout << "Синус угла" << ugol << "градусов= "<< sinus << endl;

  //Косинус
  /*Вычисление косинуса, функция cos возвращает косинус угла a, переведенного в
  радианы. Для перевода в радианы градусы умножаем на числи пи и дели на 180*/
  float cosinus;
  cosinus= cos((ugol*pi)/180);
  cout << "Косинус угла"<< ugol <<"градусов= "<< cosinus <<endl;

  //Тангенс
  /*Вычисление тангенса, функция tan возвращает тангенс угла agl, переведенного
  в радианы.*/
  float tangens;
  tangens= tan((ugol*pi)/180);
  cout<<"Тангенс угла"<< << "градусов= "<< tangens <<endl;

  //Логарифм
  /*Функция log вычисляет натуральный логарифм от val и возвращает его.
  Натуральный логарифм является базовым логарифмом. Натуральный логарифм —
  обратная функция функции экспоненты exp. Чтобы вычислить десятичный логарифм
  (логарифм с основанием 10) существует функция log10.*/


  Завершить позже!!!!!!!!!


  system("pause");
  return 0;
}
