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


    //============================================
    // Menu de escolha de dois atributos
    //============================================
    int atributo1, atributo2;

    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capital\n");
    printf("7 - Super Poder\n");
    printf("\n");
    do {
        printf("Escolha o primeiro atributo (1-7): \n");
        scanf("%d", &atributo1);
    } while (atributo1 < 1 || atributo1 > 7);
    
    do {
        printf("Escolha o segundo atributo (1-7, diferente do primeiro): \n");
        scanf("%d", &atributo2);
    } while (atributo2 < 1 || atributo2 > 7 || atributo2 == atributo1);

    //============================================
    // Obter os valores dos atributos
    //============================================
    double valor1_attr1=0, valor1_attr2=0, valor2_attr1=0, valor2_attr2=0;

    // Carta 1
    switch (atributo1)  {   case 1: valor1_attr1=populacao1; break; 
                            case 2: valor1_attr1=area1; break; 
                            case 3: valor1_attr1=pib1; break; 
                            case 4: valor1_attr1=pontosTuristicos1; break; 
                            case 5: valor1_attr1=densidade1; break; 
                            case 6: valor1_attr1=pibPerCapital1; break; 
                            case 7: valor1_attr1=superPoder1; break;  }

    switch (atributo2)  {   case 1: valor1_attr2=populacao1; break; 
                            case 2: valor1_attr2=area1; break; 
                            case 3: valor1_attr2=pib1; break; 
                            case 4: valor1_attr2=pontosTuristicos1; break; 
                            case 5: valor1_attr2=densidade1; break; 
                            case 6: valor1_attr2=pibPerCapital1; break; 
                            case 7: valor1_attr2=superPoder1; break;  }

    // Carta 2
    switch (atributo1)   {  case 1: valor2_attr1=populacao2; break; 
                            case 2: valor2_attr1=area2; break; 
                            case 3: valor2_attr1=pib2; break; 
                            case 4: valor2_attr1=pontosTuristicos2; break; 
                            case 5: valor2_attr1=densidade2; break; 
                            case 6: valor2_attr1=pibPerCapital2; break; 
                            case 7: valor2_attr1=superPoder2; break;  }

    switch (atributo2)   {  case 1: valor2_attr2=populacao2; break; 
                            case 2: valor2_attr2=area2; break; 
                            case 3: valor2_attr2=pib2; break; 
                            case 4: valor2_attr2=pontosTuristicos2; break; 
                            case 5: valor2_attr2=densidade2; break; 
                            case 6: valor2_attr2=pibPerCapital2; break; 
                            case 7: valor2_attr2=superPoder2; break;  }

    //============================================
    // Comparação individual dos atributos
    //============================================
    printf("\n=== RESULTADO INDIVIDUAL DOS ATRIBUTOS ===\n");

    // Atributo 1
    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per capital\n"); break;
        case 7: printf("Super Poder\n"); break;
    }
    printf("%s: %.2lf\n%s: %.2lf\n", cidade1, valor1_attr1, cidade2, valor2_attr1);
    if (atributo1 == 5) { // Densidade: menor vence
        if (valor1_attr1 < valor2_attr1) printf("Vencedor: %s\n", cidade1);
        else if (valor2_attr1 < valor1_attr1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate!\n");
    } else { // outros: maior vence
        if (valor1_attr1 > valor2_attr1) printf("Vencedor: %s\n", cidade1);
        else if (valor2_attr1 > valor1_attr1) printf("Vencedor: %s\n", cidade2);
        else printf("Empate!\n");
    }

    // Atributo 2
    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
        case 6: printf("PIB per capital\n"); break;
        case 7: printf("Super Poder\n"); break;
    }
    printf("%s: %.2lf\n%s: %.2lf\n", cidade1, valor1_attr2, cidade2, valor2_attr2);
    if (atributo2 == 5) { 
        if (valor1_attr2 < valor2_attr2) printf("Vencedor: %s\n", cidade1);
        else if (valor2_attr2 < valor1_attr2) printf("Vencedor: %s\n", cidade2);
        else printf("Empate!\n");
    } else {
        if (valor1_attr2 > valor2_attr2) printf("Vencedor: %s\n", cidade1);
        else if (valor2_attr2 > valor1_attr2) printf("Vencedor: %s\n", cidade2);
        else printf("Empate!\n");
    }

    //============================================
    // Comparação final (soma dos atributos)
    //============================================
    double total1 = valor1_attr1 + valor1_attr2;
    double total2 = valor2_attr1 + valor2_attr2;
    printf("\n=== RESULTADO FINAL (Soma dos Atributos) ===\n");
    printf("\n");
    printf("%s: %.2lf + %.2lf = %.2lf\n", cidade1, valor1_attr1, valor1_attr2, total1);
    printf("%s: %.2lf + %.2lf = %.2lf\n", cidade2, valor2_attr1, valor2_attr2, total2);
    printf("\n");
    
    if (total1 > total2) printf("Vencedor da rodada: %s\n", cidade1);
    else if (total2 > total1) printf("Vencedor da rodada: %s\n", cidade2);
    else printf("Empate na rodada!\n");

    return 0;
}
