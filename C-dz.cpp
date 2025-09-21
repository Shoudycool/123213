#include <iostream>
#include <cmath>
using namespace std;

#define task_1

#ifdef task_1

int main() {
        double a, b, s, p;
        cout << "сторона a " << endl;
    cin >> a;
        cout << "сторона b " << endl;
    cin >> b;
        s = a * b;
        p = 2 * (a + b);
        cout << "Площадь " << s << endl;
        cout << "Периметр " << p << endl;
    
return 0;
    
        }
#endif

#ifdef task_2

int main() {
    double a, b, c, s, v;
    cout << "ребро a " << endl;
    cin >> a;
    cout << "ребро b " << endl;
    cin >> b;
    cout << "ребро c " << endl;
    cin >> c;
    v = a * b * c;
    s = 2 * ( a * b + b * c + a * c);
    cout << "Объем " << v << endl;
    cout << "Площадь поверхности " << s << endl;

    return 0;
        
}
#endif

#ifdef task_3

int main() {
    double a, b, c, p;
    cout << "катет a " << endl;
    cin >> a;
    cout << "катет b " << endl;
    cin >> b;
    c = sqrt(pow(a, 2) + (b, 2));
    p = a + b + c;
    cout << "Гипотенуза " << c << endl;
    cout << "Периметр " << p << endl;

    return 0;
 
}

#endif

#ifdef task_4

int main() {
    double x1, y1, x2, y2;
    cout << "координата x1 " << endl;
    cin >> x1;
      cout << "координата y1 " << endl;
    cin >> y1;
      cout << "координата x2 " << endl;
    cin >> x2;
      cout << "координата y2 " << endl;
    cin >> y2;

    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "Расстояние между точками" << distance << endl;
    return 0;
    
}

#endif

#ifdef task_5

int main() {
   double tf; // фаренгейты
   double tc; // цельсии
    cout << "температуру в фаренгейтах " << endl;
    cin >> tf;

    tc = (tf - 32 ) * 5/9;

    cout << "Температура в цельсиях " << tc << endl;
    
    return 0;
}

#endif

#ifdef task_6

int main() {
    double x, a, y, b;
    cout << "кг шоколадных конфет " << endl;
    cin >> x;
    cout << "стоимость шоколадных конфет(рубли) " << endl;
    cin >> a;
    cout << "кг ирисок ";
    cin >> y;
    cout << "стомость карамели(рубли) " << endl;
    cin >> b;

    double price_chocolate = a / x;
    double price_caramel = b / y;
    double ratio = price_chocolate / price_caramel;
    cout << "Цена за 1 кг шоколадных конфет " << price_chocolate << endl;
    cout << "Цена за 1 кг карамельных конфет " << price_caramel << endl;
    cout << "Шоколадные конфеты дороже ирисок " << ratio << endl;
    
    return 0;
        
}

#endif

#ifdef task_7
int main() {
double a,b;
    cout << "целое положительное число a (a > b) " << endl;
    cin >> a;
    cout << "целое положительное число b " << endl;
    cin >> b;

    double count_segments = a / b;

    cout << "колличество отрезков b, в отрезках a " << count_segments << endl;

    return 0;
    
}
#endif

#ifdef task_8

int main() {
   int n, n1, n2, n3, a, b;
    n1 = n / 100;
    n2 = (n/10) % 10;
    n3 = n % 10;
    a = n1 + n2 + n3;
    cout << ("Сумма ") << a << endl;
    b = n1 * n2 * n3;
    cout << ("Произведение ") << b << endl;

    return 0;
}
#endif

#ifdef task_9

int main() {
    int long long num;

    cout << "Число больше 1000; " << endl;
    cin >> num;

    long long remainder_thousands = num % 1000;

    int digit_hundreds = remainder_thousands / 100;

    cout << "Цифра сотня " << digit_hundreds << endl;
    return 0;
    
}
#endif

#ifdef task_10

int main() {
    long long n;
    cout << "секунды " << endl;
    cin >> n;

    int hours = n / 3600;

    cout << "полные часы " << hours << endl;

    return 0;
}
#endif

#ifdef task_11

int main() {
    int a, b;
    cout << "Два целых числа a и b " << endl;
    cin >> a >> b;

    bool result = ((a % 2 != 0) && (b % 2 != 0));

    if(result)
        cout << "истина " << endl;
    else
        cout << "ложь " << endl;
    
    return 0;
}
#endif

#ifdef task_12

int main() {
     int a, b;
    cout << "Два целых числа " << endl;
    cin >> a >> b;

    bool result = (a % 2 == b %2);

    if(result)
        cout << "истина " << endl;
    else
        cout << "ложь " << endl;
    
    return 0;
}
#endif

#ifdef task_13

int main() {
      int a, b, c;
    cout << "три целых числа " << endl;
    cin >> a >> b;

    bool result = (a == -b || a == -c || b == - c);

    if(result)
        cout << "истина " << endl;
    else
        cout << "ложь " << endl;
    
    return 0;
}
#endif

#ifdef task_14

int main () {
    double num1, num2, sqrt1, sqrt2;

    cout << "Первое число " << endl;
    cin >> num1;
    cout << "Второе число " << endl;
    cin >> num2;

  sqrt1 = num1 * num1;
    
  sqrt2 = num2 * num2;

    double sum = sqrt1 + sqrt2;
    double diff = sqrt1 - sqrt2;
    double prod = sqrt1 * sqrt2;
    double qout = sqrt1 / sqrt2;

    cout << "сумма квадратов " << sum << endl;
    cout << "разность квадратов " << diff << endl;
    cout << "произведение квадратов " << prod << endl;
    cout << "частное квадратов " << qout << endl;

    return 0;
    
}
#endif

#ifdef task_15

int main() {
    double num1, num2, mod_num1, mod_num2;

    cout << "Первое число " << endl;
    cin >> num1;
    cout << "Второе число " << endl;
    cin >> num2;

 mod_num1 = abs(num1);
 mod_num2 = abs(num2);

    double sum = mod_num1 + mod_num2;
    double diff = mod_num1 - mod_num2;
    double prod = mod_num1 * mod_num2;
    double qout = mod_num1 / mod_num2;

    cout << "сумма модулей " << sum << endl;
    cout << "разность модулей " << diff << endl;
    cout << "произведение модулей " << prod << endl;
    cout << "частное модулей " << qout << endl;

    return 0;
}
    #endif
