//#include <iostream>
//
//using std::cout;
//using std::endl;
//
//class base {
//public:
//	int bv;
//    base(int b) :bv(b) {}
//	virtual int value()const {
//		cout<<"base value :";
//		return bv;};
//	void show()const { cout << "base show" << endl; }
//	virtual ~base() {};
//
//
//};
//class derived :public base {
//private:
//    int dv;
//public:
//	derived(int d,int v) :base(v), dv(d) {}
//	virtual int value()const {
//		cout<<"derived value :";
//		return dv;};
//	void show()const { cout << "derived show" << endl; }
//	void set()const { cout << "derived set" << endl; }
//	virtual ~derived() {};
//
//};
//
//int main() {
//	base* b = new derived(1,2);
//	(*b).value();
//	cout << (typeid(*b) == typeid(derived) ? 1 : 0)<< endl;
//	return 0;
//
//}

//
//#include <iostream>
//using namespace std;
//int main() {
//    /*int x = 100;
//    const int y = 1;
//    const int* px = &x;
//    const int* py = &y;
//    cout <<px<<":" << *px <<"   " << &x << " :" << x << endl;
//    cout <<py<<":" << *py << "   " << &y << " :" << y << endl;
//    int* pa = const_cast<int*>(px);
//    int* pb = const_cast<int*>(py);
//    cout <<pa<<":" << *pa << "   " << &x << " :" << x << endl;
//    cout <<pb<<":" << *pb << "   " << &y << " :" << y << endl;
//    *pa += 10;
//    *pb += 1;
//    cout <<pa<<":" << *pa << "   " << &x << " :" << x << endl;
//    cout <<pb<<":" << *pb << "   " << &y << " :" << y << endl;*/
//
//    cout<<'A'<<endl;
//
//    return 0;
//}
//
//// fileio.cpp -- saving to a file
//#include <iostream> // not needed for many systems
//#include <fstream>
//#include <string>
//
//int main()
//{
//    using namespace std;
//    string filename;
//
//    cout << "Enter name for new file: ";
//    cin >> filename;
//
//    // create output stream object for new file and call it fout
//    ofstream fout(filename.c_str());
//
//    fout << "For your eyes only!\n";        // write to file
//    cout << "Enter your secret number: ";   // write to screen
//    float secret;
//    cin >> secret;
//    fout << "Your secret number is " << secret << endl;
//    fout.close();           // close file
//
//    // create input stream object for new file and call it fin
//    ifstream fin(filename.c_str());
//    cout << "Here are the contents of " << filename << ":\n";
//    char ch;
//    while (fin.get(ch))     // read character from file and
//        cout << ch;         // write it to screen
//    cout << "Done\n";
//    fin.close();
//    // std::cin.get();
//    // std::cin.get();
//    return 0;
//}



// fileio.cpp -- saving to a file
#include <iostream> // not needed for many systems
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    int x = 10;
    for(int i = 0; i < 15; i++)
        cout<<i<<":" << ceil(i / x) << endl;
    return 0;
}
