#include <stdio.h>

int main() {
    float nota1[30], nota2[30], media[30];
    float soma = 0, mediaTurma;
    int i;

    // Entrada das notas
    for(i = 0; i < 30; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1[i]);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2[i]);

        // Cálculo da média ponderada
        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5;

        soma += media[i];
        printf("\n");
    }

    // Média da turma
    mediaTurma = soma / 30;

    printf("Media da turma: %.2f\n\n", mediaTurma);

    // Alunos acima da média da turma
    printf("Alunos com media acima da media da turma:\n");

    for(i = 0; i < 30; i++) {
        if(media[i] > mediaTurma) {
            printf("Aluno %d -> Nota1: %.2f | Nota2: %.2f | Media: %.2f\n",
                   i + 1, nota1[i], nota2[i], media[i]);
        }
    }

    return 0;
}