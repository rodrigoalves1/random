#include <stdio.h>
#include <string.h>
int main()
{
        int n, i, j, k, t = 1, soma, row, col;
        int m[9][9];
        int v[9];
   
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
        while (scanf("%d", &n) != EOF)
        {
                for (; n > 0; --n)
                {
                        for (i = 0; i < 9; ++i) 
                                scanf("%d %d %d %d %d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4], &m[i][5], &m[i][6], &m[i][7], &m[i][8]);
                        
                        
                        for (i = 0; i < 9; ++i)
                        {
                                memset(v, 0, 9*sizeof(int));

                                for (j = 0; j < 9; ++j)
                                        v[m[i][j]-1] = 1;

                                soma = 0;
                                for (j = 0; j < 9; ++j)
                                        soma += v[j];

                                if (soma != 9) 
                                {
                                        printf("Instancia %d\nNAO\n\n", t++);
                                        goto fim;
                                }
                        }

                       
                        for (i = 0; i < 9; ++i)
                        {
                                memset(v, 0, 9*sizeof(int));

                                for (j = 0; j < 9; ++j)
                                        v[m[j][i]-1] = 1;

                                soma = 0;
                                for (j = 0; j < 9; ++j)
                                        soma += v[j];

                                if (soma != 9)
                                {
                                        printf("Instancia %d\nNAO\n\n", t++);
                                        goto fim;
                                }
                        }

                        for (row = 0; row < 3; ++row)
                                for (col = 0; col < 3; ++col)
                                {
                                memset(v, 0, 9*sizeof(int));
                                        for (j = 0; j < 3; ++j)
                                        {
                                                for (k = 0; k < 3; ++k)
                                                {
                                                        v[m[j+(col*3)][k+(row*3)]-1] = 1;
                                                }
                                        }

                                        soma = 0;
                                        for (k = 0; k < 9; ++k)
                                        {
                                                soma += v[k];
                                        }
                                        
                                        if (soma != 9)
                                        {
                                                printf("Instancia %d\nNAO\n\n", t++);
                                                goto fim;
                                        }
                                }

                        printf("Instancia %d\nSIM\n\n", t++);
                        fim:;
                }

        }

        return 0;
}