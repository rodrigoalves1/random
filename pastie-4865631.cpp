#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int n;
int array_global[10000];
char entrada[10000];

int main (){
	/* Opcional para ler a entrada de um arquivo e escrever a saida em outro.
	 * Util para testes, mas nao esquecer de tirar antes de enviar o codigo, 
	 * pois a leitura/escrita oficial eh pelo console */
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	
	/* Tenta ler 1 inteiro, e termina o while se nao conseguir.
	 * (Por exemplo, acabou a entrada (-1) ou encontrou uma string (0)) */
	while(scanf("%d", &n) == 1){ 
		if(n == 0) break; //muitas questoes terminam com um 0
		scanf("%s", entrada); //le uma string ateh um espaco ou fim da linha
		printf("String lida: %s\n", entrada);
		
		int um, dois, tamanho = strlen(entrada);
		for(int i = 0; i < tamanho; ++i){
			array_global[i] = entrada[i]; //chars sao numeros de 0 a 255
		}
		
		//ordena os primeiros {tamanho} numeros:
		sort(array_global, array_global+tamanho); 
		
		for(int i = 0; i < tamanho; ++i){
			printf("char '%c' tem valor %d\n", array_global[i], array_global[i]);
		}
		
		scanf("%d %d", &um, &dois); //retorna 2 quando le 2 inteiros
		double meio = um+dois;
		meio /= 2;
		printf("(%d+%d)/2 = %lf\n\n", um, dois, meio);
	}
	printf("fim\n");
	return 0;
}

/* Entrada exemplo:
10
abC 4 5
3
0321
03   21
0
*/