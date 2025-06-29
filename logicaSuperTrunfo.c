#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20]="A";
    char codigo[20]= "A01";
    char cidade[20] = "São Paulo" ;
    int Populacao=12325000 ;
    float Area= 1521.11 ;
    float PIB= 699.28 ;
    int Pontos_Turisticos=50 ;
    float Densidade_Populacional= Populacao/Area ;
    float PIB_per_Capita= (PIB*1000000000)/Populacao ;
    float super_poder=(Populacao+Area+PIB+Pontos_Turisticos-Densidade_Populacional+PIB_per_Capita);

    char estado2[20]="B";
    char codigo2[20]= "B02";
    char cidade2[20] = "Rio de Janeiro" ;
    int Populacao2=6748000 ;
    float Area2= 1200.25  ;
    float PIB2= 300.50  ;
    int Pontos_Turisticos2=30  ;
    float Densidade_Populacional2= Populacao2/Area2 ;
    float PIB_per_Capita2= (PIB2*1000000000)/Populacao2 ;
    float super_poder2=(Populacao2+Area2+PIB2+Pontos_Turisticos2-Densidade_Populacional2+PIB_per_Capita2);

printf("Carta 1\n");
printf("Estado: %s\n", estado) ; 
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade); 
printf("População: %d\n", Populacao); 
printf("Área: %.2f km²\n", Area); 
printf("PIB: %.2f bilhões\n", PIB);
printf("Densidade Populacional:%.2f km²\n", Densidade_Populacional);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita);
printf("Super Poder: %.2f\n", super_poder);

printf("carta 2\n");
printf("Estado: %s\n", estado2) ; 
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2); 
printf("População: %d\n", Populacao2); 
printf("Área: %.2f km²\n", Area2); 
printf("PIB: %.2f bilhões\n", PIB2);
printf("Pontos Turísticos: %d\n", Pontos_Turisticos2);
printf("Densidade Populacional:%.2f km²\n", Densidade_Populacional2);
printf("PIB per Capita:%.2f reais\n", PIB_per_Capita2);
printf("Super Poder: %.2f\n", super_poder2);
printf("Comparação de cartas\n");
    if(Populacao>Populacao2);
    printf("Carta 1 Venceu!(1)\n");
    if(Area>Area2);
    printf("Carta 1 Venceu!(1)\n");
    if(PIB>PIB2);
    printf("Carta 1 Venceu!(1)\n");
    if(Pontos_Turisticos>Pontos_Turisticos2);
    printf("Carta 1 Venceu!(1)\n");
    if(Densidade_Populacional<Densidade_Populacional2);
    printf("Carta 1 Venceu!(1)\n");
    if(PIB_per_Capita>PIB_per_Capita2);
    printf("Carta 1 Venceu!(1)\n");
    if(super_poder>super_poder2);
    printf("Carta 1 Venceu!(1)\n");
    return 0;

    return 0;
}
