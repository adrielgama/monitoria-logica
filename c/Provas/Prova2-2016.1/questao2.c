#include <stdio.h>

int main(){
    int n, p, q, primeiro, segundo, terceiro, num;
    scanf("%d %d %d", &n, &p, &q);
    num = 1;
    primeiro = (p*num) - (q*0);
    segundo = (p*primeiro) - (q*num);
    printf("%d %d %d ", num, primeiro, segundo);
    for(int i = 4; i<=n; i++){
        terceiro = (p*segundo) - (q*primeiro);
        printf("%d ", terceiro);
        primeiro = segundo;
        segundo = terceiro;
    }
    return 0;
}
