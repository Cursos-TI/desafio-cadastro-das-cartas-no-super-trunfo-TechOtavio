#include <stdio.h>

int main(){
    // Criando as variáveis 1 e seus formatando seus tipos.
    char Estado1[3], CodigoCarta1[4], NomeCidade1[20];
    int Populacao1, NumeroPontoTuristico1;
    float AreaKM1, PIB1;

    // Criando as variáveis 2 e seus formatando seus tipos.
    char Estado2[3], CodigoCarta2[4], NomeCidade2[20];
    int Populacao2, NumeroPontoTuristico2;
    float AreaKM2, PIB2;

    // Pegandos os dados de entrada e armazenando para todos os 1.
    printf("\n Digite a primeira letra, em maiusculo, do seu estado: \n");
    scanf("%2s", Estado1);

    printf("Digite o código seguindo o padrão(Primeira Letra do estado + numero 01 ao 04 (ex: A01)): \n");
    scanf("%3s", CodigoCarta1);

    printf("Digite nome da cidade: \n");
    scanf("%19s", NomeCidade1);

    printf("Digite o numero da População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área em Km: \n");
    scanf("%f", &AreaKM1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumeroPontoTuristico1);


    // Pegandos os dados de entrada e armazenando para todos os 2.
    printf("\n Digite a primeira letra, em maiusculo, do seu estado: \n");
    scanf("%2s", Estado2);

    printf("Digite o código seguindo o padrão(Primeira Letra do estado + numero 01 ao 04 (ex: A01)): \n");
    scanf("%3s", CodigoCarta2);

    printf("Digite nome da cidade: \n");
    scanf("%19s", NomeCidade2);

    printf("Digite o numero da População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área em Km: \n");
    scanf("%f", &AreaKM2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turísticos: \n");
    scanf("%d", &NumeroPontoTuristico2);


    // Imprimindo na tela a Carta 01.
    printf("\n=====================\n");
    printf("\nCarta 01:\n");
    printf("\n=====================\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo de Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área em Km²: %.2f\n", AreaKM1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", NumeroPontoTuristico1);
    printf("\n=====================\n");

    // Imprimindo na tela a Carta 02.
    printf("\n=====================\n");
    printf("\nCarta 02:\n");
    printf("\n=====================\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo de Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área em Km²: %.2f\n", AreaKM2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de Pontos Turísticos: %d\n", NumeroPontoTuristico2);
    printf("\n=====================\n");

    return 0;
}