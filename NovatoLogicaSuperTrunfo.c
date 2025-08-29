#include <stdio.h> // Inclui a biblioteca padão de entrada e saída.

int main(void) {
    //=====================================
    // Declaração das variáveis da Carta 1
    //=====================================
    char estado1;         // Estado da cidade (uma letra de A a H).
    char codigo1[4];       // Código da carta (ex: A01). 3 caracteres + '\0' para terminar a string.
    char cidade1[50];      // Nome da Cidade  (máximo 49 caracteres + '/0').
    unsigned long int populacao1;       // População da cidade (número inteiro).
    double area1, pib1;    // Área da cidade em km² e PIB da cidade.
    int pontosTuristicos1;// Número de pontos turístico da cidade.
    double densidade1, pibPerCapital1; //Densidade da cidade e pibpercapital da cidade.
    long long superPoder1;       // Super poder da carta 1


    //======================================
    //Declaração das variáveis das Cartas 2
    //======================================
    char estado2;         // Estado da cidade (uma letra de A a H).
    char codigo2[4];      // Código da carta (ex: A01).3 caracteres + '\0' para terminar a string.
    char cidade2[50];     // Nome da Cidade  (máximo 49 caracteres + '/0').
    unsigned long int populacao2;       // População da cidade (número inteiro).
    double area2, pib2;    // Área da cidade em km² e PIB da cidade.
    int pontosTuristicos2;// Número de pontos turístico da cidade.
    double densidade2, pibPerCapital2; //Densidade da cidade e pibpercapital da cidade.
    long long superPoder2;       // Super poder da carta 2.


    //=====================================
    // Entrada de dados da Carta 1
    //=====================================
    printf("\n=== Cadastro da Carta 1 ===\n");    // Mensagem para  informar o usuário.
    printf("\n");

    printf("Digite um estado [A - H]: ");     // Solicita o estado.
    scanf(" %c", &estado1);                     // Lê um caractere. O espaço antes de %c ignora o enter anterior

    printf("Digite o código da carta [ex: A01]: ");    // Solicitar o código da carta.
    scanf("%s", codigo1);                               // Lê uma string (array de char).

    printf("Digite o nome da cidade: ");               // Solicitar o nome da cidade.
    scanf(" %[^\n]", cidade1);                               // Lê uma string.

    printf("Digite a população da cidade: ");          // Solicitar população.
    scanf("%lu", &populacao1);                            // Lê número inteiro.

    printf("Digite a área da cidade [em km²]: ");      // Solicitar área.
    scanf("%lf", &area1);                                 // Lê número decimal

    printf("Digite o PIB da cidade: ");                // Solicitar PIB.
    scanf("%lf", &pib1);                                  // Lê número decimal

    printf("Digite o números de pontos turísticos: "); // Solicitar pontos turísticos.
    scanf("%d", &pontosTuristicos1);                     // Lê número inteiro.


    //=====================================
    // Cálculo da carta 1
    //=====================================
    densidade1 =  populacao1 / area1;        // Obtendo o valor da densidade.
    pibPerCapital1 = pib1 / populacao1;              // Obtendo o valor do pibPerCapital.
    superPoder1 = (long long)(populacao1 + pontosTuristicos1 + (long long)(area1 * 100) + (long long)(pib1 * 100) + 
    (long long)(pibPerCapital1 * 100) + (long long)((1.0 / densidade1) * 100)); // Obtendo o valor do SUPERPODER!

    printf("\n");  // Linha em branco para separar da próxima carta.


    //=====================================
    // Entrada de dados da Carta 2
    //=====================================
    printf("\n=== Cadastro da Carta 2 ===\n");    // Mensagem para  informar o usuário.
    printf("\n");

    printf("Digite um estado [A - H]: ");     // Solicita o estado.
    scanf(" %c", &estado2);                     // Lê um caractere. O espaço antes de %c ignora o enter anterior

    printf("Digite o código da carta [ex: B01]: ");    // Solicitar o código da carta.
    scanf("%s", codigo2);                               // Lê uma string (array de char).

    printf("Digite o nome da cidade: ");               // Solicitar o nome da cidade.
    scanf(" %[^\n]", cidade2);                               // Lê uma string.

    printf("Digite a população da cidade: ");          // Solicitar população.
    scanf("%lu", &populacao2);                            // Lê número inteiro.

    printf("Digite a área da cidade [em km²]: ");      // Solicitar área.
    scanf("%lf", &area2);                                 // Lê número decimal

    printf("Digite o PIB da cidade: ");                // Solicitar PIB.
    scanf("%lf", &pib2);                                  // Lê número decimal

    printf("Digite o números de pontos turísticos: "); // Solicitar pontos turísticos.
    scanf("%d", &pontosTuristicos2);                     // Lê número inteiro.


    //=====================================
    // Cálculo da carta 2
    //=====================================
    densidade2 = populacao2 / area2;        // Obtendo o valor da densidade.
    pibPerCapital2 = pib2 / populacao2;              // Obtendo o valor do pibPerCapital.
    superPoder2 = (long long)(populacao2 + pontosTuristicos2 + (long long)(area2 * 100) + (long long)(pib2 * 100) + 
    (long long)(pibPerCapital2 * 100) + (long long)((1.0 / densidade2) * 100)); // Obtendo o valor do SUPERPODER!


    //=======================================
    // Exibição das informações das Castas 1
    //=======================================
    printf("\n=== Carta 1 ===\n");      // Cabeçalho da carta.
    printf("\n");                   
    printf("Estado: %c\n", estado1);                  // Exibir estado.
    printf("Código: %s\n", codigo1);                  // Exibir código da carta.
    printf("Nome da cidade: %s\n", cidade1);          // Exibir nome da cidade.
    printf("População: %lu\n", populacao1);          // Exibir população.
    printf("Área: %.2lf km²\n", area1);               // Exibir área.
    printf("PIB: %.2lf bilhões de reais\n", pib1);    // Exibir PIB.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);     // Exibir pontos turísticos.
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);      // Exibir densidade populacional.
    printf("PIB per Capital: %.2lf reais\n", pibPerCapital1);           // Exibir PIB per capital.
    printf("Super Poder: %lld\n", superPoder1);                         // Exibir Super Poder.


    //=======================================
    // Exibição das informações das Castas 2
    //=======================================
    printf("\n=== Carta 2 ===\n");                    // Cabeçalho da carta.
    printf("\n");
    printf("Estado: %c\n", estado2);                  // Exibir estado.
    printf("Código: %s\n", codigo2);                  // Exibir código da carta.
    printf("Nome da cidade: %s\n", cidade2);          // Exibir nome da cidade.
    printf("População: %lu\n", populacao2);          // Exibir população.
    printf("Área: %.2lf km²\n", area2);               // Exibir área.
    printf("PIB: %.2lf bilhões de reais\n", pib2);    // Exibir PIB.
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);     // Exibir pontos turísticos.
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);      // Exibir densidade populacional.
    printf("PIB per Capital: %.2lf reais\n", pibPerCapital2);           // Exibir PIB per capital.
    printf("Super Poder: %lld\n", superPoder2);                         // Exibir Super Poder.


printf("\n");
//==========================================
// Comparação das cartas 1 e 2
//==========================================
printf("======== Resultado ========\n");
    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu! (%lu)\n", populacao1);
    else
        printf("População: Carta 2 venceu! (%lu)\n", populacao2);

    if (area1 > area2)
        printf("Área: Carta 1 venceu! (%.2lf km²)\n", area1);
    else
        printf("Área: Carta 2 venceu! (%.2lf km²)\n", area2);

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu! (%.2lf bilhões)\n", pib1);
    else
        printf("PIB: Carta 2 venceu! (%.2lf bilhões)\n", pib2);

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turísticos: Carta 1 venceu! (%d)\n", pontosTuristicos1);
    else
        printf("Pontos Turísticos: Carta 2 venceu! (%d)\n", pontosTuristicos2);

    if (densidade1 < densidade2) // Menor densidade vence
        printf("Densidade Populacional: Carta 1 venceu! (%.2lf hab/km²)\n", densidade1);
    else
        printf("Densidade Populacional: Carta 2 venceu! (%.2lf hab/km²)\n", densidade2);

    if (pibPerCapital1 > pibPerCapital2)
        printf("PIB per Capital: Carta 1 venceu! (%.2lf)\n", pibPerCapital1);
    else
        printf("PIB per Capital: Carta 2 venceu! (%.2lf)\n", pibPerCapital2);

    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu! (%lld)\n", superPoder1);
    else
        printf("Super Poder: Carta 2 venceu! (%lld)\n", superPoder2);

    return 0;   // Finalizar o programa.
}