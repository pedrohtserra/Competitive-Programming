#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char string[102];
    int n = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n + 1; i++)
    {
    fgets(string, sizeof(string),stdin);
    
    if (string[0] >= 97 && string[0] <= 122)
    {
        if (strlen(string) > 11)
        {
        printf("%c%d%c\n", string[0], strlen(string) - 3, string[strlen(string) - 2]);
        } else {
        printf("%s\n", string);
        }
    }
    }
    
    return 0;
}