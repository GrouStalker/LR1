// R=21/38
/*1 Вариант*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float P=0,P1=0,P2=0,P3=0,P4=0,Q=0,Q1=0,Q2=0,Q3=0,Q4=0,Q5=0,Q6=0,R=0,x=0;
    cout << "Здравствуй, это программа для выполнения деления между P и Q \n";
    cout << "Автор: Зверев Артем. " << "Задание №1 \n" << "Версия 1.0 \n" << "Начало: 10.09.2023; " <<"Конец: Второе пришествие\n";
    cout << "Введите значение X (От -10^3 да 10^3): \n";
    cin >> x; 
    P1 = x*x*x*x*x*x*x*x*x;
    P2 = -3.3 * P1;
    P4 = 129.432;
    P = x*x*(P2 - P4) - 3.3;
    cout << "Для x=" << x << ":" << "\n" << setw(5) << setprecision(15) <<"P1=" << P1;
    cout << "\n" << setw(5) << setprecision(15) << "P2=" << P2 << "\n";
    cout << setw(5) << setprecision(15) << "P4=" << P4 << "\n";
    cout << setw(3) << setprecision(15) << "P=" << P;
    Q1 = x*x;
    Q2 = 5.0001;
    Q4 = 3.0001;
    Q6 = 9.0001;
    Q = x*x*x*(x*(Q2*x*x-Q4)-Q6);
    cout << "\n" << setw(5) << setprecision(15) <<"Q1=" << Q1;
    cout << "\n" << setw(5) << setprecision(7) << "Q2=" << Q2 << "\n";
    cout << setw(5) << setprecision(7) <<"Q4=" << Q4;
    cout << "\n" << setw(5) << setprecision(7) <<"Q6=" << Q6;
    cout << "\n" << setw(3) << setprecision(15) << "Q=" << Q;
    R=P/Q;
    cout << '\n' << "Для x=" << x << " " << "P/Q равен " << R;
}