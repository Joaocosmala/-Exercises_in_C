// Escreva um programa usando função que recebe 4 notas, calcule a média aritmética e depois informe em tela a média e se o aluno foi ou não aprovado – para aprovação média >= 6.

float calcularMedia(float nota1, float nota2, float nota3, float nota4)
{
    return (nota1 + nota2 + nota3 + nota4) / 4.0;
}

void verificarAprovacao(float media)
{
    if (media >= 6.0)
    {
        printf("Aluno aprovado! Média: %.2f\n", media);
    }
    else
    {
        printf("Aluno reprovado. Média: %.2f\n", media);
    }
}
int main()
{

    float nota1, nota2, nota3, nota4;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    float media = calcularMedia(nota1, nota2, nota3, nota4);

    verificarAprovacao(media);
    return 0;
}