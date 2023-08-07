#include <iostream>
#include "mytime0.h"
using namespace std;

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time Time::Sum(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator*(double m, const Time & t)	//friend not used in definition
{
	Time sum;
    sum.minutes = t.minutes % 60;
    sum.hours =  t.hours + t.minutes * m / 60;	
  	sum.hours = sum.hours % 24;
    return sum;
}


void Time::Show() const
{
    cout << hours << " hours, " << minutes << " minutes" << endl;
}


