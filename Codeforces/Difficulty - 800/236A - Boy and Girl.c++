//https://codeforces.com/contest/236/problem/A
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string name;
    char aux;
    int result = 0;
    
    cin >> name;
    
    for (int i = 0; i < name.length() - 1; i++)
    {
        for(int j = 0; j < name.length() - i - 1; j++)
        {
            if(name[j] < name[j + 1])
            {
                aux = name[j];
                name[j] = name[j + 1];
                name[j + 1] = aux;
            }
        }
    }
    
    for (int i = 0; i < name.length() - 1; i++)
    {
        if(name[i] != name[i + 1])
        {
            result++;
        }
    }
    
    if (result % 2 == 0)
    {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
}