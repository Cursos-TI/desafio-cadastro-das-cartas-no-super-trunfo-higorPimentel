#include <stdio.h>
#include <string.h>

// Super Trunfo em c: Desenvolvendo a Lógica do Jogo
// Desafio: nível mestre
// Dev.: Higor Pimentel
// 31/05/2025

int main() {


    // Declaração de variaveis carta 1
    char estado;
    char cod_carta[3];
    char nome_cidade[200];
    signed long  populacao;
    float area;
    float pib;
    int nro_pont_turitsitco;
    float super_poder;

    // Declaração de variaveis carta 2
    char estado2;
    char cod_carta2[3];
    char nome_cidade2[200];
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


    char resultado[300];
    int opcao_menu;
    char nome_atributo_comparacao[50];
    char valor_atributo_comparacao[100];
    char valor_atributo_comparacao2[100];


    printf("\n");
    printf("-----------------Desafio Supertrunfo--------------\n\n");


    /*
        atrubuição dos valores nas variaveis
        Carta 1
    */
    printf("Preencha os dados da Carta 1\n");
    
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
    printf("Preencha os dados da Carta 2\n");
    
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





   // Exibe opções do menu):
   printf("\n\n");
   printf("Definia qual atributo será utilizado na comparação. Escolha uma opção de 1 a 5:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - Pib\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   scanf("%d", &opcao_menu);
   
    switch (opcao_menu){

        case 1:

        sprintf(nome_atributo_comparacao,"População");
        sprintf(valor_atributo_comparacao,"%ld",populacao);
        sprintf(valor_atributo_comparacao2,"%ld",populacao2);

        if(populacao > populacao2) {
            sprintf(resultado,"Resultado: Carta 1 %s venceu!",nome_cidade);
        } else if (populacao < populacao2){
            sprintf(resultado,"Resultado: Carta 2 %s venceu!",nome_cidade2);
        } else {
            sprintf(resultado,"Resultado: Empate!");
        }
            
        break;

        case 2:

        sprintf(nome_atributo_comparacao,"Área");
        sprintf(valor_atributo_comparacao,"%f",area);
        sprintf(valor_atributo_comparacao2,"%f",area2);

        if(area > area2) {
            sprintf(resultado,"Resultado: Carta 1 %s venceu!",nome_cidade);
        } else if (area < area2){
            sprintf(resultado,"Resultado: Carta 2 %s venceu!",nome_cidade2);
        } else {
            sprintf(resultado,"Resultado: Empate!");
        }
            
        break;

        case 3:

        sprintf(nome_atributo_comparacao,"Pib");
        sprintf(valor_atributo_comparacao,"%f",pib);
        sprintf(valor_atributo_comparacao2,"%f",pib2);
        
        if(pib > pib2) {
            sprintf(resultado,"Resultado: Carta 1 %s venceu!",nome_cidade);
        } else if (pib < pib2){
            sprintf(resultado,"Resultado: Carta 2 %s venceu!",nome_cidade2);
        } else {
            sprintf(resultado,"Resultado: Empate!");
        }
            
        break;

        case 4:

        sprintf(nome_atributo_comparacao,"Número de pontos turísticos");
        sprintf(valor_atributo_comparacao,"%d",nro_pont_turitsitco);
        sprintf(valor_atributo_comparacao2,"%d",nro_pont_turitsitco2);

        if(nro_pont_turitsitco > nro_pont_turitsitco2) {
            sprintf(resultado,"Resultado: Carta 1 %s venceu!",nome_cidade);
        } else if (nro_pont_turitsitco < nro_pont_turitsitco2){
            sprintf(resultado,"Resultado: Carta 2 %s venceu!",nome_cidade2);
        } else {
            sprintf(resultado,"Resultado: Empate!");
        }
            
        break;


        case 5:
        sprintf(nome_atributo_comparacao,"Densidade demográfica");
        sprintf(valor_atributo_comparacao,"%f",densidade_populacional);
        sprintf(valor_atributo_comparacao2,"%f",densidade_populacional2);

        if(densidade_populacional < densidade_populacional2) {
            sprintf(resultado,"Resultado: Carta 1 %s venceu!",nome_cidade);
        } else if (densidade_populacional > densidade_populacional2){
            sprintf(resultado,"Resultado: Carta 2 %s venceu!",nome_cidade2);
        } else {
            sprintf(resultado,"Resultado: Empate!");
        }
            
        break;
    
    default:
        printf("Opção Selecionada inválida:\n");
        return 0;
    }


    printf("\n\n");
    printf("Comparação de cartas (Atributo: %s):\n",nome_atributo_comparacao);
    printf("Carta 1 - : %s: %s\n", nome_cidade,valor_atributo_comparacao);
    printf("Carta 2 - : %s: %s\n", nome_cidade2,valor_atributo_comparacao2);
    printf("%s", resultado);
    

    return 0;
    
}

