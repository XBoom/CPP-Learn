#include <iostream>
#include "mytime0.h"
using namespace std;

int main()
{
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();

    cout << "coding time = ";
    coding.Show();

    cout << "fixing time = ";
    fixing.Show();

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
    total.Show();

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.Show();

    total = coding + fixing + coding + planning;
    cout << "all + =";
    total.Show();
    return 0;
}