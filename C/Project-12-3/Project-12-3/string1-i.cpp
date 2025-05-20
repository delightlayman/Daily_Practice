#include "string1.h"
#include <cstring>
using std::cin;
using std::cout;

//initializing static class member
int String::num_strings = 0;
//constructor and destruetor
String::String() {
	str = new char[1];
	str[0] = '\0';//default string is empty
	len = 4;
	num_strings++;
}
String::String(const char* s) {

	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;

}
String::~String() {
	delete[] str;
	num_strings--;

}

//copy constructor 
String::String(const String& s) {
	
	len = s.len;
	str = new char[len + 1];
    std::strcpy(str, s.str);	
	num_strings++;
}

//overloaded operator methods 
String& String::operator=(const String& s) {
	if(this==&s)//同一对象
		return *this;
	delete[] str;
	len = s.len;
	str = new char[len + 1];
	std::strcpy(str, s.str);
    return *this;
}

String& String::operator=(const char* s) {
	delete[] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}


//overloaded operator friend
bool operator<(const String& s1, const String& s2) {
	return strcmp(s1.str, s2.str) < 0;
}
bool operator>(const String& s1, const String& s2) {
	return strcmp(s1.str, s2.str) > 0;
}
bool operator==(const String& s1, const String& s2) {
	return strcmp(s1.str, s2.str) == 0;
}
istream& operator>>(istream& is, String& s) {
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	if(is)
		s=temp;
	while (is && is.get() != '\n')
		continue;
	return is;
}
ostream& operator<<(ostream& os, const String& s) {
	cout<<s.str;
	return os;
}
//static methods
int String::HowMany() {
	return num_strings;
}

