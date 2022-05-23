#include <stdio.h>
	typedef struct{
		char placa[8],cor[11],modelo[12];
		int ano,i;
	}Veiculo;
	
	void imprimirVeiculo(Veiculo v){					
		printf("\n\nPlaca: %s\n",v.placa);			
		printf("Modelo: %s\n",v.modelo);			
		printf("Ano: %d\n",v.ano);
		printf("Cor: %s\n",v.cor);
		
}

int main() {
	int numero,cep,ddd,dddTel,telRes,telCel,cpf,cnpj,dataNasc,contatoResp,telCom,data;
	int inscEstadual,inscMunicipal,cnae,qtdVeiculos,i;
	char nome[68],endereco[50],bairro[30],complemento[30],estado[3],cidade[25];
	char email[34],resp[3],possuiPJ;
	printf("\t\t\t\tDADOS DO CREDENCIADO\n");
	printf("\t\t\t\t--------------------\n\n""");
	
	printf("Razao Social e Nome Completo:");
	fgets(nome, 68, stdin);
	
	printf("Endereco:");
	fgets(endereco, 50, stdin);
	
	printf("Numero:");
	scanf("%d",&numero);
	fflush(stdin);
	
	printf("Complemento:");
	fgets(complemento, 30, stdin);
	
	
	printf("Bairro:");
	fgets(bairro, 30, stdin);
	
	printf("CEP:");
	scanf("%d",&cep);
	
	printf("Estado:");
	scanf(" %s",&estado);
	
	printf("DDD Residencial/Comercial:");
	scanf("%d",&ddd);
	
	printf("Telefone Residencial ou Comercial:");
	scanf("%d",&telRes);
	
	printf("DDD Celular:");
	scanf(" %d",&dddTel);
	fflush(stdin);
	
	printf("Telefone Celular:");
	scanf("%d",&telCel);
	
	printf("CPF:");
	scanf("%d",&cpf);
	
	printf("CNPJ:");
	scanf("%d",&cnpj);
	
	printf("Possui PJ (s/n):");
	scanf(" %c",&possuiPJ);
	
	if(possuiPJ == 's'){
		printf("Insc. Estadual (Preenchimento exclusivo para PJ):");
		scanf("%d",&inscEstadual);
	
		printf("Insc. Municipal (Preenchimento exclusivo para PJ):");
		scanf("%d",&inscMunicipal);
	
		printf("CNAE (Preenchimento exclusivo para PJ):");
		scanf("%d",&cnae);
	}
	
	printf("Data de Nasc. ddmmaa:");
	scanf("%d",&dataNasc);
	
	printf("Deseja receber os proximos boletos por email?");
	scanf("%s",&resp);
	
	printf("Email:");
	scanf("%s",&email);
	
	printf("Numero de Contato do Responsavel (Em caso de pessoa juridica):");
	scanf("%d",&contatoResp);
	
	printf("Telefone Comercial:");
	scanf("%d",&telCom);
	
	printf("Data:");
	scanf("%d",&data);
	


	
	printf("\t\t\t\tCONFIRMACAO DOS DADOS DO CREDENCIADO\n");
	printf("\t\t\t\t------------------------------------\n\n""");
	
	printf("Razao Social e Nome Completo: %s",nome);
	
	printf("Endereco: %s",endereco);
	
	printf("Numero: %d",numero);
	
	printf("Complemento: %s",complemento);
	
	printf("Bairro: %s",bairro);
	
	printf("CEP: %d\n",cep);
	
	printf("Estado: %s\n",estado);
	
	printf("DDD Residencial/Comercial: %d\n",ddd);
	
	printf("Telefone Residencial ou Comercial: %d\n",telRes);
	
	printf("DDD Celular: %d\n",dddTel);
	
	printf("Telefone Celular: %d\n",telCel);
	
	printf("CPF: %d\n",cpf);
	
	printf("CNPJ: %d\n",cnpj);
	
	printf("Insc. Estadual (Preenchimento exclusivo para PJ): %d\n",inscEstadual);
	
	printf("Insc. Municipal (Preenchimento exclusivo para PJ): %d\n",inscMunicipal);
	
	printf("CNAE (Preenchimento exclusivo para PJ): %d\n",cnae);
	
	printf("Data de Nasc.: %d\n",dataNasc);
	
	printf("Deseja receber os proximos boletos por email? %s\n",resp);
	
	printf("Email: %s\n",email);
	
	printf("Contato do Responsavel (Em caso de pessoa juridica): %d\n",contatoResp);
	
	printf("Telefone Comercial: %d\n",telCom);
	
	printf("Telefone data: %d\n",data);
	
	
	printf("\t\t\t\tDADOS DOS VEICULOS\n");
	printf("\t\t\t\t-------------------\n\n""");
	
	printf("Quantos veiculos deseja cadastrar?");
	scanf("%d",&qtdVeiculos);
	
	Veiculo lerVeiculo() {
	Veiculo v;
	printf("Placa:");
	scanf("%s",&v.placa);
		
	printf("Modelo:");
	scanf(" %s",&v.modelo);
			
	printf("Ano:");
	scanf("%d",&v.ano);
			
	printf("Cor:");
	scanf(" %s",&v.cor);
	return v;
	
}

	
	Veiculo  veiculos[qtdVeiculos];
	
	for(i=0;i<qtdVeiculos;i++)
		veiculos[i] = lerVeiculo();
		
	printf("\t\t\t\CONFIRMACAO DOS DADOS DOS VEICULOS\n");
	printf("\t\t\t----------------------------------\n\n""");
	
	for(i=0;i<qtdVeiculos;i++)
		imprimirVeiculo(veiculos[i]);
		
	
	void imprimirVeiculo(Veiculo v){					
		printf("\n\nPlaca: %s\n",v.placa);			
		printf("Modelo: %s\n",v.modelo);			
		printf("Ano: %d\n",v.ano);
		printf("Cor: %s\n",v.cor);
		
}



	
	return 0;
}
