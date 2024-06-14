#include <stdio.h>

int main() {
    int idades[3];
    char sexos[3];
    float salarios[3];
    float somaSalarios = 0;
    int maiorIdade = -1, menorIdade = 101;
    int qtdMulheresSalarioAte200 = 0;
    float menorSalario = 1000000;
    int idadeMenorSalario;
    char sexoMenorSalario;

    // Entradas
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a idade da pessoa %d:\n", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite o sexo da pessoa %d (M/F):\n", i + 1);
        scanf(" %c", &sexos[i]);

        printf("Digite o salario da pessoa %d:\n", i + 1);
        scanf("%f", &salarios[i]);

        // Processamento
        somaSalarios += salarios[i];
        if (idades[i] > maiorIdade) maiorIdade = idades[i];
        if (idades[i] < menorIdade) menorIdade = idades[i];
        if (sexos[i] == 'F' && salarios[i] <= 200) qtdMulheresSalarioAte200++;
        if (salarios[i] < menorSalario) {
            menorSalario = salarios[i];
            idadeMenorSalario = idades[i];
            sexoMenorSalario = sexos[i];
        }
    }

    float mediaSalarios = somaSalarios / 3;

    // Sa�das
    printf("A m�dia dos sal�rios do grupo � %.2f\n", mediaSalarios);
    printf("A maior idade do grupo � %d e a menor idade � %d\n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres com sal�rio at� R$ 200,00: %d\n", qtdMulheresSalarioAte200);
    printf("A idade da pessoa com o menor sal�rio � %d e o sexo � %c\n", idadeMenorSalario, sexoMenorSalario);

    return 0;
}
