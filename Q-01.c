#include<stdio.h>
#include<stdlib.h>

//1. Faça uma função que Leia (ou receba como parâmetro) uma matriz 3x2 e outra
//2x3 de números INT e Imprima o produto d estas duas matrizes. (3,0 Pontos)

// ======= EQUIPE ======= //
//Moacir David de Almeida Gonçalves
//Francisco Israel Oliveira
//Vinícius da Silva Ribeiro

int linhaA = 2, colunaA = 3;
int linhaB = 3, colunaB = 2;

int tamanhoMatriz1 = 6;
int tamanhoMatriz2 = 6;

void AdicionarMatriz1( float mat1[tamanhoMatriz1] ) {
        printf("\nPreenchendo a matriz [A] %d - %d\n\n",linhaA,colunaA);
        int l,c;
        for( l = 0; l < linhaA; l++ ) {
            for( c = 0; c < colunaA; c++ ) {
                int k = l*colunaA + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%f", &mat1[k]);
            }
            printf("\n");
        }
}
void AdicionarMatriz2( float mat2[tamanhoMatriz2] ) {
        printf("\nPreenchendo a matriz [B] %d - %d\n\n",linhaB,colunaB);
        int l,c;
        for(l = 0; l < linhaB; l++ ) {
            for( c = 0; c < colunaB; c++ ) {
                int k = l*colunaB + c;
                printf("Linha: %d - Coluna: %d:",l,c);
                scanf("%f",&mat2[k]);
            }      
            printf("\n");
        }
}
void produtoMatrizes( float mat1[tamanhoMatriz1], float mat2[tamanhoMatriz2] ) {
        int lA = 0, lB = 0;
        int cA, cB = 0;
        int posA = 0, posB = 0;
        float soma = 0;        
        
        for( cA = 0; cA < tamanhoMatriz1/2; cA++ ) { 
            posA = lA*colunaA + cA; 
            posB = lB*colunaB + cB; 
            soma = soma + (mat1[posA])*(mat2[posB]); 
            lB = lB + 1; 
        }

        printf("%.2f ", soma);
        lA = 0;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA < tamanhoMatriz1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }

        printf("%.2f \n", soma);
        lA = 1;
        lB = 0; 
        cB = 0;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }

        printf("%.2f ", soma);
        lA = 1;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%.2f \n", soma);

}
int main (void) {
        
        tamanhoMatriz1 = linhaA*colunaA;
        tamanhoMatriz2 = linhaB*colunaB;
        
        float mat1[tamanhoMatriz1];
        float mat2[tamanhoMatriz2];
        
        AdicionarMatriz1(mat1);
        AdicionarMatriz2(mat2);
        
        printf("\nPRODUTO DAS MATRIZES [A]-[B]: \n");
        produtoMatrizes(mat1, mat2);

        return 0;
}


