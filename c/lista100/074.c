#include <stdio.h>

int main(){
    int vetor[30];

    for(int i = 0; i<30; i++)
        vetor[i] = 0;

    int opcao, elemento, posicao, troca;
    
    while(1){
        
        do{
            printf("\nEscolha:\n1 -- Inserir no final\n2 -- Inserir em uma posição\n3 -- Remover de uma posição\n4 -- Remover todos os elementos iguais ao elemento dado\n5 -- Gerar novo array sem duplicidades\n");
            scanf("%d", &opcao);
        }while(opcao<0 || opcao>5);
        
        if(opcao==0){
            break;
        }

        else if(opcao==1){

            printf("\nOpção 1\nElemento: ");
            scanf("%d", &elemento);

            for(int i = 0; i<30; i++){
                if(vetor[i] == 0){
                    vetor[i] = elemento;
                    vetor[i+1] = 0;
                    break;
                }
            }
        }

        else if(opcao==2){
        
            printf("\nOpção 2\nPosição e elemento: ");
            scanf("%d %d", &posicao, &elemento);
        
            for(int i = 0; i<30; i++){
                if(i == posicao){
                    vetor[i] = elemento;
                    break;
                }
            }
        }

        else if(opcao==3){
        
            printf("\nOpção 3\nPosição: ");
            scanf("%d", &posicao);
            
            int ultimo = 29;       
            for(int i = 0; i<30; i++){
                if(i == posicao){
                    for(int j = i; j<=ultimo; j++){
                        troca = vetor[j];
                        vetor[j] = vetor[j+1];
                        vetor[j+1] = troca;
                    }
                    vetor[ultimo] = 0;
                    ultimo -= 1;
                }
            }
        
        }
        
        else if(opcao==4){
        
            printf("\nOpção 4\nElemento: ");
            scanf("%d", &elemento);
            
            int ultimo = 29;
            for(int k = 0; k<30; k++){ 
                if(vetor[k] == elemento){
                    for(int j = k; j<=ultimo; j++){
                       troca = vetor[j];
                       vetor[j] = vetor[j+1];
                       vetor[j+1] = troca;       
                    }
                    vetor[ultimo] = 0;
                    ultimo -= 1;
                }
            }
        }
        
        else if(opcao == 5){
        
            int total = 0;
        
            for(int i = 0; i<30; i++){
                if(vetor[i]!=0)
                    total += 1;
                else
                    break;
            }
        
            int novo[total];
        
            for(int i = 0; i<total; i++)
                novo[i] = vetor[i];
        
            printf("Novo vetor:\n");
        
            for(int i = 0; i<total; i++)
                printf("%d ", novo[i]);
        
        }

        
        printf("\nVetor: \n");
  
        for(int i = 0; i<30; i++)
            printf("%d ", vetor[i]);
  
        printf("\n");
  
    }
    return 0;
}    
