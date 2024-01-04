// Escreva um programa usando função que calcule uma equação do segundo grau completa.

float calcularDiscriminante(float a, float b, float c)
{
    return b * b - 4 * a * c;
}

void calcularRaizes(float a, float b, float c)
{
    float discriminante = calcularDiscriminante(a, b, c);
    if (discriminante > 0)
    {
        float raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        float raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Duas raízes reais: %.2f e %.2f\n", raiz1, raiz2);
    }
    else if (discriminante == 0)
    {
        float raiz = -b / (2 * a);
        printf("Uma raiz real: %.2f\n", raiz);
    }
    else
    {
        printf("Não existem raízes reais\n");
    }
}
int main()
{
    float a, b, c;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    calcularRaizes(a, b, c);
    return 0;
}