#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void limpar(char palavra[], int tam){

    int i;
    for (i = 0; i < tam; i++)
        palavra[i] = '\0';
}

void chamasujeito(){

    int j = rand() % 10;
    int k = 0;
    int i;
    char aux;
    char palavraSujeito[20];

    FILE *sujeito = fopen("sujeito.txt", "r");
    if (!sujeito)
        printf ("ERRO");

    else{
        while (k < j){
            i = 0;
            limpar(palavraSujeito, 20);
            while ((aux = fgetc(sujeito)) != '\n'){
                palavraSujeito[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavraSujeito);
        limpar(palavraSujeito, 20);
         k=0;
    }
    fclose(sujeito);
}

void chamaverbo (){

    int j = rand() % 5;
    int k = 0;
    int i;
    char aux;
    char palavraVerbo[20];

    FILE *verbo = fopen("verbo.txt", "r");
    if (!verbo)
        printf ("ERRO");
    else{
        while (k < j){
            i = 0;
            limpar(palavraVerbo, 20);
            while ((aux = fgetc(verbo)) != '\n'){
                palavraVerbo[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavraVerbo);
        limpar(palavraVerbo, 20);
         k=0;
    }
    fclose(verbo);
}

void chamaobjeto (){

    int j = rand() % 8;
    int k = 0;
    int i;
    char aux;
    char palavraObjeto[20];

    FILE *objeto = fopen("objeto.txt", "r");
    if (!objeto)
        printf ("ERRO");
    else{
        while (k < j){
            i = 0;
            limpar(palavraObjeto, 20);
            while ((aux = fgetc(objeto)) != '\n'){
                palavraObjeto[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavraObjeto);
        limpar(palavraObjeto, 20);
        k=0;
    }
    fclose(objeto);
}

int main(){
    srand(time(NULL));
    char aux;
    int i=0, j, k;
while(i<10){
    printf ("Frase Gerada:\n\n");
    chamasujeito();
    chamaverbo();
    chamaobjeto();
    printf ("e ");
    chamasujeito();
    chamaverbo();
    chamaobjeto();
    printf("\n");
    i++;
}
    return 0;
}
