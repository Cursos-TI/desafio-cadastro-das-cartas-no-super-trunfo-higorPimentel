#include <stdio.h>
#include <string.h>

// Super Trunfo em c: Fundamentos e Técnicas Avançadas
// NívelNovato, Aventureiro e Mestre
// Dev.: Higor Pimentel

int main() {


    // Declaração de variaveis carta 1
    char estado;
    char cod_carta[3];
    char nome_cidade[100];
    signed long  populacao;
    float area;
    float pib;
    int nro_pont_turitsitco;
    float super_poder;

    // Declaração de variaveis carta 2
    char estado2;
    char cod_carta2[3];
    char nome_cidade2[100];
    signed long populacao2;
    float area2;
    float pib2;
    int nro_pont_turitsitco2;
    float super_poder2;

    //usado somente pra calcular pib percapta
    float pib_bilhoes;


    // variaveis nivel aventureiro
    float densidade_populacional;
    float pib_per_capita;

    float densidade_populacional2;
    float pib_per_capita2;


    printf("\n");
    printf("-----------------Desafio Supertrunfo--------------\n\n");


    /*
        atrubuição dos valores nas variaveis
        Carta 1
    */
    printf("Preencha os daodos da Carta 1\n");
    
    printf("Digite a Letra do Estado - (A até H):\n");
    scanf(" %c", &estado);    

    printf("Digite o código do Estado - (01 até 04):\n");
    scanf("%s", cod_carta);
    
    
    // Limpar o Buffer, para nao capturar o 'enter' no fgets
     getchar();

    printf("Digite o nome da Cidade:\n");
    fgets(nome_cidade, sizeof(nome_cidade), stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = 0;

    printf("Digite a quantidade de habitantes (Somente números):\n");
    scanf("%ld", &populacao);

    printf("Digite a área da cidade (Separador decimal com ponto - exemplo: 1234.25):\n");
    scanf("%f", &area);

    printf("Digite o Pib da cidade (Separador decimal com ponto - exemplo: 699.25):\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos (Somente números):\n");
    scanf("%d", &nro_pont_turitsitco);


     /*
        atrubuição dos valores nas variaveis
        Carta 2
    */
    printf("\n");
    printf("Preencha os daodos da Carta 2\n");
    
    printf("Digite a Letra do Estado - (A até H):\n");
    scanf(" %c", &estado2);    

    printf("Digite o código do Estado - (01 até 04):\n");
    scanf("%s", cod_carta2);
    
    
    // Limpar o Buffer, para nao capturar o 'enter' no fgets
     getchar();

    printf("Digite o nome da Cidade:\n");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

    printf("Digite a quantidade de habitantes (Somente números):\n");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade (Separador decimal com ponto - exemplo: 1234.25):\n");
    scanf("%f", &area2);

    printf("Digite o Pib da cidade (Separador decimal com ponto - exemplo: 699.25):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos (Somente números):\n");
    scanf("%d", &nro_pont_turitsitco2);



    // calculando densidade populacional e pib per capita
    pib_bilhoes = pib  * 1000000000;
    densidade_populacional = populacao / area;
    pib_per_capita = pib_bilhoes / populacao;

    pib_bilhoes = pib2  * 1000000000;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib_bilhoes / populacao2;


    // calcula super poder
    super_poder = populacao + area + pib + pib_per_capita + densidade_populacional;    
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2;



    // COMPARACAO DAS CARTAS


    // exibe os dados da carta 1

    printf("\n\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado,cod_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %ld\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", nro_pont_turitsitco);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder);


    // exibe os dados da carta 2

    printf("\n\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2,cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nro_pont_turitsitco2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

 

    return 0;
    
}

