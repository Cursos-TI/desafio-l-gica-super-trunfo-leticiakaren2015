#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

int main(void) {
    //=====================================
    // Declaração das variáveis da Carta 1
    //=====================================
    char estado1;                          // Estado da carta 1 (A até H)
    char codigo1[4];                       // Código da carta 1 (ex: A01)
    char cidade1[50];                      // Nome da cidade da carta 1
    unsigned long int populacao1;          // População da carta 1
    double area1, pib1;                    // Área e PIB da carta 1
    int pontosTuristicos1;                 // Número de pontos turísticos da carta 1
    double densidade1, pibPerCapital1;     // Densidade demográfica e PIB per capita da carta 1
    long long superPoder1;                 // Superpoder da carta 1 (soma de vários atributos)

    //======================================
    // Declaração das variáveis da Carta 2
    //======================================
    char estado2;                          // Estado da carta 2 (A até H)
    char codigo2[4];                       // Código da carta 2 (ex: B01)
    char cidade2[50];                      // Nome da cidade da carta 2
    unsigned long int populacao2;          // População da carta 2
    double area2, pib2;                    // Área e PIB da carta 2
    int pontosTuristicos2;                 // Número de pontos turísticos da carta 2
    double densidade2, pibPerCapital2;     // Densidade demográfica e PIB per capita da carta 2
    long long superPoder2;                 // Superpoder da carta 2 (soma de vários atributos)

    //=====================================
    // Entrada de dados da Carta 1
    //=====================================
    printf("\n=== Cadastro da Carta 1 ===\n");

    printf("Digite um estado [A - H]: "); // Receber valor digitado pelo usuário
    scanf(" %c", &estado1);               // Armazenar valor

    printf("Digite o código da carta [ex: A01]: ");  // Receber valor digitado pelo usuário
    scanf("%s", codigo1);  // Armazenar valor

    printf("Digite o nome da cidade: "); // Receber valor digitado pelo usuário
    scanf(" %49[^\n]", cidade1); // Lê até 49 caracteres com espaços // Armazenar valor

    printf("Digite a população da cidade: "); // Receber valor digitado pelo usuário
    scanf("%lu", &populacao1); // Armazenar valor

    printf("Digite a área da cidade [em km²]: "); // Receber valor digitado pelo usuário
    scanf("%lf", &area1); // Armazenar valor

    printf("Digite o PIB da cidade: "); // Receber valor digitado pelo usuário
    scanf("%lf", &pib1); // Armazenar valor

    printf("Digite o número de pontos turísticos: "); // Receber valor digitado pelo usuário
    scanf("%d", &pontosTuristicos1); // Armazenar valor

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;       // Densidade = população / área
    pibPerCapital1 = pib1 / populacao1;    // PIB per capita = PIB / população
    superPoder1 = (long long)(populacao1 + pontosTuristicos1 + 
                  (long long)(area1 * 100) + (long long)(pib1 * 100) + 
                  (long long)(pibPerCapital1 * 100) + 
                  (long long)((1.0 / densidade1) * 100)); // Superpoder é a soma de vários atributos convertidos (Obtendo o valor do SUPERPODER!).

    printf("\n");

    //=====================================
    // Entrada de dados da Carta 2
    //=====================================
    printf("\n=== Cadastro da Carta 2 ===\n"); 

    printf("Digite um estado [A - H]: "); // Receber valor digitado pelo usuário
    scanf(" %c", &estado2); // Armazenar valor

    printf("Digite o código da carta [ex: B01]: "); // Receber valor digitado pelo usuário
    scanf("%s", codigo2); // Armazenar valor

    printf("Digite o nome da cidade: "); // Receber valor digitado pelo usuário
    scanf(" %49[^\n]", cidade2); // Armazenar valor

    printf("Digite a população da cidade: "); // Receber valor digitado pelo usuário
    scanf("%lu", &populacao2); // Armazenar valor

    printf("Digite a área da cidade [em km²]: "); // Receber valor digitado pelo usuário
    scanf("%lf", &area2); // Armazenar valor

    printf("Digite o PIB da cidade: "); // Receber valor digitado pelo usuário
    scanf("%lf", &pib2); // Armazenar valor

    printf("Digite o número de pontos turísticos: "); // Receber valor digitado pelo usuário
    scanf("%d", &pontosTuristicos2); // Armazenar valor

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;       // Densidade = população / área
    pibPerCapital2 = pib2 / populacao2;    // PIB per capita = PIB / população
    superPoder2 = (long long)(populacao2 + pontosTuristicos2 + 
                  (long long)(area2 * 100) + (long long)(pib2 * 100) + 
                  (long long)(pibPerCapital2 * 100) + 
                  (long long)((1.0 / densidade2) * 100)); // Superpoder é a soma de vários atributos convertidos (Obtendo o valor do SUPERPODER!).

    
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
    //=====================================
    // Menu interativo
    //=====================================
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capital\n");
    printf("7 - Super Poder\n");
    printf("Escolha um atributo (1-7): ");
    scanf("%d", &opcao);

    printf("\n");
    //=====================================
    // Comparação de atributos com switch
    //=====================================
    printf("\n======== RESULTADO ========\n");

    switch (opcao) {
        case 1: // População
            printf("Comparando População:\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Comparando Área:\n");
            printf("%s: %.2lf km²\n", cidade1, area1);
            printf("%s: %.2lf km²\n", cidade2, area2);
            if (area1 > area2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (area2 > area1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Comparando PIB:\n");
            printf("%s: %.2lf bilhões\n", cidade1, pib1);
            printf("%s: %.2lf bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("Comparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (regra invertida)
            printf("Comparando Densidade Demográfica:\n");
            printf("%s: %.2lf hab/km²\n", cidade1, densidade1);
            printf("%s: %.2lf hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6: // PIB per Capital
            printf("Comparando PIB per Capita:\n");
            printf("%s: %.2lf\n", cidade1, pibPerCapital1);
            printf("%s: %.2lf\n", cidade2, pibPerCapital2);
            if (pibPerCapital1 > pibPerCapital2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (pibPerCapital2 > pibPerCapital1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7: // Super Poder
            printf("Comparando Super Poder:\n");
            printf("%s: %lld pontos\n", cidade1, superPoder1);
            printf("%s: %lld pontos\n", cidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Vencedor CARTA 1: %s\n", cidade1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor CARTA 2: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default: // Caso o usuário escolha uma opção inválida
            printf("Opção inválida! Escolha de 1 a 7.\n");
            break;
    }

    return 0; // Finalizar o programa.
}
