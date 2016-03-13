//1. Implemente* um* programa de* forma* que* receba* números* inteiros* do*
//usuário* indefinidamente.* O* programa* finaliza* quando* o* usuário* entrar*
//com*uma*letra.
//a)*Aloque,*inicialmente,*memória*para*5*inteiros;
//b)* Caso* o* usuário* entrar* com* mais* inteiros,* faça* a* realocação,* alocando*
//espaço*para*mais*5*inteiros*e*assim*sucessivamente;


#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int i = 5, *p;
    int contador = 0;

    p = malloc(i * sizeof(int));

    while(1){
        scanf("%c",&c);
        if (isalpha(c)) break;
        else{
            contador++;
            getchar();
            if(contador == 5){
                printf("\n\nEfetuado o realocacao\n\n");
                realloc(p, i * sizeof(int));
                contador = 0;
            }
        }
    }
    return 0;
}
