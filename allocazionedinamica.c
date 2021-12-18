//MALLOC
p = malloc(10000);
if (p==NULL) //solo nel caso in cui non sia possibile allocare la quantità di memoria richiesta
   {
       //allocazione fallita, fai qualcosa
   }

void *malloc(int 10000); //prototipo
p = malloc(n+1); //alloca memoria per una stringa di n caratteri

//CONCAT generando una nuova stringa, senza alterare le originali
char *concat(char *s1, char *s2)
{
    char *result;

    result=malloc(strlen(s1) + strlen(s2) +1);
    if (result == NULL)
    {
        printf("Errore: malloc fallita in concat\n");
        return 0;
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

//MALLOC, restituisce un puntatore che punta ad una zona di memoria di cui non sappiamo il contenuto
int *a;
a = malloc((n+1) * sizeof(int)); //quando il valore di n è noto, il programma può chiamare malloc

//CALLOC, inizializza a 0 tutta la memoria allocata
int *a;
a = calloc(n, sizeof(int));
void *calloc(int nmemb, int size); //alloca memoria per un array di nmemb elementi, ognuno di size byte

//FREE, liberare memoria allocata dinamicamente
void free(void *p); //prototipo

p = malloc(...);
q = malloc(...);
p = q;
free(p); //free libera il blocco di memoria puntato da p restituendolo all'heap
//deallocando un blocco di memoria, il puntatore o i puntatori che lo indicavano diventano PENDENTI, ATTENZIONE!

//Esempio di uso di calloc()
int *leggiNvalori (int numval)
{
    int *A;
    A = (int *) calloc(numval, sizeof(int));
    if(!A)
       return NULL;
   
    for (int i=0; i<numval; i++)
    {
        printf("Inserire valore (%d): ", i);
        scanf("%d", &A[i]);
    }
    return A;
}
