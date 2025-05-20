#include <iostream>
#include "mytime.h"

Time::Time() {
	hours = minutes = 0;
}

Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}

void Time::AddMin(int m) {
	minutes += m;
}

void Time::AddHr(int h) {
	hours += h;
}

Time Time::operator+(const Time & t) const{
	Time sum;
	sum.minutes=minutes+t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;

	return sum;
}

Time Time::operator-(const Time& t) const {
	Time diff;
	int tot_0 = hours * 60 + minutes;
    int tot_1 = t.hours * 60 + t.minutes;

	diff.hours = (tot_0 - tot_1) / 60;
	diff.minutes=(tot_0 - tot_1) % 60;
    return diff;
}

Time Time::operator*(double n) const{
	Time product;
	long long tot_min = hours * 60 + minutes;
	product.hours = tot_min  / 60;
    product.minutes = tot_min % 60;
	return product;
}

void Time::show() const {
	std::cout << hours << " hours," << minutes << " minutes." << std::endl;

}
