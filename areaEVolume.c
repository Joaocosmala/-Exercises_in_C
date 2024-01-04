// Escreva um programa usando funções que permita ao usuário escolher calcular a área ou o volume de um cubo, depois permitir ao usuário inserir as informações necessárias e no final imprimir o resultado em tela.

float calcularArea(float lado)
{
    return 6 * lado * lado;
}

float calcularVolume(float lado)
{
    return lado * lado * lado;
}
int main()
{
    int escolha;
    float lado;

    printf("Escolha:\n");
    printf("1 - Calcular a área do cubo\n");
    printf("2 - Calcular o volume do cubo\n");
    scanf("%d", &escolha);

    printf("Digite o valor do lado do cubo: ");
    scanf("%f", &lado);

    if (escolha == 1)
    {
        float area = calcularArea(lado);
        printf("A área do cubo é: %.2f\n", area);
    }
    else if (escolha == 2)
    {
        float volume = calcularVolume(lado);
        printf("O volume do cubo é: %.2f\n", volume);
    }
    else
    {
        printf("Escolha inválida\n");
    }
    return 0;
}