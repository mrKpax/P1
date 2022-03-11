#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LUN 100
#define LUN_S 50

char **crea_matrice();
char *merge(char *nome, char *cognome);
char *incastona(char *sP, char *sL);
void inverti(char **a);
void crea(char **a);

int main(void)
{
    char *min, *nome, *cognome, **nomecognome;
    nomecognome = creamatrice();
    char *s_merge;
    
    s_merge = merge(nomecognome[0], nomecognome[1]);
    printf("\nStringa merge: %s\n", s_merge);
    
    char *s_inc;
    if(strcmp(nomecognome[0], nomecognome[1])>0)
    {
        s_inc = incastona(nomecognome[1], nomecognome[0]);
    }
    else
    {
        s_inc = incastona(nomecognome[0], nomecognome[1]);
    }
    printf("\nStringa incastonata: %s\n", s_inc);
    
    inverti(nomecognome);
    crea(nomecognome);
    ordina(nomecognome);
}

char **crea_matrice()
{
    char **a;
    a = xmalloc(2);
    for (int i=0; i<2; i++)
    {
        a[i]=allocS(LUN_S);
    }
    return a;
}

char *merge(char *nome, char *cognome)
{
    int lun = strlen(nome) + strlen(cognome);
    char *s, *s1, *s2;
    
    s=xmalloc(lun+1);
    s1=xmalloc(strlen(nome)+1);
    s2=xmalloc(strlen(cognome)+1);
    
    strcpy(s1,nome);
    strcpy(s2, cognome);
    strcpy(s,strcat(s1,s2));
    
    free(s1);
    free(s2);
    return s;
}

char *incastona(char *sP, char *sL)
{
    char *s;
    int lun=strlen(sL);
    s=xmalloc(lun+1);
    
    int n1 = (strlen(sL) - strlen(sP))/2;
    int n2 = (strlen(sL) + strlen(sP))/2;
    
    int i,k;
    for(i=0,k=0; i<=lun; i++)
    {
        if(i<n1)
        {
            s[i] = sL[i];
        }
        else
        {
            if(i>=n1 && i<n2)
            {
                s[i] = sP[k++];
            }
            else
            {
                s[i] = sL[i];
            }
        }
    }
    return s;
}

void inverti(char **a)
{
    char stemp[strlen(a[0])+1];
    strcpy(stemp,a[0]);
    
    a[0] = xrealloc(a[0], strlen(a[1])+1);
    strcpy(a[0],a[1]);
    
    a[1] = xrealloc(a[1], strlen(stemp)+1);
    strcpy(a[1],stemp);
    
    printf("\nPrima stringa: %s\n", a[0]);
    printf("Secondaa stringa: %s\n", a[1]);
}

void crea(char **a)
{
    a = xrealloc(a,3);
    a[2] = xmalloc(7);
    
    strncpy(a[2],a[1],3);
    strcat(a[2],&a[0][strlen(a[0])-3]);
    
    printf("\n%s\n", a[2]);
}

void swap(char a[], int i, int j)
{
    char temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int shift(char a[], int n)
{
    int scambi = 0;
    for (int i=0; i<n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            swap(a, i, i+1);
            scambi = 1;
        }
    }
    
    return scambi;
}

void bubble(char a[], int n)
{
    while(shift(a,n));
}

void ordina(char **a)
{
    for(int i=0; i<2; i++)
    {
        bubble(a[i], strlen(a[i]));
    }
    
    printf("\nNome: %s\n",a[1]);
    printf("\nCognome: %s\n",a[0]);
}
