#include<stdio.h>
 
int main() {
    int numero_meteoritos, k = 0;
    int superior_esquerdo[2], inferiordireito[2];
    scanf("%d%d%d%d", &superior_esquerdo[0], &superior_esquerdo[1], &inferiordireito[0], &inferiordireito[1]);
    while (superior_esquerdo[0] != 0 && superior_esquerdo[1] != 0 && inferiordireito[0] != 0 && inferiordireito[1] != 0) {
        scanf("%d", &numero_meteoritos);
        int quantas = 0;
        for (int i = 0; i < numero_meteoritos; i++) {
            int x, y;
            scanf("%d%d", &x, &y);
            if (x >= superior_esquerdo[0] && y <= superior_esquerdo[1] && x <= inferiordireito[0] && y >= inferiordireito[1])
                quantas++;
        }
        printf("Teste %d\n%d\n\n", ++k, quantas);
        scanf("%d%d%d%d", &superior_esquerdo[0], &superior_esquerdo[1], &inferiordireito[0], &inferiordireito[1]);
    }
 
}