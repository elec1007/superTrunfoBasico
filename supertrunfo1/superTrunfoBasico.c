#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// struct que armazena os  dados da carta
typedef struct {
  char estado[30];
  int codigo;
  char cidade[30];
  float populacao;
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
  printf(">Primeira carta:\n ");

  // faz a leitura dos dados(estado,codigo,cidade,populacao,area,pib,pontos turisticos);
  // usei fgets, pq usando scanf e fgets tinha que ficar limpando o
  // input buffer de scanf cada vez que o programa lia algo do usuario

  printf("Digite o estado: ");
  fgets(cartaUm.estado, sizeof(cartaUm.estado), stdin);

  printf("Digite o codigo: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaUm.codigo); //copia o input do buffer, transforma no tipo especificado(nesse caso, inteiro decimal) e copia pro codigo da carta

  printf("Digite o nome da cidade: ");
  fgets(cartaUm.cidade, sizeof(cartaUm.cidade), stdin);

  printf("Digite o tamanho da populacao: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaUm.populacao);

  printf("Digite o tamanho da area: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaUm.area);

  printf("Digite o tamanho do PIB: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaUm.pib);

  printf("Digite o numero de pontos turisticos: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaUm.pontosTuristicos);

  // printa os dados inseridos pelo usuario
  
  printf(">Primeira carta:\n ");
  printf("estado: %s\n", cartaUm.estado);
  printf("codigo: %d\n", cartaUm.codigo);
  printf("cidade: %s\n", cartaUm.cidade);
  printf("populacao: %f\n", cartaUm.populacao);
  printf("area(em km^2): %f\n", cartaUm.area);
  printf("PIB(em bilhoes de reais): %f\n", cartaUm.pib);
  printf("numero de pontos turisticos: %d\n", cartaUm.pontosTuristicos);


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
  sscanf(buffer, "%f", &cartaDois.populacao);

  printf("Digite o tamanho da area: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaDois.area);

  printf("Digite o tamanho do PIB: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%f", &cartaDois.pib);

  printf("Digite o numero de pontos turisticos: ");
  fgets(buffer, sizeof(buffer), stdin);
  sscanf(buffer, "%d", &cartaDois.pontosTuristicos);


  printf(">Segunda carta:\n ");
  printf("estado: %s\n", cartaDois.estado);
  printf("codigo: %d\n", cartaDois.codigo);
  printf("cidade: %s\n", cartaDois.cidade);
  printf("populacao: %f\n", cartaDois.populacao);
  printf("area(em km^2): %f\n", cartaDois.area);
  printf("PIB(em bilhoes de reais): %f\n", cartaDois.pib);
  printf("numero de pontos turisticos: %d\n", cartaDois.pontosTuristicos);
}