//https://codeforces.com/contest/41/problem/A
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string word;
    string reverseword;
    char aux;
    
    cin >> word;
    
    cin >> reverseword;
    
    for(int i = 0, j = word.length() - 1; i < j; i++, j--)
    {
        aux = word[i];
        word[i] = word[j];
        word[j] = aux;
    }
    
    if (reverseword == word)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}