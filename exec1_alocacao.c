//1. Implemente* um* programa de* forma* que* receba* n�meros* inteiros* do*
//usu�rio* indefinidamente.* O* programa* finaliza* quando* o* usu�rio* entrar*
//com*uma*letra.
//a)*Aloque,*inicialmente,*mem�ria*para*5*inteiros;
//b)* Caso* o* usu�rio* entrar* com* mais* inteiros,* fa�a* a* realoca��o,* alocando*
//espa�o*para*mais*5*inteiros*e*assim*sucessivamente;


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
