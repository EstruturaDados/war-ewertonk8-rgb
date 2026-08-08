#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam_string 50
#define n_pais 5



struct pais //livro
{
    char nome[tam_string];
    char cor[tam_string];
    int exercito;

};

void limparBuffer(){
    int c;
    while ((c=getchar())!= '\n'&& c!= EOF);    
}

int main(){

    struct pais territorio [n_pais]; //biblioteca
    int totalPais = 0;
    int opcao;  
    

        // exibir menu


        printf("===============================\n");
        printf("VAMOS CADASTRAR OS 5 TERRITORIOS INICIAIS DO NOSSO MUNDO\n");
       
        // cadastrar territorios

       while (totalPais < 5)
       {
        printf("\n== cadastro do territorio %d ==\n", totalPais +1);

        printf("Digite o nome: ");
        fgets(territorio[totalPais].nome, tam_string, stdin);

        printf("Digite a cor (Ex: azul, amarelo...) : ");
        fgets(territorio[totalPais].cor, tam_string, stdin);

        printf("Digite o numero de exercitos: ");
        scanf("%d",&territorio[totalPais].exercito);

       limparBuffer();
        totalPais++;
       }
       
       
       // printar territorios

       printf("\n===============================\n");
       printf("TERRITORIOS CADASTRADOS\n");
       printf("===============================\n");

       for (int i = 0; i < totalPais; i++)
       {
        printf("\n== Territorio %d==\n",i+1);
        printf("-Nome: %s\n",territorio[i].nome);
        printf("-Cor: %s\n",territorio[i].cor);
        printf("-Exercitos: %d\n",territorio[i].exercito);
        printf("---------------------------\n");

       }
       
    return 0;
}