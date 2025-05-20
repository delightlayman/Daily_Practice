//随机漫步
#include <iostream>
#include "vector.h"		//rand(),srand()
#include <ctime>	//time()
#include <cstdlib>

using namespace std;

int main(){

	using VECTOR::Vector;

	srand(time(0));
	double direction;
	double step_len;
	double target;
	unsigned steps = 0;

	Vector step;//步向量
	Vector result;//结果向量
	//cout <<"mode : "<< result.mode_val()<<endl;


	cout << "Enter target distance (q to quit):";
	while (cin >> target) {
		
		cout << "Enter step length:";
		if (!(cin >> step_len)) {
			break;
		}
		
		while (result.magnitude_val() < target) {
			direction = rand() % 360;
			step.reset(step_len, direction, Vector::POL);
			result=result+step;
			steps++;
		}
		cout << "After " << steps << " steps " << "the subject has the following location:\n";
		//cout << result.mode_val();
		cout << result << endl;
		result.pol_mode();
		cout << "or\n" << result << endl;
		cout << "Average steps length is " << result.magnitude_val() / steps << endl;
        
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit):";

	}
	cout << "Bye!\n";
	cin.clear();

	while (cin.get() != '\n') 
		continue;
	
	return 0;
}