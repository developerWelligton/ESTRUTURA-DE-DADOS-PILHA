/********************************************************
   TAD-PILHAVET - HEADER  (.h)

   Rotinas de manipulacao de Pilha com Vetor Estático
   Por: Fernando Osorio
   Data de criacao: Fev/2001
   Data de atualizacao: Ago/2018

*********************************************************/

#define MAX_PILHA 100

#define FALSO      0
#define VERDADEIRO 1

#define OK         1
#define ERRO       0

typedef int Tipo_Dado;

typedef struct
        {
           Tipo_Dado Dado    [MAX_PILHA];
           int       Base,Topo;
        }  Tipo_Pilha;


/***   Rotinas de Manipulacao de Pilha (Vetor) - Lista Linear Sequencial ***/

void inicializa_pilha (Tipo_Pilha *P);
int  insere_pilha     (Tipo_Pilha *P, Tipo_Dado  Dado);
int  retira_pilha     (Tipo_Pilha *P, Tipo_Dado *Dado);
void exibe_pilha      (Tipo_Pilha  P);
int  quantidade_pilha (Tipo_Pilha  P);
int  cheia_pilha      (Tipo_Pilha  P);
int  vazia_pilha      (Tipo_Pilha  P);
int  esvazia_pilha    (Tipo_Pilha *P);

/* FIM */
