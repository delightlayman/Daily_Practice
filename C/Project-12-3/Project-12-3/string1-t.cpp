#include "string1.h"
const int ArSize= 10;
const int MaxLen = 81;
int main() {
	using std::cout;
    using std::cin;
	using std::endl;
	

//_CRT_SECURE_NO_WARNNINGS
	
	String name;
	cout << "Enter your name: ";
	cin >> name;
	cout << name << ",please enter up to " << ArSize << " short sayings <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++) {
		cout << i + 1 << ":";
		cin.get(temp, MaxLen);
		while(cin&& cin.get() != '\n')//cin�ǿգ����û��ȡ�ַ�ֱ�����з�
			continue;
		if (!cin || temp[0] == '\0') //�¾ɱ�׼����
			break;
		else
			sayings[i] = temp;
	}
	int total = i;

	if (total) {
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ":" << sayings[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++) {
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying:\n" << sayings[shortest] << endl;
		cout << "First alphabetically:\n" << sayings[first] << endl;
		cout << "This program used " << String::HowMany() << " String objects.\n";


	}
	else
		cout << "No input! Bye.\n";
	return 0;
}