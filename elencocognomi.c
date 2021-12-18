#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 40
#define NUM_STR 5

void leggi(char s[])
{
	fgets(s, MAX_LEN+1, stdin);
	int len = strlen(s);
	if (s[len-1] == '\n')
	{
		s[len-1] = '\0';
	}
}

char *leggi_stringa(int maxlen)
{
    char *s, *s1;
    s = (char *) malloc(maxlen+1);
    
    if (!s) 
    {
        return NULL;
    }
    
    leggi (s);
    
    int len = strlen(s);
    
    s1 = malloc(len+1);
    if (!s)
    {
        free(s);
        return NULL;
    }
    
    strncpy(s1, s, len);
    free(s);
    return s1;
}

void riempi_elenco(char *elenco[][2])
{
    int i;
    for(i = 0; i < NUM_STR; i++)
    {
        printf("inserisci nome %d: ", i+1);
        elenco[i][0] = leggi_stringa(MAX_LEN+1);
        printf("inserisci cognome %d: ", i+1);
        elenco[i][1] = leggi_stringa(MAX_LEN+1);
    }
}

void stampa_cognomi(char *elenco[][2], char nome[])
{
    printf("\ninserisci il nome da cercare: ");
    leggi(nome);
    
    printf("cognomi corrispondenti: ");
    for (int i = 0; i < NUM_STR; i++)
    {
        if (strcmp(elenco[i][0], nome) == 0)    //nomi uguali
        {
            printf("%s ", elenco[i][1]);
        }
    }
    printf("\n");
}

int main(void)
{
    char *elenco[NUM_STR][2];
    char nome[MAX_LEN+1];
    
    riempi_elenco(elenco);
    stampa_cognomi(elenco, nome);
    
    return 0;
}
