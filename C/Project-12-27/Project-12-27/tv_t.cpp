#include <iostream>
#include "tv.h"

int main(){
	using std::cout;
	Tv s42;
	cout << "Initial settings for 42\" TV:\n";
	s42.setting();
	s42.onoff();
    s42.chanup();
	cout << "\nAdjusted settings for 42\" TV:\n";
	s42.setting();

	Remote grey;
	grey.setchan(s42, 10);
	grey.volup(s42);
    grey.volup(s42);
	cout<<"\n42\" settings after using remote:\n";
    s42.setting();
	
	Tv s58(Tv::ON);
	s58.setmode();
	grey.setchan(s58, 28);
	cout << "\n58\" settings:\n";
    s58.setting();

    return 0;
}