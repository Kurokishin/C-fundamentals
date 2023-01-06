#include <stdio.h>

int main()
{   
    printf("'%%d' imprime números inteiros");
    printf("Nome: Marcos Pietro \nIdade: %d \nGênero: M\n\n", 45);

    printf("'%%f' imprime números flutuantes\n");
    printf("Nome: Marcos Pietro \nIdade: %f \nGênero: M\n\n", 45.1);

    printf("Limitando para somente 1 número após a vírgula\n");
    printf("Nome: Marcos Pietro \nIdade: %.1f \nGênero: M\n", 45.1);
    //printf("  *\n ***\n*****\n");*/
    return 0;
}