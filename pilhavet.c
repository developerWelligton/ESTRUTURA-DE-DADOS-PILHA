/********************************************************

   TAD-PILHAVET  => ROTINAS
   ============

   Rotinas de manipulacao de Pilha com Vetor Estático:
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


void inicializa_pilha (P)
Tipo_Pilha *P;
{
  P->Base=0;
  P->Topo=0;
}

int insere_pilha (P, Dado)
Tipo_Pilha *P;
Tipo_Dado Dado;
{
  if (P->Topo < MAX_PILHA)           /* Vetor nao esta cheio ? */
  {
     P->Dado[P->Topo]=Dado;
     (P->Topo)++;
     return(OK);
  }
  else
     return(ERRO);
}

int retira_pilha (P, Dado)
Tipo_Pilha *P;
Tipo_Dado *Dado;
{
  if (P->Topo == P->Base)
     return(ERRO);
  else
  {
     (P->Topo)--;
     *Dado=P->Dado[P->Topo];
     return(OK);
  }
}

void exibe_pilha (P)
Tipo_Pilha P;
{
  int cont;

  printf("\n");
  for (cont=(P.Topo)-1; cont >= (P.Base); cont--)
      printf("Vetor[%d]=%d\n",cont,P.Dado[cont]);
  printf("\n");
}

int quantidade_pilha (P)
Tipo_Pilha P;
{
  return( P.Topo-P.Base );
}

int cheia_pilha (P)
Tipo_Pilha P;
{
  if (P.Topo == MAX_PILHA)
     return(OK);
  else
     return(!OK);
}

int vazia_pilha (P)
Tipo_Pilha P;
{
  if (P.Topo == P.Base)
     return(OK);
  else
     return(!OK);
}

int esvazia_pilha (P)
Tipo_Pilha *P;
{
  P->Topo=0;
  P->Base=0;
  return(OK);
}
