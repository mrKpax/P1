#include <stdio.h>
#include <string.h>
#define STR_LEN 50
#include <ctype.h>

void leggi(char *s)
{
    printf("Inserisci la stringa: ");
    fgets(s, STR_LEN+1, stdin);
    int len = strlen(s);
    
    if(len<STR_LEN+1)
    {
        s[len-1] = '\0';
    }
}

int offset(char c)
{
    int offset = 'a'-'A';
    if (c >='A' && c<='Z')
    {
        return c+offset; //se c è maiuscolo restituisce c minuscolo
    }
    else if (c>='a' && c<='z')
    {
        return c-offset; //se c è minuscolo restituisce c maiuscolo
    }
}

int conta_char(char s[], char c)
{
    int cont=0;
    
    if(!isalpha(c))
    {
        return 0;
    }
    int c_off = offset(c);
    for (int i=0; s[i] != '\0'; i++)
    {
        if (c==s[i] || c_off == s[i])
        {
            cont++;
        }
    }
    return cont;
}

int main(void)
{
    int cont, len;
    char c, s[STR_LEN+1];
    leggi(s);
    
    printf("Inserisci un carattere: ");
    scanf("%c", &c);
    
    cont = conta_char(s, c);
    
    printf("Le occorrenze di %c sono di %d\n", c, cont);
    
    return 0;
}
