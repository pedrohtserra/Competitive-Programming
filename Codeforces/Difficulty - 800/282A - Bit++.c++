//https://codeforces.com/contest/282/problem/A
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    string incdec;
    int result = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> incdec;
        if (incdec == "X++" || incdec == "+X+" || incdec == "++X")
        {
            result++;
        } else {
            result --;
        }
    }
    
    cout << result;
}