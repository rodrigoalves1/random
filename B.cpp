#include <cstdio>
// incluimos o algorithm dessa vez pois utilizamos a função max
#include <algorithm>

/* Algumas funções da biblioteca padrão de C++ (stl) estão em um dado
 * "namespace" (espaço de nome). A função max está naturalmente no
 * namespace "std". Então, para acessá-la, eu faria std::max.
 * Para não precisar fazer isso, utilizamos a sintaxe "using", de forma
 * que entraremos nesse namespace e não precisaremos invocá-lo.
 **/
using namespace std;

int coluna[111];
int main() {
  int n, m;
  // O espaço entre os %d é opcional
  scanf("%d %d", &n, &m);
  for (int j = 0; j < m; j++) {
    coluna[j] = 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int linha = 0;
    for (int j = 0; j < m; j++) {
      int x;
      scanf("%d", &x);
      // tmp += x é igual a fazer tmp = tmp + x
      linha += x;
      coluna[j] += x;
    }
    ans = max(ans, linha);
  }
  for (int j = 0; j < m; j++) {
    ans = max(ans, coluna[j]);
  }
  printf("%d\n", ans);
}