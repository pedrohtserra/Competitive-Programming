//https://leetcode.com/problems/palindrome-number/description/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {  
    string numero = to_string(x);
    
    for (int i = 0, j = numero.length() - 1; i < j; i++, j--)
    {
        if (numero[i] != numero[j])
        {
            return 0;
        }
    }
    return 1;
    }
};