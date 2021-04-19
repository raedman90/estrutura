#include<stdio.h>
#include<stdlib.h>

//1. Faça uma função que Leia (ou receba como parâmetro) uma matriz 3x2 e outra
//2x3 de números INT e Imprima o produto d estas duas matrizes. (3,0 Pontos)

// ======= EQUIPE ======= //
//Moacir David de Almeida Gonçalves
//Francisco Israel Oliveira
//Vinícius da Silva Ribeiro

//Determinar o tamanho da matriz [A] [B]
int linhaA = 3, colunaA = 2;
int linhaB = 2, colunaB = 3;

int tamanhoMatriz1 = 6;
int tamanhoMatriz2 = 6;
//Adicionando valores a matriz [A]
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
//Adicionando valores a matriz [B]
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

//Calculando produto das matrizes [A] E [B]
void produtoMatrizes( int mat1[tamanhoMatriz1], int mat2[tamanhoMatriz2] ) {
        int lA = 0, lB = 0;
        int cA, cB = 0;
        int posA = 0, posB = 0;
        int soma = 0;        
        
        //Primeira linha
        for( cA = 0; cA < tamanhoMatriz1/3; cA++ ) { 
            posA = lA*colunaA + cA; 
            posB = lB*colunaB + cB; 
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1; 
        }
        printf("%d ", soma);
        
        lA = 0;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA < tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d ", soma);
        
        lA = 0;
        lB = 0; 
        cB = 2;
        soma = 0;

        for( cA = 0; cA < tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d \n", soma);
        
        //Segunda linha
        lA = 2;
        lB = 0; 
        cB = 0;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d ", soma);
        
        lA = 2;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d ", soma);
        
        lA = 1;
        lB = 0; 
        cB = 2;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/4; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d \n", soma);
        
        //terceira linha
        lA = 2;
        lB = 0; 
        cB = 0;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d ", soma);
        
        lA = 2;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d ", soma);
        
        lA = 2;
        lB = 0; 
        cB = 2;
        soma = 0;

        for( cA = 0; cA <= tamanhoMatriz1/3; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%d \n", soma);

}
int main (void) {
        
        tamanhoMatriz1 = linhaA*colunaA;
        tamanhoMatriz2 = linhaB*colunaB;
        
        int mat1[tamanhoMatriz1];
        int mat2[tamanhoMatriz2];
        
        AdicionarMatriz1(mat1);
        AdicionarMatriz2(mat2);
        
        printf("\nPRODUTO DAS MATRIZES [A]-[B]: \n");
        produtoMatrizes(mat1, mat2);

        return 0;
}


