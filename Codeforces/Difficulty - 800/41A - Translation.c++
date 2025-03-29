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
    
    for(int i = 0; i < word.length() - 1; i++)
    {
        for(int j = 0; j < word.length() - i - 1; j++)
        {
            aux = word[j];
            word[j] = word[j + 1];
            word[j + 1] = aux;
        }
    }
    
    if (reverseword == word)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
}