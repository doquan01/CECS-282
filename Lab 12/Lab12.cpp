#include <iostream>
#include <sstream>
#include <typeinfo>
#include <vector> // vector class-template definition
using namespace std;
template < typename X>
int ReadInput(const string &s, vector<X> &v){
        istringstream is(s);
        int n;
        if (typeid(int) == typeid(X))
        {
        while (is >> n)
        {
                v.push_back(n);
        }
        }
        //Check type X for char
        if (typeid(char) == typeid(X))
        {int i = 0;
        while (i < s.length())
        {
            v.push_back(s.at(i));
            i++;
        }
        }
        return v.size();
}

// function template palindrome definition
template < typename X>
bool palindrome(const vector<X> &vec)
{
        auto r = vec.crbegin();
        auto i = vec.cbegin();
        while (r != vec.crend() && i != vec.cend())
        {
            if (*r != *i)
            {
                    return false;
            }
            ++r;
            ++i;
        }
        return true;
}

// function template printVector definition
template < typename Y>
void printVector(const vector<Y> &vec)
{
        for (auto i = vec.cbegin(); i != vec.cend(); ++i)
        {
                cout << *i << ' ';
        }
}
int main()
{
        vector<int> iv;
        vector<char> ic;
        int x = 0;
        cout << "Enter single digit separted by a space:" << endl;
        string s;
        getline(cin, s);
        ReadInput(s,iv);
        printVector(iv);
        cout << (palindrome(iv) ? " is " : " is not ") << "a palindrome\n";
    	cout << "Enter a string without spaces:" << endl;
        getline(cin, s);
        ReadInput(s,ic);
        printVector(ic);
        cout << (palindrome(ic) ? " is " : " is not ") << "a palindrome\n";//FILL IN BLANK
    
}
