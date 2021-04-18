#include<stdio.h>
#include<stdlib.h>

//2. Faça uma função que Leia (ou receba como parâmetro) duas matrizes NxM de
//números INT, faça a soma das duas e imprima a matriz Transposta da matriz
//soma. (3,0 Pontos)


// ======= EQUIPE ======= //
//Moacir David de Almeida Gonçalves
//Francisco Israel Oliveira
//Vinícius da Silva Ribeiro

int linha = 3, coluna = 3;

int tamanhoMatriz = 0;
// Calculando matriz transposta (questao 2)
void matrizTransposta(int mat3[tamanhoMatriz]) {
	int i,j;
	printf("\n Matriz a Transposta [C]: \n\n");
	for(i=0;i<linha;i++) {
		for(j=0;j<coluna;j++) {
			int k = j*coluna + i;
			printf("%d ", mat3[k]);
		}
		printf("\n");
	}
}

void imprimirA(int mat1[tamanhoMatriz]) {
	int i,j;
	printf("\n Imprimindo a Matriz [A]: \n\n");
	for(i=0;i<linha;i++) {
		for(j=0;j<coluna;j++) {
			int k = i*coluna + j;
			printf("%d ", mat1[k]);
		}
		printf("\n");
	}
}
void zerar(int mat3[tamanhoMatriz]) {
	int k;
	for(k=0;k<tamanhoMatriz;k++) {
		mat3[k] = 0;
	}
}

void imprimirB(int mat2[tamanhoMatriz]) {
	int i,j;
	printf("\n Imprimindo a Matriz [B]: \n\n");
	for(i=0;i<linha;i++) {
		for(j=0;j<coluna;j++) {
			int k = i*coluna + j;
			printf("%d ", mat2[k]);
		}
		printf("\n");
	}
}
void imprimirC(int mat3[tamanhoMatriz]) {
	int i,j;
	printf("\n Imprimindo a Matriz [C]: \n\n");
	for(i=0;i<linha;i++) {
		for(j=0;j<coluna;j++) {
			int k = i*coluna + j;
			printf("%d ", mat3[k]);
		}
		printf("\n");
	}
}

void somaMatriz(int mat1[tamanhoMatriz], int mat2[tamanhoMatriz], int mat3[tamanhoMatriz]){
    int i, j, k;
	 printf("\n Somando a matriz [A] + Matriz [B]\n\n");
    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            k = i * coluna + j;
            mat3[k] = mat1[k] + mat2[k];
        }
    }
}
//Adicionando valores a Matriz [A]
void AdicionarMatriz1( int mat1[tamanhoMatriz] ) {
        printf("\nPreenchendo a matriz [A] %d - %d\n\n",linha,coluna);
        int l,c;
        for( l = 0; l < linha; l++ ) {
            for( c = 0; c < coluna; c++ ) {
                int k = l*coluna + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%d", &mat1[k]);
            }
            printf("\n");
        }
}
//Adicionando valores a Matriz [B]
void AdicionarMatriz2( int mat2[tamanhoMatriz] ) {
        printf("\nPreenchendo a matriz [B] %d - %d\n\n",linha,coluna);
        int l,c;
        for(l = 0; l < linha; l++ ) {
            for( c = 0; c < coluna; c++ ) {
                int k = l*coluna + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%d",&mat2[k]);
            }      
            printf("\n");
        }
}
void menu(int opcao, int mat1[tamanhoMatriz], int mat2[tamanhoMatriz],int mat3[tamanhoMatriz]) 
{
	switch(opcao) 
	{
		case 1: 
		{
			system("cls"); //limpa a tela.
			somaMatriz(mat1, mat2, mat3);
			system("pause\n\n");
			break;
		}
		case 2: 
		{
			system("cls");
			imprimirA(mat1);
			system("pause\n\n");
			break;
		}
		case 3: 
		{
			system("cls");
			imprimirB(mat2);
			system("pause\n\n");
			break;
		}
		case 4: 
		{
			system("cls");
			imprimirC(mat3);
			system("pause\n\n");
			break;
		}
		case 5: {
			system("cls");
			matrizTransposta(mat3);
			system("pause\n\n");
			break;
		}
		case 0: break;
		default: {
			printf("\nOPCAO INVALIDA!!\n\n");
			system("pause");
		}
	}
}

main() {
	
	tamanhoMatriz = linha*coluna;
	int mat1[tamanhoMatriz];
    int mat2[tamanhoMatriz];
    int mat3[tamanhoMatriz];
    
    AdicionarMatriz1(mat1);
    AdicionarMatriz2(mat2);
    
    zerar(mat3);
    int opcao = 1;
	while(opcao) 
	{	
		system("cls");
		printf("//====== INSIRA O NUMERO DA OPCAO DESEJADA ======//\n\n");
		printf("1. Somar Matriz [A] com Matriz [B]\n\n");
		printf("2. Imprimir Matriz [A]\n\n");
		printf("3. Imprimir Matriz [B]\n\n");
		printf("4. Imprimir Matriz [C]\n\n");
		printf("5. Exibit Matriz Transposta [C]\n\n");
		printf("\n0. Sair\n\n");
		printf("OPCAO DESEJADA: ");

		scanf("%d",&opcao);
		menu(opcao,mat1, mat2, mat3);
	}	
}
