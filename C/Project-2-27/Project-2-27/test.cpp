#include <iostream>
//#include <cmath>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


//class Solution {
//public:
//    bool canBeValid(string s, string locked) {
//        int n = s.size();
//        if (n % 2 != 0 || (s[0] == ')' && locked[0] == '1') || (s[n - 1] == '(' && locked[n - 1] == '1'))
//            return 0;
//
//        int cnt = 0;//'('������,��')'��--
//        for (int i = 0; i < n; i++) {
//            if (cnt == 0 && s[i] == '(') {
//                cnt++;
//                continue;
//            }
//            else if (cnt == 0 && s[i] == ')' && locked[i] == '0') {
//                //s[i]='(';
//                cnt++;
//                continue;
//            }
//            else if (cnt == 0 && s[i] == ')' && locked[i] == '1')
//                return 0;
//
//            if (cnt > 0 && s[i] == ')')
//                cnt--;
//            else if (cnt > 0 && s[i] == '(' && locked[i] == '0')
//                cnt--;
//            else if (cnt > 0 && s[i] == '(' && locked[i] == '1')
//                cnt++;
//        }
//
//        return cnt == 0;
//    }
//};


//����ֵ�޷�����---���
// class Solution {
// public:
//     template <class T> 
//     void swap(T& a, T& b) {
//         T tmp = a;
//         a = b;
//         b = tmp;
//     }

//     int str_to_num(const string& s) {
//         int len = s.size();
//         if(!len)
//             return 0;
//         int res = 0;
//         for (int i = 0; i < len; i++) {
//             res *= 10;
//             res += (s[i] - '0');
//         }
//         return res;
//     }
//     string& num_to_str(int num) {
//         string* tmp = new string;
//         if(!num){
//             tmp->push_back('0');
//             return *tmp;
//         }

//         while (num) {
//             int a = num % 10;
//             tmp->push_back(a + '0');
//             num /= 10;
//         }
//         return *tmp;
//     }

//     string& reverse_str(const string& str) {
//         string* tmp = new string(str);
//         int len = tmp->size();
//         if(!len){
//             tmp->push_back('0');
//             return *tmp;
//         }

//         for (int i = 0, j = len - 1; i < j; i++, j--)
//             swap((*tmp)[i], (*tmp)[j]);
//         return *tmp;
//     }
//     string addStrings(string num1, string num2) {
//         int a1 = str_to_num(num1);
//         int a2 = str_to_num(num2);


//         return reverse_str(num_to_str(a1 + a2));
//     }
// };


//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//
//        int len_1 = num1.size() - 1;
//        if (len_1 < 0) return num2;
//
//        int len_2 = num2.size() - 1;
//        if (len_2 < 0) return num1;
//
//        string ans;
//        int carry = 0;
//        while (len_1 >= 0 || len_2 >= 0 || carry > 0) {
//            int a = len_1 >= 0 ? (num1[len_1--] - '0') : 0;
//            int b = len_2 >= 0 ? (num2[len_2--] - '0') : 0;
//            int c = a + b + carry;
//            if (c > 9) {
//                carry = 1;
//                c -= 10;
//            }
//            else
//                carry = 0;
//
//            ans.push_back(c - '0');
//        }
//
//        reverse(ans.begin(), ans.end());
//        return ans;
//    }
//};


//�ӷ�
//123=100+20+3 ��0����
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0")
//            return "0";
//
//        int len1 = num1.size();
//        int len2 = num2.size();
//
//        vector<int> ans(len1 + len2);
//        //ӳ��+�洢  ӳ���ϵ��i+j+1 ��λ��ans[0]���洢��λ ��ĩλ ans[i+j+1] 
//        for (int i = len1 - 1; i >= 0; i--) {
//            int a = num1[i] - '0';
//            for (int j = len2 - 1; j >= 0; j--) {
//                int b = num2[j] - '0';
//                ans[i + j + 1] += a * b;//������ͬӳ���ϵ���ۼ�����
//            }
//        }
//
//        for (int i = len1 + len2 - 1; i >0; --i) {
//            ans[i - 1] += ans[i] / 10;//��λ
//            ans[i] %= 10;
//        }
//        int si = ans[0] ? 0 : 1;
//        string s;
//        while (si < len1 + len2) {
//            s.push_back(ans[si] + '0');
//            si++;
//        }
//
//        return s;
//    }
//};


//class Solution {
//public:
//
//    int removeDuplicates(vector<int>& nums) {
//        int len = nums.size();
//        int i = 0;
//        int j = 1;
//        int cnt = 1;//��ǰi����
//        while (j < len) {
//            if (nums[j] != nums[i]) {
//                if (cnt == 1) {
//                    ++i;
//                    nums[i] = nums[j++];
//                }
//                else if (cnt >= 2) {
//                    nums[i + 1] = nums[i];
//                    i += 2;
//                    nums[i] = nums[j++];
//                    cnt = 1;
//                }
//            }
//            else
//                cnt++;
//            j++;
//        }
//
//        return i + 1;
//    }
//};

//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int len = nums.size();
//        int cur = 2;
//        for (int i = 2; i < len; i++) {   //ǰ����ô���ֱ�����ڱȽ�
//            if (nums[i] != nums[cur - 2]);
//            nums[cur++] = nums[i];
//        }
//        return cur;
//    }
//};

//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//
//        vector<int> cnt(32);
//        int si = nums.size();
//        for (int i = 0; i < si; i++) {
//            int tmp = nums[i];
//            for (int j = 1; j < 32&&tmp; j++) {
//                cnt[j] += tmp & 1;
//                tmp >>= 1;
//            }
//        }
//        int val = 0;
//        for (int i = 1; i < 32; i++) {
//            int a = 1<<(i-1);
//            val += cnt[i] % 3?a:0;
//        }
//        return val;
//    }
//};



//2*2λ���֣�1203��ǰ2λ��p=1+2����2λn=3  p=n
//1 <= low <= high <= 10e4  
class Solution {
public:
    //�Ƿ�Ϊż��λ
    int bits_gain(int n) {
        int len = 0;
        if (!n)
            return 1;
        while (n) {
            len++;
            n /= 10;
        }
        return len;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;
        //Ѱ��ż��ͷ��
        while (low <= high) {
            int len = bits_gain(low);
            int exp = pow(10, len);
            if ((len & 1)== 0) {
                int mi = min(high, exp - 1);
                for (int i = low; i <= mi; ++i) {
                    int ph = 0;
                    int nh = 0;
                    int tmp = i;
                    for (int j = 1; j <= len; ++j) {
                        if (j <= len / 2) {
                            nh += tmp % 10;
                        }
                        else {
                            ph += tmp % 10;
                        }
                        tmp /= 10;
                    }
                    if (ph == nh)
                        ans++;
                }
            }
            low = exp;
        }
        return ans;
    }
};

int main() {

    /*string s = "()))(()(()()()()(((())())((()((())";
    string locked = "1100000000000010000100001000001101";
    Solution s1;
    cout << s1.canBeValid(s, locked)<<endl;
    cout<<sqrt(4);*/

    /*const char* p = "123";
    char arr[12] = "123";
    cout<<(void*)arr<<endl;
    cout << (void*)p << endl;
    cout << (void*)"123" << endl;*/

    Solution s;
    vector<int> nums = { 2,2,3,2 };
    int low = 1,high = 100;
    cout << s.countSymmetricIntegers(low, high)<< endl;


    //Solution s;
    //cout<<s.addStrings("123", "456");
    //cout << s.multiply("123", "456") << endl;
    return 0;   

}