//STRINGHE LETTERALI
#include <stdio.h>
int main(void)
{
    char *p;   
    p = "abc"; //assegna a p il primo carattere della stringa, p punta ad a
}

//STRINGHE VARIABIlI
#include <stdio.h>
#define STR_LEN 80  //definendo la dimensione della stringa pari a 80

    char str[STR_LEN+1]; //aggiungendo un'ulteriore locazione per il carattere di fine stringa '\0' 
    
    char date[8] = "June 14"; //dichiarazione e inizializzazione di una stringa variabile
    char date[10] = "June 14"; //contenuto dell'array: J-u-n-e- -1-4-\0-\0-\0
    
//LEGGI STRINGA
void leggi(char *s)
{
	printf("inserisci la stringa: ");
	fgets(s, maxlen, stdin);
	int len = strlen(s);
	if (len < maxlen)
	{
		s[len-1] = '\0';
	}
}

//STRCPY e STRNCPY    
char *strcpy(char *s1, char *s2); //copia la stringa puntata da s2 nell'array puntato da s1
strcpy(str1, str2); //adesso str1 contiene il contenuto di str2

strncpy(str1, str2, STR_LEN); //STR_LEN+1 è la taglia di str1

//STRLEN
int strlen(char *s); //prototipo di strlen
len = strlen(str1); //restituisce la lunghezza della stringa escludendo il carattere nullo finale
len = strlen("abc"); //restituisce il valore 3

int strlen(char *s)
{
    for (int n=0; *s != '\0'; s++)
        n++;
        
    return n;
}

//STRCAT e STRNCAT (concatenation)
char *strcat(char *s1, char *s2); //aggiunge il contenuto di s2 alla fine di s1
strcat(str1, str2);
strcat(str1, "abc");

char *strcat (char *s1, char *s2)  //trova il carattere di fine stringa e e fa puntare p ad esso
{
    char *p = s1;
    
    while(*p != '\0') //trova il carattere di fine stringa di s1 e assegna l'indirizzo a p
        p++;
    while (*s2 != '\0') //copia i caratteri di s2 a partire dall'indirizzo puntato da p
    {
        *p = *s2;
        p++;
        s2++;
    }
    *p = '\0';
    return s1;
}

strncat(str1, str2, sizeof(str1)-strlen(str1)-1); //strncat terminerà con il carattere nullo

//STRCMP (string comparison)
int strcmp(char *s1, char *s2);
/* lessicograficamente se:
   s1 < s2, risultato minore di 0 
   s1 = s2, risultato uguale a 0
   s1 > s2, risultato maggiore di 0
*/
strcmp(str1, str2);

// maiuscole < minuscole; cifre < lettere; spazio < tutto

//ARRAY DI STRINGHE
char planets[][5] = {"Earth", "Mars", "Jupiter", "Saturn", "Uranus"}; //array irregolare

char *planets[] = {"Earth", "Mars", "Jupiter", "Saturn", "Uranus"}; //array di puntatori

//ciclo che rileva le stringhe che iniziano per M
for (int i=0; i<=5-1; i++)
    if (planets[i][0] == 'M')
        printf("%s inizia con M\n", planets[i]);
