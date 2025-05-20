#include <iostream>
#include "mytime.h"

int main() {
	using std::cout;
	using std::endl;

	Time weeding(4, 35);
	Time waxing(2, 47);

	Time total;
	Time diff;
	Time adjusted;

	cout << "weeding time =";
	weeding.show();
	//cout << endl;

	cout << "waxing time =";
	waxing.show();
    //cout << endl;

	cout<< "total work time =";
	total = weeding + waxing;
	total.show();
	//cout << endl;

	diff = weeding - waxing;
	cout << "weeding rime - waxing time =";
	diff.show();
    //cout << endl;

	adjusted = total * 1.5;
	cout << "adiusted work time =";
	adjusted.show();
    //cout << endl;

	return 0;
}
