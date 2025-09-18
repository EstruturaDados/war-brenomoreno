//------------------------------------------WAR ESTRUTURADO------------------------------------------
//Projeto proposto na disciplina de Estrutura de Dados do Curso de Ciência da Computação na instituição Estácio.
//Esse projeto é dividido em 3 níveis: "NOVATO", "AVENTUREIRO" e "MESTRE". Nesse código concluirei o nível NOVATO.
//O Objetivo do nível novato é criar 5 dos ditos Territórios, cada um com seu nome, cor do exército e número de tropas.
//É esperado que essas informações possam ser inseridas pelo "jogador" e que no fim sejam exibidas todas as informações capturadas.


//------------------------------------------NOVATO------------------------------------------

//Bibliotecas usadas

#include <stdio.h> // Para funções de entrada e saída padrão (printf, scanf, etc.)
#include <string.h> // Para funções de manipulação de strings (strcpy, strcspn, etc.)

// --- CONSTANTES GLOBAIS ---
//A fim de facilitar a manutenção e escalabilidade do projeto, estão declaradas as seguintes constantes
#define NUM_TERRITORIOS 5 // Define o número total de territórios a serem cadastrados.
#define TAMANHO_NOME 30 // Define o tamanho máximo de caracteres para o nome de um território.
#define TAMANHO_COR 10  // Define o tamanho máximo de caracteres para a cor de um exército.

// --- DEFINIÇÃO DE ESTRUTURAS---
//--> A struct 'Territorio' é um tipo de dado composto para agrupar todas as
//--> informações relacionadas a um único território em uma só variável.
//--> Isso organiza o código e facilita a manipulação dos dados.
typedef struct {
    char nome[TAMANHO_NOME];
    char cor[TAMANHO_COR];
    int numero_de_tropas;
} Territorio;

// ---FUNÇÃO PRINCIPAL---
//--> A função main é o ponto de entrada do programa. Todo o fluxo de execução começa aqui.
int main() {
    //--> Declaração do vetor 'mapa'. Este vetor funcionará como nosso "banco de dados" em memória,
    //--> armazenando todas as informações dos territórios que serão cadastrados pelo usuário.
    Territorio mapa [NUM_TERRITORIOS];
    printf("=============BEM-VINDO=============\n");
    printf("Cadastre aqui seus Territorios:\n");
    //--------CAPTURA AS INFORMAÇÕES DOS TERRITÓRIOS--------
    //--> Laço de repetição 'for' que executa 'NUM_TERRITORIOS' vezes (5, neste caso).
    //--> A variável 'i' serve como contador e também como índice para acessar cada posição do vetor 'mapa'.
    for (int i=0;i<NUM_TERRITORIOS;i++) {
    printf("Digite o Nome do Territorio %d: ",i+1);
    fgets(mapa[i].nome,TAMANHO_NOME,stdin);
    printf("Digite a Cor do Territorio %d: ",i+1);
    fgets(mapa[i].cor,TAMANHO_COR,stdin);
    printf("Digite o Numero de tropas do Territorio %d: ",i+1);
    scanf("%d", &mapa[i].numero_de_tropas);
// --- LIMPADOR DE BUFFER ---
//--> A função scanf("%d",...) lê o número, mas deixa o caractere de nova linha ('\n') no buffer de entrada.
//--> Este laço while lê e descarta cada caractere restante no buffer até encontrar e consumir o '\n',
//--> evitando que ele interfira na chamada fgets da próxima iteração do laço.
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\n");
}
//------EXIBE AS INFORMAÇÕES COLETADAS SEPARADAMENTE POR TERRITORIO------
//--> Segundo laço 'for', responsável por percorrer o vetor 'mapa' já preenchido
    //--> e exibir os dados de cada território de forma organizada.
    for (int i=0;i<NUM_TERRITORIOS;i++){

        printf("\nTerritorio %d: %s",i+1,mapa[i].nome);
        printf("Cor do Exercito %d: %s",i+1,mapa[i].cor);
        printf("Numero de tropas do Territorio %d: %d \n----------------------------------------------------\n",i+1,mapa[i].numero_de_tropas);
    }
    return 0; // Sinaliza ao sistema operacional que o programa terminou com sucesso.
}