//------------------------------------------WAR ESTRUTURADO------------------------------------------
//Projeto proposto na disciplina de Estrutura de Dados do Curso de Ciência da Computação na instituição Estácio.
//Esse projeto é dividido em 3 níveis: "NOVATO", "AVENTUREIRO" e "MESTRE". Nesse código concluirei o nível NOVATO.
//O Objetivo do nível novato é criar 5 dos ditos Territórios, cada um com seu nome, cor do exército e número de tropas.
//É esperado que essas informações possam ser inseridas pelo "jogador" e que no fim sejam exibidas todas as informações capturadas.


//------------------------------------------NOVATO------------------------------------------

//Bibliotecas usadas

#include <stdio.h>
#include <string.h>

// --- CONSTANTES GLOBAIS ---
//A fim de facilitar a manutenção e escalabilidade do projeto, estão declaradas as seguintes constantes
#define NUM_TERRITORIOS 5
#define TAMANHO_NOME 30
#define TAMANHO_COR 10

// --- DEFINIÇÃO DE ESTRUTURAS---
//Declaração das propriedades dos Territórios usando struct
typedef struct {
    char nome[TAMANHO_NOME];
    char cor[TAMANHO_COR];
    int numero_de_tropas;
} Territorio;

// ---FUNÇÃO PRINCIPAL---
int main() {
    Territorio mapa [NUM_TERRITORIOS];
    printf("=============BEM-VINDO=============\n");
    printf("Cadastre aqui seus Territorios:\n");
    //--------CAPTURA AS INFORMAÇÕES DOS TERRITÓRIOS--------
    for (int i=0;i<NUM_TERRITORIOS;i++) {
    printf("Digite o Nome do Territorio %d: ",i+1);
    fgets(mapa[i].nome,TAMANHO_NOME,stdin);
    printf("Digite a Cor do Territorio %d: ",i+1);
    fgets(mapa[i].cor,TAMANHO_COR,stdin);
    printf("Digite o Numero de tropas do Territorio %d: ",i+1);
    scanf("%d", &mapa[i].numero_de_tropas);
// --- LIMPADOR DE BUFFER ---
        // Consome o '\n' deixado pelo scanf
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\n");
}
//------EXIBE AS INFORMAÇÕES COLETADAS SEPARADAMENTE POR TERRITORIO------
    for (int i=0;i<NUM_TERRITORIOS;i++){

        printf("\nTerritorio %d: %s",i+1,mapa[i].nome);
        printf("Cor do Exercito %d: %s",i+1,mapa[i].cor);
        printf("Numero de tropas do Territorio %d: %d \n----------------------------------------------------\n",i+1,mapa[i].numero_de_tropas);
    }
    return 0; // Sinaliza ao sistema operacional que o programa terminou com sucesso.
}