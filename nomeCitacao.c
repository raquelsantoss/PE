#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void concatenarLetra(char texto[], char letra){
    size_t tamanho = strlen(texto);
    texto[tamanho] = letra;
    texto[tamanho + 1] = '\0'; //recolocar terminador
}

int main(){

    char nome[50];
    char saida[50] = "";
    int tamanhoNome = 0, espaco = 0;

    printf("Nome:");
    fgets(nome,50,stdin);

    tamanhoNome = strlen(nome);

    for(int count = 0; count < tamanhoNome; count++){
        if(nome[count]==' '){
            espaco = count;
        }
    }

    for(int i = espaco + 1; i < tamanhoNome; i++){
        printf("%c",toupper(nome[i]));
    }

    printf(", ");

    for(int count = 0; count < tamanhoNome; count++) {
        if(count == 0) {
            concatenarLetra(saida, toupper(nome[0]));
        }else if(nome[count] == ' '){
            concatenarLetra(saida, toupper(nome[count + 1]));
        }
    }

    for(int count = 0; count < strlen(saida) - 1; count++) {
        printf("%c. ", saida[count]);
    }

    return 0;
}
