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
    char palavra[20];

    FILE *sujeito = fopen("sujeito.txt", "r");
    if (sujeito == NULL)
        printf ("ERRO");

    else{
        while (k < j){
            i = 0;
            limpar(palavra, 20);
            while ((aux = fgetc(sujeito)) != '\n'){
                palavra[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavra);
    }
    fclose(sujeito);
}

void chamaverbo (){

    int j = rand() % 5;
    int k = 0;
    int i;
    char aux;
    char palavra[20];

    FILE *verbo = fopen("verbo.txt", "r");
    if (verbo == NULL)
        printf ("ERRO");
    else{
        while (k < j){
            i = 0;
            limpar(palavra, 20);
            while ((aux = fgetc(verbo)) != '\n'){
                palavra[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavra);
    }
    fclose(verbo);
}

void chamaobjeto (){

    int j = rand() % 8;
    int k = 0;
    int i;
    char aux;
    char palavra[20];

    FILE *objeto = fopen("objeto.txt", "r");
    if (objeto == NULL)
        printf ("ERRO");
    else{
        while (k < j){
            i = 0;
            limpar(palavra, 20);
            while ((aux = fgetc(objeto)) != '\n'){
                palavra[i] = aux;
                i++;
            }
            k++;
        }
        printf ("%s ", palavra);
    }
    fclose(objeto);
}

int main(){
    srand(time(NULL));
    char aux;
    int i, j, k;

    printf ("Frase Gerada:\n\n");
    chamasujeito();
    chamaverbo();
    chamaobjeto();
    printf ("e ");
    chamasujeito();
    chamaverbo();
    chamaobjeto();

    return 0;
}
