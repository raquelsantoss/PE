#include <stdio.h>
#include <stdlib.h>

float soma(float n1, float n2);
float subtracao(float n1, float n2);
float multiplicacao(float n1, float n2);
float divisao(float n1, float n2);
char le_valida_operador();
char menu();

int main()
{
    float n1,n2;
    char op,sair;

do{
    printf("N1:");
    scanf("%f",&n1);

    printf("OP:");
    op = le_valida_operador();

    printf("N2:");
    scanf("%f",&n2);
    

    printf("------------------------\n");



    switch(op){
    	
    
    case '+':
        printf("Resultado: %.2f\n",soma(n1,n2));
    break;
    case '-':
        printf("Resultado: %.2f\n",subtracao(n1,n2));
    break;
    case '*':
        printf("Resultado: %.2f\n",multiplicacao(n1,n2));
    break;
    case '/':
        printf("Resultado: %.2f\n",divisao(n1,n2));
    break;

    default:
        printf("Operador invalido!");

    }
      
    printf("Deseja sair?");
    sair = menu();
    

	}while(sair =='n');
    return 0;
}

char menu(){
	char queroSair;
    scanf(" %c",&queroSair);
    return queroSair;
}

char le_valida_operador(){
    char operador;
    scanf(" %c",&operador);
    return operador;
}

float soma(float n1, float n2){
    float resultado;
    resultado = n1 + n2;
    return resultado;
}

float subtracao(float n1, float n2){
    float resultado;
    resultado = n1 - n2;
    return resultado;
}

float multiplicacao(float n1, float n2){
    float resultado;
    resultado = n1 * n2;
    return resultado;
}

float divisao(float n1, float n2){
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

