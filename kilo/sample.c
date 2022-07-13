#include <stdio.h>
#include <string.h>
int main(){
char linhalida[5];
char resultado[5];
char minusculas[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','j','p','r','s','t','u','v','w','x','y','z'};
char maiusculas[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
printf("Digite uma sequencia de 4 caracteres:\n");
fgets(linhalida, 5, stdin);
for(int i=0;i<4;i++){
    for(int j=0;j<26;j++){
        if(linhalida[i]==minusculas[j]){
            resultado[i]=minusculas[(i+j+1)%26];
            break;
                                       }
                                       if(linhalida[i]==maiusculas[j]){
                                        resultado[i]=maiusculas[(i+j+1)%26];
                                        break;
                                                                      }
                         }
                     }
                     for (int j=0; j<4; j++){
                        printf("%c", resultado[j]);
                     };

          }