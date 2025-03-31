//https://codeforces.com/contest/977/problem/A
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    int k;
    int lastdigit;
    
    cin >> n >> k;
    
    string nstr = to_string(n);
    lastdigit = nstr[nstr.length() - 1];
    
    for (int i = 0; i < k; i++)
    {
        if (lastdigit == '0')
        {
            n = n / 10;
        } else {
            n--;
        }
        nstr = to_string(n);
        lastdigit = nstr[nstr.length() - 1];
    }
    
    cout << n;
}