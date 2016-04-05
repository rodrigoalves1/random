#include <cstdio>

int main() {

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

  int n, x, ans = 0;

  while(scanf("%d%d", &n, &x) != EOF){
    if(n==0)
        break;
        for (int i = 1; i <= n; ++i) {
            if (x % i == 0 && x / i <= n) {
                ++ans;
             }
        }
  printf("%d\n", ans);
  ans = 0;
  
}
  return 0;
}