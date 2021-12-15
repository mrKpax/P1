#include <stdio.h>
#include <string.h>
#define STR_LEN 20

int leggi(char *stringa)
{
    printf("Inserisci la stringa: ");
    fgets(stringa, STR_LEN, stdin);
    int len = strlen(stringa);
    
    if (len < STR_LEN)
    {
        stringa[len-1] = '\0'; //rimuoviamo il carattere di newline    
    }
    return len;
}

char *postfisso(char s1[], char s2[], int len1, int len2)
{
    int d = len2 - len1;
    
    if(d<0)
    {
        return NULL;
    }
    else if (strcmp(s1, s2+d) == 0) //sono uguali
        {
            return s2+d; //inizio postfisso
        }
        else
        {
            return NULL;
        }
}

int main(void)
{
    int len1, len2;
    char *p, s1[STR_LEN+1], s2[STR_LEN+1];
    len1 = leggi(s1);
    len2 = leggi(s2);
    
    p=postfisso(s1, s2, len1, len2);
    
    if (p == NULL)
    {
        printf("%s non è postfisso di %s", s1, s2);
    }
    else
    {
        printf("%s è postfisso di %s", p, s2);
    }
     printf("\n");
}
