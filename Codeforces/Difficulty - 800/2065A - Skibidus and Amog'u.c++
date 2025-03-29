//https://codeforces.com/contest/2065/problem/A
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string word;
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        
        word[word.length() - 1] = '\n';
        word[word.length() - 2] = 'i';
        
        cout << word;
    }
    
    return 0;
}