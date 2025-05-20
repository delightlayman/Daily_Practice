#pragma warning(disable:4996)
#pragma once
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>

using std::istream;
using std::ostream;

class String {
private: 
	char* str;
	int len;
	static int num_strings;		//字符串数量
	static const int CINLIM = 80;
public:
	//constructor and destruetor
	String();
	String(const char* s);
	~String();

	//copy constructor 
	String(const String& s);

	//reportor
	int length() const { return len; };

	//overloaded operator methods 
	String& operator=(const String& s);//对象赋值
	String& operator=(const char* s);
	char& operator[](int i) { return str[i]; };
	const char& operator[](int i)const { return str[i]; };//适用常量对象

	//overloaded operator friend
	friend bool operator<(const String& s1, const String& s2);
	friend bool operator>(const String& s1, const String& s2);
	friend bool operator==(const String& s1, const String& s2);
	friend istream& operator>>(istream& is, String& s);
	friend ostream& operator<<(ostream& os, const String& s);
	//static methods
	static int HowMany();
};

#endif
