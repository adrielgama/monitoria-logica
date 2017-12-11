#include <stdio.h>

int main(){
    int sala[10];
    int total = 1, troca;
    for(int i = 0; i<10; i++)
        scanf(" %d", &sala[i]);

    for(int i = 9; i>=0; i--){
        for(int j = 0; j<=i; j++){
            if(sala[j] > sala[j+1]){
                troca = sala[j];
                sala[j] = sala[j+1];
                sala[j+1] = troca;
            }
        }
    }

    for(int i = 1; i<10; i++){
        if(sala[i] != sala[i-1])
            total += 1;
    }

    int alunos[total];

    alunos[0] = sala[0];
    int cont = 0;
    for(int i = 0; i<10; i++){
        if(alunos[cont] != sala[i]){
            cont += 1;
            alunos[cont] = sala[i];
        }
    }

    printf("%d alunos\n", total);
    for(int i = 0; i<total; i++)
        printf("%d - %d\n", (i+1), alunos[i]);
    return 0;
}


