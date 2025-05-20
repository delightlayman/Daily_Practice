#include <iostream>
#include <vector>
#include <string>
#include <stack>
using std::vector;
using std::string;
using std::stack;
using std::cout;
using std::endl;
//
//class Solution {
//public:
//    int evalRPN(vector<string>& tokens) {
//        stack<int> cal;
//        for (string s : tokens) {
//            if (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/') {
//                int a = cal.top(); cal.pop();
//                int b = cal.top(); cal.pop();
//                switch (s[0]) {
//                case '+':
//                    cal.push(b + a);
//                    break;
//                case '-':
//                    cal.push(b - a);
//                    break;
//                case '*':
//                    cal.push(b * a);
//                    break;
//                case '/':
//                    cal.push(b / a);
//                    break;
//                }
//            }
//            else
//                cal.push(stoi(s));
//        }
//        return cal.top();
//    }
//};
//int main() {
//    vector<string> tokens{ "10","6","9","3","+","-11","*","/","*","17","+","5","+" };
//    Solution s;
//    std::cout << s.evalRPN(tokens) << std::endl;
//}
//
//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter";
//	int _age = 18;
//};
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���
////Student��Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿�
////�Կ��������ĸ��á�����Print���Կ�����Ա�����ĸ��á�
//class Student : public Person
//{
//protected:
//	int _stuid; // ѧ��
//};
//
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
//};
//int main()
//{
//	Student s;
//	Teacher t;
//	s.Print();
//	t.Print();
//	return 0;
//}

// Student��_num��Person��_num�������ع�ϵ�����Կ�������������Ȼ���ܣ����Ƿǳ����׻���
//class Person
//{
//protected:
//	string _name = "С����"; // ����
//	int _num = 111; 
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " ����:" << _name << endl;
//		cout << " ���֤��:" << Person::_num << endl;
//		cout << " ѧ��:" << _num << endl;
//	}
//protected:
//	int _num = 999; // ѧ��
//};
//void Test()
//{
//	Student s1;
//	s1.Print();
//};
//
//
//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//void Tes1()
//{
//	B b;
//	b.fun(10);
//}
//
//int main() {
//    //Test();
//    Tes1();
//	return 0;
//}
//
//
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//private:
//	int _d = 2;
//};
//int main()
//{
//	Base b;
//	Derive d;
//	return 0;
//}
//
//class Person {
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//};
//class Student : public Person {
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }
//};
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person Mike;
//	Func(Mike);
//	Student Johnson;
//	Func(Johnson);
//	return 0;
//}


/*
1 <= nums.length <= 10E5
1 <= nums[i] <= 10E5
1 <= k <= 10E15
//*/
//class Solution {
//public:
//    long long countSubarrays(vector<int>& nums, long long k) {
//
//        int si = nums.size();
//
//        long long sub_sum = 0;
//        long long sub_len = 0;
//        long long ans = 0;
//        auto qualified = [&]()->bool {
//            return sub_len * sub_sum < k;
//            };
//        //��������
//        //������ά����
//        for (int i = 0, j = 0; j < si; ++j) {
//            sub_len++;
//            sub_sum += nums[j];
//            if (qualified())
//                ans += sub_len;
//            else {
//                while (!qualified() && i < j) {
//                    sub_len--;
//                    sub_sum -= nums[i];
//                    i++;
//                }
//                if (qualified())
//                    ans += sub_len;
//            }
//        }
//        return ans;
//    }
//};
//
//int main() {
//    vector<int> nums{ 2,1,4,3,5 };
//    long long k = 10;
//    Solution s;
//    cout<< s.countSubarrays(nums, k) << endl;
//    return 0;
//}

/*
��������:������������ַ����� ��Ӧλ�� �ַ���ͬ ����Ŀ
1 <= n == words.length == groups.length <= 1000
1 <= words[i].length <= 10
1 <= groups[i] <= n
words �е��ַ��� ������ͬ ��
words[i] ֻ����СдӢ����ĸ��
*/
class Solution {
public:
    bool ok(const string& a, const string& b) {
        if (a.size() != b.size())
            return false;
        int len = a.size();
        int diff = 0;
        for (int i = 0; i < len; ++i) {
            if (a[i] != b[i]) {
                ++diff;
                if (diff > 1)
                    return false;
            }
        }
        return diff;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;
        vector<string> tmp;

        int len = groups.size();
        int max = 0;
        for (int j = 0; j < len; ++j) {
            int num = j;
            tmp.push_back(words[j]);
            for (int i = j + 1; i < len; ++i) {
                if (groups[num] != groups[i] && ok(tmp.back(), words[i])) {
                    num = i;
                    tmp.push_back(words[i]);
                }
            }
            if (tmp.size() > max) {
                max = tmp.size();
                ans = tmp;
            }
            tmp.clear();
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string> words{ "bad","dc","bc","ccd","dd","da","cad","dba","aba" };
    vector<int> groups{ 9,7,1,2,6,8,3,7,2 };
    vector<string> ans = s.getWordsInLongestSubsequence(words, groups);
    for (auto& str : ans)
        cout << str << endl;
}