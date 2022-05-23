#include <stdio.h>

int main() {
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);
    
    if(idade<0){
    	printf("Voce ainda nao nasceu!");
	}else{
		if(idade<15){
			printf("voce tem %d anos, voto opcional!",idade);
		}else{
			if(idade==16){
				printf("voce tem %d anos, voto opcional!",idade);
			}else{
				if(idade==17){
					printf("voce tem %d anos, voto opcional!",idade);
				}else{
					if(idade==41){
						printf("voce tem %d anos e ganha premio 1!",idade);
					}else{
						if(idade==82){
							printf("Voce tem %d anos e ganha premio 2!",idade);
						}else{
							if(idade>=65){
								printf("Voce tem %d anos, voto opcional!",idade);
							}else{
								if(idade<=64){
									printf("Voce tem %d anos, voto obrigatorio!",idade);
								}else{
									if(idade>18){
										printf("voce tem %d anos, voto opcional!",idade);
								}
							}
						}
					}
				}
			}
		}
	}

   
    return 0;
}
}
