#include<stdio.h>
#include<stdlib.h>

/*3. Considere n cidades numeradas de 0 a n-1 que estão interligadas por uma série
de estradas de mão única. As ligações entre as cidades são representadas pelos
elementos de uma matriz quadrada Lnxn, cujos elementos lij assumem o valor 1
ou 0, conforme exista ou não estrada direta que saia da cidade i e chegue à
cidade j.
Assim, os elementos da linha i indicam as estradas que saem da cidade i, e os
elementos da coluna j indicam as estradas que chegam à cidade j. Por
convenção lii = 1. A figura mostra um exemplo para n = 4: (4,0 Pontos)

ESCOLHA 4 PROBLEMAS, e responda em forma de função em C para cada um:
i. As cidades i soladas, isto é, as que não têm ligação com nenhuma outra;
ii. As cidades das quais não há saída, apesar de haver entrada;
iii. As cidades das quais há saída sem haver entrada.
iv. A qual das cidades chega o maior número de estradas?
v. Relacionar as cidades que possuem saídas diretas para a cidade k.
vi. Dada uma sequência de m inteiros cujos valores estão entre 0 e n-1, verificar se é
possível realizar o roteiro correspondente. No exemplo dado, o roteiro representado pela
sequência (m=5) 2 3 2 1 0 é impossível.*/


// ======= EQUIPE ======= //
//Moacir David de Almeida Gonçalves
//Francisco Israel Oliveira
//Vinícius da Silva Ribeiro


const int TRUE = 1;
const int FALSE = 0;

int entradaCity(int tamanho, int tamanhoVet, int matriz[tamanhoVet], int linha) 
{
    int k, cont = 0;
    for(k = 0; k < tamanho; k++) 
	{
    	int posVet = linha*tamanho + k;
        if( k != linha ) 
		{
        	if(matriz[posVet] == 1)
			{
            	cont = cont + 1;
            }
        }
    }
    return cont;
}

int saidaCity(int tamanho, int tamanhoVet, int matriz[tamanhoVet], int coluna) 
{
    int k, cont = 0;
    for( k = 0; k < tamanho; k++ ) 
	{
        int posVet = k*tamanho + coluna;
        if( k != coluna ) 
		{
            if(matriz[posVet] == 1)
			{
                cont = cont + 1;
            }
        }
    }
    return cont;
}

void saidaUn(int tamanho, int tamanhoVet, int matriz[tamanhoVet], int coluna) 
{
    int k, cont = 0;
    for (k = 0; k < tamanho; k++) 
	{
        int posVet = k*tamanho + coluna;
        if (k != coluna) 
		{
            if(matriz[posVet] == 1 ) 
			{
                printf("\nA cidade %d possui saida direta para a cidade %d", k, coluna);
            } 
			else 
			{
                printf("\nA cidade %d nao possui saida direta para a cidade %d", k, coluna);
			}
        }
    }
}

int entSaiVet(int tamanho, int tamanhoVet, int matriz[tamanhoVet], int tam, int vet[tam]) 
{
	int k, x, cont = 0;
    for(k = 0; k < tam; k++) 
	{
        x = k + 1;
        int posVet = vet[k]*tamanho + vet[x];
        if(matriz[posVet] == 0)
		{
            return FALSE;
        }
        cont++;
    }
    return TRUE;
}

int main(void) 
{
    int tamanho;
    printf("Informe a ordem da matriz:");
    scanf("%d", &tamanho);

    int tamanhoVet = tamanho * tamanho;
    int matriz[tamanhoVet];
    int l, c;

    printf("\nInforme 0 ou 1 \n");

    for(l = 0; l < tamanho; l++) 
	{
    	for(c = 0; c < tamanho; c++) 
		{
            int posVet = l*tamanho + c;
            printf("linha: %d - coluna: %d:",l,c);
            scanf("%d",&matriz[posVet]);
        }
    }

    printf("\nExistem cidades isoladas? \n");
    int cont = 0;
    for(l = 0; l < tamanho; l++) 
	{
        int entra = entradaCity(tamanho, tamanhoVet, matriz, l);
        int sai = saidaCity(tamanho, tamanhoVet, matriz, l);
        if(entra != 0 || sai != 0) 
		{
            printf("A cidade %d nao eh isolada\n", l);
        } 
		else 
		{ 
			printf("A cidade %d eh isolada\n", l);
		}
    }

    printf("\nCidades que nao ha saida mas ha entrada\n");
    int k;
    for (k = 0; k < tamanho; k++) 
	{
    	int entra = entradaCity(tamanho, tamanhoVet, matriz, k);
    	int sai = saidaCity(tamanho, tamanhoVet, matriz, k);
    	if(entra == FALSE && sai != FALSE)
		{
        	printf("A cidade %d possui entrada mas nao possui saida\n", k);
    	}	
    }

    printf("\nCidades que nao ha entrada mas ha saida\n");
    for (k = 0; k < tamanho; k++) 
	{
    	int entra = entradaCity(tamanho, tamanhoVet, matriz, k);
    	int sai = saidaCity(tamanho, tamanhoVet, matriz, k);
    	if(sai == FALSE && entra != FALSE)
		{
        	printf("A cidade %d possui saida mas nao possui entrada\n",k);
    	}	
    }

    printf("\nQual a cidade com o maior numero de estradas\n");
    int maiorNumEst = 0;
    int cidadeMaisEst = 0;
    for (k = 0; k < tamanho; k++) 
	{
    	int entra = entradaCity(tamanho, tamanhoVet, matriz, k);
    	int sai = saidaCity(tamanho, tamanhoVet, matriz, k);
    	int totEst = entra + sai;
    	if(totEst > maiorNumEst) 
		{
        	cidadeMaisEst = k;
        	maiorNumEst = totEst;
    	}
    }

    printf("A cidade com mais estradas eh a cidade %d\n", cidadeMaisEst);
    int cidadeSaida;
    printf("\nInforme a cidade que deseja consultar as cidades que possuem saidas para ela:");
    scanf("%d", &cidadeSaida);
    
    if(cidadeSaida < tamanho) 
	{
        saidaUn(tamanho,tamanhoVet,matriz,cidadeSaida);
    }
	else 
	{ 
		printf("Essa cidade nao existe\n");
	}

    int tam;
    printf("\nInforme o tamanho da sequencia:");
    scanf("%d", &tam);
    int vet[tam];
    printf("\nInforme uma cidade por vez\n");
    for(k = 0; k < tam; k++) 
	{
        printf("Informe o numero da cidade:");
        scanf("%d", &vet[k]);
    }
    int seq = entSaiVet(tamanho, tamanhoVet, matriz, tam, vet);
    if(seq == FALSE)
	{
        printf("Nao eh possivel fazer esse caminho entre as cidades");
    } 
	else
	{ 
		printf("Eh possivel fazer esse caminho entre as cidades");
	}

    return 0;
}

