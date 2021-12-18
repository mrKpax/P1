typedef struct NOMETIPO{
    dichiarazione di campi
}NOMETIPO;

typedef struct corpoceleste{
    char nome[16];
    float diametro;
    float giorno;
    float anno;
} corpoceleste;

corpoceleste terra; //si dichiara variabile terra di tipo corpoceleste

terra.nome = "Terra";
terra.diametro = 12800;
...
int numOre = terra.giorno * terra.anno;

//Allocazione dinamica di record
studente *s;
s = malloc(sizeof(studente));
