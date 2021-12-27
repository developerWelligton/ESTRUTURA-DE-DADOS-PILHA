/********************************************************

   TAD-PILHAVET  => MAIN
   =============

   Programa que usa as rotinas de manipulacao de
   Pilha com Vetor Estático:
   - Estruturas de dados com alocacao estatica
   - Insercao no final (topo) do vetor
   - Remocao  do final (topo) do vetor
   > LIFO: Last In / First Out

   Aplicacao tipica:
   - O ultimo a entrar eh o primeiro a sair

   Por: Fernando Osorio
   Data de criacao: Fev/2001
   Data de atualizacao: Ago/2018

*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "pilhavet.h"

int main(void)
{
  Tipo_Pilha pilha;
  Tipo_Dado  valor;

  printf("\n>>> ROTINAS DE MANIPULACAO DE PILHAS - ALOCACAO ESTATICA <<<\n\n");

  inicializa_pilha(&pilha);

  if (vazia_pilha(pilha))
     printf("=> Pilha vazia...\n");

  if (!insere_pilha(&pilha,2))
     printf(">>> Erro: insere pilha\n");
  else
     printf("=> O valor 2 foi inserido no topo da pilha\n");

  if (!insere_pilha(&pilha,4))
     printf(">>> Erro: insere pilha\n");
  else
     printf("=> O valor 4 foi inserido no topo da pilha\n");

  if (!insere_pilha(&pilha,6))
     printf(">>> Erro: insere pilha\n");
  else
     printf("=> O valor 6 foi inserido no topo da pilha\n");

  printf("=> Elementos da pilha... %d\n",quantidade_pilha(pilha));

  exibe_pilha(pilha);

  if (retira_pilha(&pilha,&valor))
     printf("=> O valor %d foi excluido do topo da pilha\n",valor);

  if (retira_pilha(&pilha,&valor))
     printf("=> O valor %d foi excluido do topo da pilha\n",valor);

  exibe_pilha(pilha);

  printf("\n");
  system("pause");
  return 0;
}
