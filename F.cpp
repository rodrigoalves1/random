#include <stdio.h>
#include <string.h>
 
int m[9][9];
int n;
int somaLinha[9];
int somaColuna[9];
int somaQuadrado[9];
bool linhaOk = true;



bool testaLinhas(int j){
  int soma = 0;
  for (int i = 0; i < 9; ++i)
  {
    somaLinha[m[j][i]-1]=1;
  }
  for (int i = 0; i < 9; ++i)
  {
    soma += somaLinha[i];
  }
  if(soma == 9)
    return true;
  else 
    return false;
}

bool testaColunas(){
   int soma = 0;
   bool p = true;
    for (int i = 0; i < 9; ++i)
    {
          for (int j = 0; j < 9; ++j)
             somaColuna[m[j][i]-1] = 1;

            for (int i = 0; i < 9; ++i)
            {
               soma +=somaColuna[i];
            }
            if(soma != 9)
               p = false;
             soma=0;
              memset(somaColuna, 0, 9*sizeof(int));
    } 
    return p;
}
bool testeQuadrados(){
  int soma = 0;
  bool p = true;
for (int row = 0; row < 3; ++row) {
    for (int col = 0; col < 3; ++col) {
      memset(somaQuadrado, 0, 9*sizeof(int));
      for (int i = 0; i < 3; ++i) {
        for (int j = 0; j <3; ++j) {
         somaQuadrado[m[i+(col*3)][j+(row*3)]-1] = 1;
         }}
         soma = 0;
          for (int i = 0; i < 9; ++i)
         {
           soma += somaQuadrado[i];
         }
        
           if(soma != 9)
               p = false;

       }}
    return p;

}

int main()
{    
   
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(scanf("%d",&n) != EOF){
    
    for (int i = 0; i < n; ++i)
    {
      linhaOk = true;
        for (int j = 0; j < 9; ++j)
        {
           scanf("%d %d %d %d %d %d %d %d %d",&m[j][0],&m[j][1],&m[j][2],&m[j][3],&m[j][4],&m[j][5],&m[j][6],&m[j][7],&m[j][8]);
            memset(somaLinha, 0, 9*sizeof(int));
           if(testaLinhas(j)==false){
                printf("Instancia %d\n", (i+1));
                printf("NAO\n\n");
                linhaOk = false;

                }
                


        }

        if(linhaOk==true){
            if(!testaColunas()){
                printf("Instancia %d\n", (i+1));
                printf("NAO\n\n");}
            else{
                if(!testeQuadrados()){
                      printf("Instancia %d\n", (i+1));
                    printf("NAO\n\n");}
                else{
                  printf("Instancia %d\n", (i+1));
                  printf("SIM\n\n");
                }
                      
                    }
        }

    }

    }
    return 0;
}