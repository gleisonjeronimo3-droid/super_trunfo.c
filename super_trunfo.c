#include <stdio.h>

int main() {
    char estado1;
    char codigo1[50];
    char cidade1[50]; 
    int populacao1; 
    float area1; 
    float pib1; 
    int turismo1;
    char estado2;
    char codigo2[50];
    char cidade2[50]; 
    int populacao2; 
    float area2; 
    float pib2; 
    int turismo2;

    printf("Insira as informações sobre a primeira cidade:\n"); 

    printf("Insira a letra do estado: "); 
    scanf(" %c", &estado1); 

    printf("Digite o codigo da cidade: "); 
    scanf("%s", codigo1); 

    printf("Diga o nome da cidade: "); 
    scanf("%s", cidade1); 

    printf("Qual o numero da populacao: "); 
    scanf("%d", &populacao1); 

    printf("Qual o numero de sua area: "); 
    scanf("%f", &area1); 

    printf("Qual valor do seu PIB: "); 
    scanf("%f", &pib1); 

    printf("Quantos pontos turisticos ha: "); 
    scanf("%d", &turismo1); 
     printf("Insira as informações sobre a segunda cidade:\n"); 

    printf("Insira a letra do estado: "); 
    scanf(" %c", &estado2); 

    printf("Digite o codigo da cidade: "); 
    scanf("%s", codigo2); 

    printf("Diga o nome da cidade: "); 
    scanf("%s", cidade2); 

    printf("Qual o numero da populacao: "); 
    scanf("%d", &populacao2); 

    printf("Qual o numero de sua area: "); 
    scanf("%f", &area2); 

    printf("Qual valor do seu PIB: "); 
    scanf("%f", &pib2); 

    printf("Quantos pontos turisticos ha: "); 
    scanf("%d", &turismo2); 


    printf("\nDados da Primeira Cidade: \n");                                
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nTurismo: %d\n",
       estado1, codigo1, cidade1, populacao1, area1, pib1, turismo1);
       printf("\nDados da Segunda Cidade: \n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nTurismo: %d\n",
       estado2, codigo2, cidade2, populacao2, area2, pib2, turismo2); 

    return 0;
}