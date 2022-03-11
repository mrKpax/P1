#include <stdio.h>
#include <string.h>
#define STR_LEN 50

int leggi(char *s) //same as (char s[])
{
    printf("Inserisci la stringa: ");
    fgets(s, STR_LEN+1, stdin);
    int len = strlen(s);
    
    if (len<STR_LEN+1)
    {
        s[len-1] = '\0';
    }
    
    return len;
}

void minus_maius(char s[], int len)
{
    int offset = 'a' - 'A';
    
    for (int i=0; i<=len-1; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += offset;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
             {
                s[i] -= offset;
             }
    }
}

int main(void)
{
    int len;
    char s[STR_LEN+1];
    
    len=leggi(s);
    
    minus_maius(s, len);
    
    printf("La stringa modificata è %s\n", s);
    
    return 0;
    
}
