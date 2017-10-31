#include<stdio.h>
#include<stdlib.h>
#define LIN 5
#define COL 5


void imprimir_pista();
char obter_simbolo_carro();


char pista[LIN][COL] = {'_','_','_','_','_',
                        'X','X','_','X','X',
                        'X','X','_','X','X',
                        'X','X','_','X','X',
                        'X','X','_','_','_'};

struct Carro
{
    int linha;
    int coluna;
    char direcao; // L, O, N, S
};

struct Carro carrinho;

void imprimir_pista()
{
    for(int l = 0; l < LIN ; l++)
    {
        for(int c = 0; c < COL; c++)
        {
            if(carrinho.linha == l && carrinho.coluna == c)
                printf("%c", obter_simbolo_carro());
            else
                printf("%c", pista[l][c]);

            printf("|");
        }

        printf("\n");
    }

        printf("\n");
        printf("\n");
}


char obter_simbolo_carro()
{
    if(carrinho.direcao == 'L') //LESTE
        return '>';
    else if(carrinho.direcao == 'O') // OESTE
        return '<';
    else if(carrinho.direcao == 'S') // SUL
        return 'V';
    else
        return 'A'; //NORTE
}

int mover()
{
    if(carrinho.direcao == 'L')
    {
        if(carrinho.coluna + 1 >= COL ||
           pista[carrinho.linha][carrinho.coluna + 1] != '_')
                 return 0;

        carrinho.coluna++;
    }
    else if(carrinho.direcao == 'O')
    {
        if(carrinho.coluna - 1 <= 0 ||
           pista[carrinho.linha][carrinho.coluna - 1] != '_')
                return 0;

        carrinho.coluna--;
    }
    else if(carrinho.direcao == 'S')
    {
        if(carrinho.linha + 1 >= LIN ||
           pista[carrinho.linha + 1][carrinho.coluna] != '_')
                return 0;

            carrinho.linha ++;
    }
    else
    {
        if(carrinho.linha - 1 <= 0 ||
           pista[carrinho.linha - 1][carrinho.coluna]  != '_')
                return 0;

        carrinho.linha --;
    }
    return 1;
}

void esquerda()
{
  if(carrinho.direcao == 'L') //LESTE
    carrinho.direcao = 'N';
  else if(carrinho.direcao == 'O') // OESTE
    carrinho.direcao = 'S';
  else if(carrinho.direcao == 'S') // SUL
    carrinho.direcao = 'L';
  else
    carrinho.direcao = 'O'; //NORTE
}

void esquerda(int vezes)
{
  while(vezes >= 0)
  {
    esquerda();

    --vezes;
  }
}

void direita()
{
  if(carrinho.direcao == 'L') //LESTE
    carrinho.direcao = 'S';
  else if(carrinho.direcao == 'O') // OESTE
    carrinho.direcao = 'N';
  else if(carrinho.direcao == 'S') // SUL
    carrinho.direcao = 'O';
  else
    carrinho.direcao = 'L'; //NORTE
}

void direita(int vezes)
{
  while(vezes >= 0)
  {
    direita();

    --vezes;
  }
}

void esperar(int tempo)
{
    for(int i = 0; i < tempo * 99999999; i++){}
}

void limpar_tela()
{
    system("cls || clear");
}

int main()
{

    //inicializa dados do carrinho
    carrinho.direcao = 'L';
    carrinho.linha = 0;
    carrinho.coluna = 0;

    limpar_tela();

    //imprimo a pista
    imprimir_pista();
    for(int i = 0 ; i < COL + 1; i++ )
    {
        if(!mover())
        {
            printf("Movimento Inválido.\n");
            return 0;
        }
        esperar(10);
        limpar_tela();
        imprimir_pista();
    }

    return 0;
}
