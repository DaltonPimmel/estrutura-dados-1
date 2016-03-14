
#include <stdio.h>
#include <stdlib.h>

#define VETOR 3
#define VETOR1 4

int *uniao(int *v, int n, int *v1, int n1){

    int i = 0;

    for(i = 0; i < VETOR; i++){
        printf("%d\n\n", &v[i]);
    }
    for(i = 0; i < VETOR1; i++){
        printf("%d\n\n", &v1[i]);
    }

    return i;

}



int main(){

    int *v, *v1, *v2;
    int n, n1;

    int vetor[3], vetor1[4];
    int i = 0;
    for(i = 0; i < VETOR; i++){
        vetor[i] = rand()%100;
       // printf("%d\n", vetor[i]);
    }
    for(i = 0; i < VETOR1; i++){
        vetor1[i] = rand()%100;
      //  printf("%d\n", vetor[i]);
    }

    v = vetor[0];
    v1 = vetor1[0];

    v2 = uniao(v, &n, v1, &n1);

    return 0;
}
