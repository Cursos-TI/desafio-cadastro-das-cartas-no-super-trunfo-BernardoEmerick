#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1_estado, carta2_estado;
    int carta1_cidade, carta2_cidade;
    char carta1_codigo[10], carta2_codigo[10];
    int carta1_populacao, carta2_populacao;
    float carta1_area, carta2_area;
    float carta1_pib, carta2_pib;
    int carta1_pontos_turisticos, carta2_pontos_turisticos;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Seja bem-vindo(a) ao jogo. Siga as instruções para o cadastro das cartas.\n\n");
    printf("Cadastro da primeira carta.\n\n");
    printf("Escolha do Estado. Digite uma letra entre as opções, mantendo em maiúsculo:\n");
    printf("A, B, C, D, E, F, G, H\n");
    scanf(" %c", &carta1_estado); // deve-se deixar o espaço, para evitar problemas com sobras no buffer.
    printf("Escolha uma cidade, digitando um número de 1 a 4:\n");
    scanf("%d", &carta1_cidade);
    
    /* Calcular o código com base nos dados anteriores. A parte %02d é para garantir que haja dois dígitos.
    Assim, se colocar estado = A e cidade = 2, o código será A02. */
    sprintf(carta1_codigo, "%c%02d", carta1_estado, carta1_cidade); 
    printf("O código da carta é %s\n", carta1_codigo);

    // Agora, vamos cadastrar os atributos da primeira carta.
    printf("Qual é a população da cidade? A resposta deverá ser um número inteiro positivo: \n");
    scanf("%d", &carta1_populacao);
    printf("Qual o seu PIB? Utilize até duas casas decimais.\nA separação será feita por ponto, não por vírgula. \nEx.: 10235.12\n");
    scanf("%f", &carta1_pib);
    printf("Qual é a área da cidade, em km^2?\nA resposta também deverá ser com duas casas decimais separadas por ponto.\n");
    scanf("%f", &carta1_area);
    printf("A cidade tem quantos pontos turísticos?\n ");
    scanf("%d", &carta1_pontos_turisticos);

    //Mensagem de confirmação de cadastro
    printf("A carta foi cadastrada com sucesso!\n\n");

    //Repetir o código, para o cadastro da segunda carta, com as adaptações das variáveis.
    
    printf("Cadastro da segunda carta.\n\n");
    printf("Escolha do Estado. Digite uma letra entre as opções, mantendo em maiúsculo:\n");
    printf("A, B, C, D, E, F, G, H\n");
    scanf(" %c", &carta2_estado); // deve-se deixar o espaço, para evitar problemas com sobras no buffer.
    printf("Escolha uma cidade, digitando um número de 1 a 4:\n");
    scanf("%d", &carta2_cidade);
    
    /* Calcular o código com base nos dados anteriores. A parte %02d é para garantir que haja dois dígitos.
    Assim, se colocar estado = A e cidade = 2, o código será A02. */
    sprintf(carta2_codigo, "%c%02d", carta2_estado, carta2_cidade); 
    printf("O código da carta é %s\n", carta2_codigo);

    // Agora, vamos cadastrar os atributos da primeira carta.
    printf("Qual é a população da cidade? A resposta deverá ser um número inteiro positivo: \n");
    scanf("%d", &carta2_populacao);
    printf("Qual o seu PIB? Utilize até duas casas decimais.\nA separação será feita por ponto, não por vírgula. \nEx.: 10235.12\n");
    scanf("%f", &carta2_pib);
    printf("Qual é a área da cidade, em km^2?\nA resposta também deverá ser com duas casas decimais separadas por ponto.\n");
    scanf("%f", &carta2_area);
    printf("A cidade tem quantos pontos turísticos?\n ");
    scanf("%d", &carta2_pontos_turisticos);

    //Mensagem de confirmação de cadastro
    printf("A carta foi cadastrada com sucesso!\n\n");

    // Exibição dos Dados das Cartas:
    printf("ATRIBUTOS DAS CARTAS\n\n");
    printf("Primeira carta:\n\n");
    printf("Código: %s\n", carta1_codigo);
    printf("População: %d habitantes\n", carta1_populacao);
    printf("Área: %.2f km^2\n", carta1_area);
    printf("PIB: R$ %.2f\n", carta1_pib);
    printf("Pontos turísticos: %d\n\n", carta1_pontos_turisticos);

    printf("Segunda carta:\n\n");
    printf("Código: %s\n", carta2_codigo);
    printf("População: %d habitantes\n", carta2_populacao);
    printf("Área: %.2f km^2\n", carta2_area);
    printf("PIB: R$ %.2f\n", carta2_pib);
    printf("Pontos turísticos: %d\n\n", carta2_pontos_turisticos);

    //Mensagem de término
    printf("A tarefa foi concluída com sucesso! Parabéns!");


    return 0;
};