// #include <iostream>
// using namespace std;
// class Useless{
// private:
//     int n;//number of elements
//     char *pc;
//     static int ct;
//     void ShowObject()const;
// public:
//     //constructor
//     Useless();
//     explicit Useless(int k);//显示转换构造构造函数
//     Useless(const Useless &l);//复制构造汉书
//     Useless(Useless &&r);//移动构造函数
//     Useless(int k,char ch);
//     //destructor
//     ~Useless();
//     Useless operator+(const Useless & l)const;
//     void ShowData()const;
// };

// int Useless::ct=0;

// Useless::Useless(){
//     ++ct;
//     n=0;
//     pc=nullptr;
//     cout<<"Default constructor called; number of objects: "<<ct<<endl;
//     ShowObject();
// }

// Useless::Useless(int k):n(k){
//     ct++;
//     cout<<"int constructor called; number of object: "<<ct<<endl;
//     pc=new char[n];
//     ShowObject();
// }

// Useless::Useless(int k,char ch):n(k){
//     ++ct;
//     cout<<"int and char constructor called; number of object: "<<ct<<endl;
//     pc=new char[n];
//     for(int i=0;i<n;i++){
//         pc[i]=ch;
//     }
//     ShowObject();
// }

// Useless::Useless(const Useless &l):n(l.n){
//     ++ct;
//     cout<<"copy constructor called; number of object: "<<ct<<endl;
//     pc=new char[n];
//     for(int i=0;i<n;i++){
//         pc[i]=l.pc[i];
//     }
//     ShowObject();
// }

// Useless::Useless(Useless &&r):n(r.n){
//     ct++;
//     cout<<"move constructor called; number of object: "<<ct<<endl;
//     pc=r.pc;
//     r.pc=nullptr;
//     r.n=0;
//     ShowObject();

// }

// Useless::~Useless(){
//     cout<<"destructor called; object left: "<<--ct<<endl;
//     cout<<"delete objects:\n";
//     ShowObject();
//     delete []pc;
// }

// Useless Useless::operator+(const Useless &l)const{
//     cout<<"Enter operator+()\n";
//     Useless temp=Useless(n+l.n);
//     for(int i=0;i<n;i++){
//         temp.pc[i]=pc[i];
//     }
//     for(int i=n;i<temp.n;i++){
//         temp.pc[i]=l.pc[i-n];
//     }
//     cout<<"temp object:\n";
//     cout<<"Leaving operator+()\n";
//     return temp;
// }

// void Useless::ShowObject()const{
//     cout<<"Number of elements:"<<n;
//     cout<<" Data address: "<<(void *)pc<<endl;
// }

// void Useless::ShowData()const{
//     if(!n){
//         cout<<"(object empty)";
//     }
//     else{
//         for(int i=0;i<n;i++){
//             cout<<pc[i];
//         }        
//     }
//     cout<<endl;

// }


// int main(){
//     {
//         Useless one(10,'x');
//         Useless two=one;
//         Useless three(20,'o');
//         Useless four(one+three);
//         cout<<"object one: ";
//         one.ShowData();
//         cout<<"object two: ";
//         two.ShowData();
//         cout<<"object three: ";
//         three.ShowData();
//         cout<<"object four: ";
//         four.ShowData();
//     }
//     return 0;
// }


// stdmove.cpp -- using std::move()
#include <iostream>
#include <utility>
// use the following for g++4.5
// #define nullptr 0
// interface
class Useless
{
private:
    int n;          // number of elements
    char * pc;      // pointer to data
    static int ct;  // number of objects
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f); // regular copy constructor
    Useless(Useless && f);      // move constructor
    ~Useless();
    Useless operator+(const Useless & f)const;
    Useless & operator=(const Useless & f); // copy assignment
    Useless & operator=(Useless && f);      // move assignment 
    void ShowData() const;
};

// implementation
int Useless::ct = 0;

Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
 }

Useless::Useless(int k) : n(k)
{
    ++ct; 
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k)
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f): n(f.n) 
{
    ++ct;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f): n(f.n) 
{
    ++ct;
    pc = f.pc;       // steal address
    f.pc = nullptr;  // give old object nothing in return
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f)  // copy assignment
{
    std::cout << "copy assignment operator called:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for (int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)       // move assignment
{
    std::cout << "move assignment operator called:\n";
    if (this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f)const
{
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for (int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

void Useless::ShowObject() const
{ 
    std::cout << "Number of elements: " << n;
    std::cout << " Data address: " << (void *) pc << std::endl;
}

void Useless::ShowData() const
{
    if (n == 0)
        std::cout << "(object empty)";
    else
        for (int i = 0; i < n; i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

// application
int main()
{
    using std::cout;
    {
        Useless one(10, 'x');
        Useless two = one +one;   // calls move constructor
        cout << "object one: ";
        one.ShowData();
        cout << "object two: ";
        two.ShowData();
        Useless three, four;
        cout << "three = one\n";
        three = one;              // automatic copy assignment
        cout << "now object three = ";
        three.ShowData();
        cout << "and object one = ";
        one.ShowData();
        cout << "four = one + two\n";
        four = one + two;         // automatic move assignment
        cout << "now object four = ";
        four.ShowData();
        cout << "four = move(one)\n";
        four = std::move(one);    // forced move assignment
        cout << "now object four = ";
        four.ShowData();
        cout << "and object one = ";
        one.ShowData();
    }
     std::cin.get();
}