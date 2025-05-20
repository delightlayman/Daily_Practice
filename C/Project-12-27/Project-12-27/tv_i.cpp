#include <iostream>
#include "tv.h"


bool Tv::volop() {
	if (volume < MAX_VAL) {
		volume++;
		return true;
	}
	else 
		return false;		
}
bool Tv::voldown() {
	if (volume) {
		volume--;
		return true;
	}
	else 
		return false;
}

void Tv::chanup() {
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}
void Tv::chandown() {
	if (channel > 1) 
		channel--;
	else
		channel = maxchannel;
}

void Tv::setting()const {
	using std::cout;
	using std::endl;
    cout << "TV is " << (state ? "on" : "off") << endl;
	if (state) {
		cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
		cout << "Mode = " << (mode==ANTENNA ? "ANTENNA" : "CABLE") << endl;
		cout << "Input = " << (input == TV ? "TV" : "DVD") << endl;
	
	}
}
