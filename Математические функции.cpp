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
float logarifmn,logarifm10;
logarifmn = log(56);
logarifm10 = log10(100);
cout<< "Натуральный логарифм из числа 56 равен "<<logarifmn<<endl<<"А десятичный логарифм из числа 100 равен "<<logarifm10<<endl;





  //Возведение в степень
  /*Функция pow возводит значение basis в степень  exponent.
  -basis
    Значение с плавающей точкой — основание.
  -exponent
    Значение с плавающей точкой — степень.*/
    Прототип функции pow:
     double pow( double basis, double exponent );
     long double pow( long double basis, long double exponent );
     float pow( float basis, float exponent );
     double pow( double basis,int exponent );
     long double pow( long double basis, int exponent );
    //Например
     std::cout<<"5.0 ^ 4 = "<<pow(5.0, 4)<<"\n";






  //Арксинус и арккосинус
  /*Вычисление арксинуса, функция asin возвращает арксинус значения agl.
  В тригонометрии, арксинус является обратной тригонометрической функцией синуса.
  */
  double param = 0.5;

  std::cout << "Арксинус " << param
            << " = " << (asin (param) * 180.0 / PI) // вычисляем арксинус
            << " градусов " << std::endl;






  //Модуль
  /*Функция "abs(val)" вычисляет абсолютное значение и возвращает модуль значения val (|val|).
      Прототип:
        double abs ( double val );
        float abs ( float val );
        long double abs (long double val );
  */
   std::cout << "Абсолютное значение числа 9.111 = " << abs(9.111) << endl;//выведет 9.111
   std::cout << "Абсолютное значение числа -5.1  = " << abs(-5.1) << endl;//выведет 5.1




  //Округление
  /*Функция "ceil" выполняет округление и возвращает ближайшее целое значение к val,
  но это значение будет не  меньше самого val.
    Функция "floor" выполняет округление значения val и возвращает наибольшее целое значение,
    которое не больше, чем val.
  */

  std::cout << "ceil(1.2) = "  <<  ceil(1.2)  << std::endl;// выводит 2
  std::cout << "ceil(5.7) = "  <<  ceil(5.7)  << std::endl;// выводит 6
  std::cout << "ceil(-1.2) = " <<  ceil(-1.2) << std::endl;// выводит -1
  std::cout << "ceil(-5.7) = " <<  ceil(-5.7) << std::endl;// выводит -5

  std::cout << "floor(2.3)  = "  << floor(2.3)   << std::endl;// выводит 2
  std::cout << "floor(3.8)  = "  << floor(3.8)   << std::endl;// выводит  3
  std::cout << "floor(-2.3) = "  << floor(-2.3)  << std::endl;// выводит -3
  std::cout << "floor(-3.8) = "  << floor(-3.8)  << std::endl;// выводит -4






  //Квадратный корень
  /*Функция "sqrt(val)" возвращает значение квадратного корня из val. val-Вещественное
  число. Если аргумент отрицательный, возникает ошибка области допустимых значений*/
  double param = 1024.0;

    std::cout << "sqrt(" << param << ") = "
              << sqrt(param)                  // вычисляем корень квадратный
              << std::endl;


  system("pause");
  return 0;
}
