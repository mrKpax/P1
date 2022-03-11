#include <stdio.h>
#include <string.h>
#define STR_LEN 15

int leggi(char s[])
{
    printf("Inserisci la stringa: ");
    fgets(s, STR_LEN+1, stdin);
    int len = strlen(s);
    
    if (len<STR_LEN)
        {
            s[len-1] = '\0';
        }
    return len;
}

char *postfisso(char s1[], char s2[], int len1, int len2)
{
    int d = len2-len1;
    
    if (d<0)
    {
       return NULL; 
    }
    if(strcmp(s1, &(s2[d])) == 0)
    {
        return &s2[d];
    }
    else
    {
        return NULL;
    }
}

int main(void)
{
    char s1[STR_LEN+1], s2[STR_LEN+1], *p;
    
    int len1 = leggi(s1);
    int len2 = leggi(s2);
    
    p = postfisso(s1, s2, len1, len2);
    
    if (p==NULL)
    {
        printf("%s non è postfisso di %s", s1, s2);
    }
    else
    {
        printf("%s è postfisso di %s", p, s2);
    }
    
    printf("\n");
    return 0;
}
