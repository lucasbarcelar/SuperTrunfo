#include <stdio.h>

int main() {

    // definindo as variaveis

    int codigo_Carta = 0;
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontos_Turisticos = 0;    
    char estado[1] = "";
    char nome_Cidade[50] = "";
    
    int codigo_Carta_B = 0;
    int populacao_B = 0;
    float area_B = 0;
    float pib_B = 0;
    int pontos_Turisticos_B = 0;    
    char estado_B[1] = "";
    char nome_Cidade_B[50] = "";

    // entrada dos dados da carta A

    printf("Digite o estado da carta [valores de A a H]: \n");
    scanf("%s", &estado);
    printf("Digite o codigo da carta [digite um caracter de '01' até '04']: \n");
    scanf("%d", &codigo_Carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_Cidade);
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: \n"); 
    scanf("%f", &area);
    printf("Digite o pib da cidade[em milhões]: \n");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_Turisticos);
    printf("---------------------------------\n");
    printf("|Carta A cadastrada com sucesso!|\n");
    printf("---------------------------------\n\n");

    // entrada dos dados da carta B 

    printf("Digite o estado da carta [valores de A a H]: \n");
    scanf("%s", &estado_B); 
    printf("Digite o codigo da carta [valores de 01 até 04]: \n");
    scanf("%d", &codigo_Carta_B);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_Cidade_B);
    printf("Digite a populacao da cidade: \n"); 
    scanf("%d", &populacao_B);
    printf("Digite a area da cidade: \n");
    scanf("%f", &area_B);
    printf("Digite o pib da cidade[em milhões]: \n"); 
    scanf("%f", &pib_B);
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_Turisticos_B);
    printf("---------------------------------\n");
    printf("|Carta B cadastrada com sucesso!|\n");
    printf("---------------------------------\n\n");

    // comparando as cartas

    // saida dos dados da carta A
    
    printf("--------------------------------\n");
    printf("carta A \n--------------------------------\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s""0""%d\n", estado, codigo_Carta);
    printf("Nome da Cidade: %s\n", nome_Cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.3f milhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_Turisticos);
    printf("--------------------------------\n\n\n");

    // saida dos dados da carta B
    printf("--------------------------------\n");
    printf("carta B \n--------------------------------\n");
    printf("Estado: %s\n", estado_B);
    printf("Código da Carta: %s""0""%d\n", estado_B, codigo_Carta_B);
    printf("Nome da Cidade: %s\n", nome_Cidade_B);
    printf("População: %d habitantes\n", populacao_B);
    printf("Área: %.2f km²\n", area_B);
    printf("PIB: %.3f milhões\n", pib_B);
    printf("Pontos Turísticos: %d\n", pontos_Turisticos_B);

    return 0;
}