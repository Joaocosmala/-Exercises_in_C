// Escreva um programa usando função que pergunte ao usuário quantas notas ele que digitar e depois calcule a soma das notas e a média aritmética;

void calcularSomaEMedia(int quantidadeNotas)
{

    float nota, soma = 0;

    for (int i = 1; i <= quantidadeNotas; ++i)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    float media = soma / quantidadeNotas;

    printf("Soma das notas: %.2f\n", soma);
    printf("Média das notas: %.2f\n", media);
}
int main()
{

    int quantidadeNotas;

    printf("Quantas notas você deseja digitar? ");
    scanf("%d", &quantidadeNotas);

    calcularSomaEMedia(quantidadeNotas);
    return 0;
}