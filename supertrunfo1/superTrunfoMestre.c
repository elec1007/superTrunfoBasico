#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct que armazena os  dados da carta
typedef struct {
  char estado[30];
  int codigo;
  char cidade[30];
  unsigned long int populacao;
  float area;
  float pib;
  int pontosTuristicos;
} Carta;

int main() {
  // inicializa as structs de cartas, que o usuario vai preencher
  Carta cartaUm;
  Carta cartaDois;

  // buffer temporario, usado pra ler os inputs de inteiros e floats
  char buffer[100];
  printf("\n-----Bem vindo ao jogo de super trunfo!-----\n");
  printf("---Preciso que digite as informacoes da carta que ira inserir!---\n");
  printf(">Primeira carta:\n");

  // usei fgets, pq usando scanf e fgets tinha que ficar limpando o
  // input buffer de scanf cada vez que o programa lia algo do usuario

  // e o sscanf e pra ler a string do buffer e transformar em outro tipo de dado
  // (nos casos abaixo, em numeros floats ou decimais)

  // faz a leitura dos dados(estado,codigo,cidade,populacao,area,pib,pontos turisticos);
  printf("Digite o estado: ");
  fgets(cartaUm.estado, sizeof(cartaUm.estado), stdin);

  printf("Digite o codigo: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d",&cartaUm.codigo); // copia o input do buffer, transforma no tipo
                                                                               // especificado(nesse caso, inteiro decimal) e copia
                                                                               // pro codigo da carta

  printf("Digite o nome da cidade: ");
  fgets(cartaUm.cidade, sizeof(cartaUm.cidade), stdin);

  printf("Digite o tamanho da populacao: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%lu", &cartaUm.populacao);

  printf("Digite o tamanho da area: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaUm.area);

  printf("Digite o tamanho do PIB: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaUm.pib);

  printf("Digite o numero de pontos turisticos: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaUm.pontosTuristicos);

  float densidadeUm = cartaUm.populacao / cartaUm.area;
  float pibCapitaUm = cartaUm.pib / cartaUm.populacao;
  float superPoderUm =
      cartaUm.area + cartaUm.populacao + cartaUm.pib + cartaUm.pontosTuristicos;

  // printa os dados da carta 1 inseridos pelo usuario

  printf(">Primeira carta:\n ");
  printf("estado: %s", cartaUm.estado);
  printf("codigo: %d\n", cartaUm.codigo);
  printf("cidade: %s", cartaUm.cidade);
  printf("populacao: %lu\n", cartaUm.populacao);
  printf("area(em km^2): %f\n", cartaUm.area);
  printf("PIB(em bilhoes de reais): %f\n", cartaUm.pib);
  printf("numero de pontos turisticos: %d\n", cartaUm.pontosTuristicos);
  printf("densidade populacional(hab/km^2): %.2f\n", densidadeUm);
  printf("pib per capita: %.2f\n", pibCapitaUm);
  printf("super poder da carta 1: %.2f\n", superPoderUm);

  // faz a leitura dos dados, agora da carta 2

  printf("---Agora da segunda carta!:---\n");
  printf(">Segunda carta:\n");

  printf("Digite o estado: ");
  fgets(cartaDois.estado, sizeof(cartaDois.estado), stdin);

  printf("Digite o codigo: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaDois.codigo);

  printf("Digite o nome da cidade: ");
  fgets(cartaDois.cidade, sizeof(cartaDois.cidade), stdin);

  printf("Digite o tamanho da populacao: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%lu", &cartaDois.populacao);

  printf("Digite o tamanho da area: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaDois.area);

  printf("Digite o tamanho do PIB: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaDois.pib);

  printf("Digite o numero de pontos turisticos: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaDois.pontosTuristicos);

  float densidadeDois = cartaDois.populacao / cartaDois.area;
  float pibCapitaDois = cartaDois.pib / cartaDois.populacao;
  float superPoderDois = cartaDois.area + cartaDois.populacao + cartaDois.pib +
                         cartaDois.pontosTuristicos;

  // printa os dados da carta 2

  printf(">Segunda carta:\n ");
  printf("estado: %s", cartaDois.estado);
  printf("codigo: %d\n", cartaDois.codigo);
  printf("cidade: %s", cartaDois.cidade);
  printf("populacao: %lu\n", cartaDois.populacao);
  printf("area(em km^2): %f\n", cartaDois.area);
  printf("PIB(em bilhoes de reais): %f\n", cartaDois.pib);
  printf("numero de pontos turisticos: %d\n", cartaDois.pontosTuristicos);
  printf("densidade populacional(hab/km^2): %.2f\n", densidadeDois);
  printf("pib per capita: %.2f\n", pibCapitaDois);
  printf("super poder da carta 2: %.2f\n", superPoderDois);

  //checa os atributos de cada carta, e ve qual tem o maior
  if(cartaUm.populacao>cartaDois.populacao){
    printf("Carta 1 venceu (1)\n");
  }
  else{
    printf("Carta 2 venceu (2)\n");
  }

   if(cartaUm.area>cartaDois.area){
    printf("Carta 1 venceu (1)\n");
  }
  else{
    printf("Carta 2 venceu (2)\n");
  }

   if(cartaUm.pib>cartaDois.pib){
    printf("Carta 1 venceu (1)\n");
  }
  else{
    printf("Carta 2 venceu (2)\n");
  }

   if(cartaUm.pontosTuristicos>cartaDois.pontosTuristicos){
    printf("Carta 1 venceu (1)\n");
  }
  else{
    printf("Carta 2 venceu (2)\n");
  }

   if(densidadeUm>densidadeDois){
    printf("Carta 2 venceu (1)\n");
  }
  else{
    printf("Carta 1 venceu (2)\n");
  }

   if(pibCapitaUm>pibCapitaDois){
    printf("Carta 1 venceu (1)\n");
  }
  else{
    printf("Carta 2 venceu (2)\n");
  }

  if(superPoderUm>superPoderDois){
    printf("Carta 1 venceu(1)\n");
  }
  else{
    printf("Carta 2 venceu(2)\n");
  }
}
