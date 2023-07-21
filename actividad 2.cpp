#include <stdio.h>


int main ()
{
  float num1;
    printf("Ingrese un primer numero:\n ");
    scanf("%f", &num1);
  float num2;
    printf("Ingrese un segundo numero:\n ");
    scanf("%f", &num2);

    printf("esta es la suma de los dos numeros: %f \n", num1+num2);
    printf("esta es la resta de los dos numeros: %f \n", num1-num2);
    printf("pero si los quieres multiplicar, te da esto: %f \n", num1*num2);
    printf("ahora que si los quieres dividir el resultado es: %f \n", num1/num2);

}
