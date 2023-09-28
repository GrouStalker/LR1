/*2 Вариан. Большие формулы*/
#include <iostream>
#include <iomanip>
/*Hello Teacher*/
using namespace std;

int main(void)
{
    float P,Q,R,x,P1;

    cout << "Автор: Зверев Артем. " << "Задание №1 \n" << "Версия 1.1.5 \n" << "Начало: 10.09.2023; " <<"Конец: Судный день\n";
    cout << "Введите значение Y (От -10^3 да 10^3): \n";
    cin >> x;
    P1=x*x*x*x*x*x*x*x*x;
    P = x*x*(-3.3*P1 - 129.432) - 3.3;
    Q = x*x*x*(x*(5.0001*(x*x)-3.0001)-9.0001);
    R=P/Q;
    cout <<"Для x=" << x << ":" << "\n" << setw(5) << setprecision(6) <<"P=" << P << "\n" << setw(5) << setprecision(13) << "Q=" << Q << '\n' << "Для x=" << x << " " << "Результат равен " << R;
}