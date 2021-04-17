#include<stdio.h>
#include<stdlib.h>

//2. Faça uma função que Leia (ou receba como parâmetro) duas matrizes NxM de
//números INT, faça a soma das duas e imprima a matriz Transposta da matriz
//soma. (3,0 Pontos)


// ======= EQUIPE ======= //
//Moacir David de Almeida Gonçalves
//Francisco Israel Oliveira
//Vinícius da Silva Ribeiro

int linhaA = 0, colunaA = 0;
int linhaB = 0, colunaB = 0;
int linhaC = 0, colunaC = 0;

int tamanhoMatriz1 = 6;
int tamanhoMatriz2 = 6;
int tamanhoMatriz2 = 6;
// Calculando matriz transposta (questao 2)

void somarMatrizes(int mat1[tamanhoMatriz1], int mat2[tamanhoMatriz2], int mat3[tamanhoMatriz3])
{
    int i, j;
    for (i = 0; i < m; i = i + 1){
    	for (j = 0; j < n; j = j + 1){
    		c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void AdicionarMatriz1( int mat1[tamanhoMatriz1] ) {
        printf("\nPreenchendo a matriz [A] %d - %d\n\n",linhaA,colunaA);
        int l,c;
        for( l = 0; l < linhaA; l++ ) {
            for( c = 0; c < colunaA; c++ ) {
                int k = l*colunaA + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%d", &mat1[k]);
            }
            printf("\n");
        }
}
void AdicionarMatriz2( int mat2[tamanhoMatriz2] ) {
        printf("\nPreenchendo a matriz [B] %d - %d\n\n",linhaB,colunaB);
        int l,c;
        for(l = 0; l < linhaB; l++ ) {
            for( c = 0; c < colunaB; c++ ) {
                int k = l*colunaB + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%d",&mat2[k]);
            }      
            printf("\n");
        }
}

main() {
	
	printf("Informe o numero de linhas e de colunas da matriz [A], respectivamente:     ");
	scanf("%d %d",&linhaA,&colunaA);
	printf("Informe o numero de linhas e de colunas da matriz [B], respectivamente:     ");
	scanf("%d %d",&linhaB,&colunaB);
	
	tamanhoMatriz1 = linhaA*colunaA;
	tamanhoMatriz2 = linhaB*colunaB;
	tamanhoMatriz3 = (linhaA+linhaB) + (colunaA+colunaB);

	int mat1[tamanhoMatriz1];
    int mat2[tamanhoMatriz2];
    int mat3[tamanhoMatriz3];
    
    AdicionarMatriz1(mat1);
    AdicionarMatriz2(mat2);
		
}
