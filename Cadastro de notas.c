#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int vet_notas[10];
    int i;
    int num;

    printf("Cadastre as notas dos alunos: ");
    for(i = 0; i < 10; i++) scanf("%d", &vet_notas[i]);
    system("cls");

    printf("Qual nota deseja ver (N° do Aluno)?");
    scanf("%d", &num);


    if (num >= 0 && num < 10) printf("%d", vet_notas[num]);
    else printf("Nota nao cadastrada");

    return 0;
}
