#include <stdio.h>
#include <stdlib.h>

int pedirnumero(int n1);
int suma(int n1, int n2);
int resta(int n1, int n2);
int multiplicacion(int n1, int n2);
float division(float n1, float n2);

int main()
{
    int num1, num2, result;
    float resultf;
    char opc;
    num1 = pedirnumero(num1);
    num2 = pedirnumero(num2);

    menu();
    fflush(stdin);
    scanf("%c", &opc);

    switch(opc)
    {
    case '+':
        result=suma(num1, num2);
        printf("%i", result);
        break;

    case '-':
        result=resta(num1, num2);
        printf("%i", result);
        break;

    case '*':
        result=multiplicacion(num1, num2);
        printf("%i", result);
        break;

    case '/':
        resultf=division((float)num1, (float)num2);
        printf("%.2f", resultf);
        break;

    default:
        printf("\nOpcion incorrecta");
        break;


    }

    return 0;
}

void menu()
{
    printf("\n=========================");
    printf("\n=Elija tipo de operacion=");
    printf("\n=========================");
    printf("\nSuma: '+'");
    printf("\nResta: '-'");
    printf("\nMultiplicacion: '*'");
    printf("\nDivision: '/'\n\n");
}

int suma(int n1, int n2)
{
    int suma = n1 + n2;
    return suma;
}

int resta(int n1, int n2)
{
    int resta = n1 - n2;
    return resta;
}

int multiplicacion(int n1, int n2)
{
    int multiplicacion = n1 * n2;
    return multiplicacion;
}

float division(float n1, float n2)
{
    if(n1 != 0 && n2 != 0)
    {
        float division = n1 / n2;
        return division;
    }
    else
    {
        printf("\nLos valores no pueden ser 0!\n");
        return 0;
    }

}

int pedirnumero(int n1)
{
    printf("\nIngrese un numero entero: \n");
    scanf("%d", &n1);
    return n1;
}
