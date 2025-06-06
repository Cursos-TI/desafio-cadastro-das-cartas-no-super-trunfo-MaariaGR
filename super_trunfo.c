#include <stdio.h> <string.h> //bibliotecas
int main (){ //inicio da função principal do programa
    printf ("DESAFIO CRIANDO AS CARTAS DE SUPER TRUNFO \n\n");
    
    //declaração de variáveis

    char estado1[2], codigodacarta1[4], nomedacidade1[50];
    int populacao1, numeropontoturis1;
    float area1, pib1;

    char estado2[2], codigodacarta2[4], nomedacidade2[50];
    int populacao2, numeropontoturis2;
    float area2, pib2;
    
    //entrada carta 1

    printf ("Carta 1 \n");
    printf ("Digite a letra do Estado: \n");
    scanf ("%s", &estado1);
    
    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigodacarta1);

    printf ("Digite o nome da cidade (sem espaço ou usando _ ): \n");
    scanf ("%s", &nomedacidade1);

    printf ("Digite o número da população: \n");
    scanf ("%d", &populacao1);

    printf ("Digite a área em km²: \n");
    scanf ("%f", &area1);
    
    printf ("Digite o número do PIB: \n");
    scanf ("%f", &pib1);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &numeropontoturis1);



    //entrada carta 2

    printf ("\nCarta 2\n");

    printf ("Digite a letra do Estado: \n");
    scanf ("%s", &estado2);
    
    printf ("Digite o código da carta: \n");
    scanf ("%s", &codigodacarta2);

    printf ("Digite o nome da cidade (sem espaço ou usando _ ): \n");
    scanf ("%s", &nomedacidade2);

    printf ("Digite o número da população: \n");
    scanf ("%d", &populacao2);

    printf ("Digite a área em km²: \n");
    scanf ("%f", &area2);
    
    printf ("Digite o número do PIB: \n");
    scanf ("%f", &pib2);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &numeropontoturis2);


    // Exibição dos dados inseridos pelo usuário
    printf ("\nCarta 1: \nEstado: %s\nCódigo da carta: %s\n", estado1, codigodacarta1);
    printf ("Cidade: %s\nPopulação: %d\nÁrea em km²: %.2f\nPIB: %.2f\n", nomedacidade1, populacao1, area1, pib1);
    printf ("Pontos Turísticos: %d\n", numeropontoturis1);
    
    printf ("\nCarta 2: \nEstado: %s\nCódigo da carta: %s\n", estado2, codigodacarta2);
    printf ("Cidade: %s\nPopulação: %d\nÁrea em km²: %.2f\nPIB: %.2f\n", nomedacidade2, populacao2, area2, pib2);
    printf ("Pontos Turísticos: %d\n", numeropontoturis2);
    return 0;// Retorna 0 para indicar que o programa foi executado com sucesso

} // Fim da função principal do programa