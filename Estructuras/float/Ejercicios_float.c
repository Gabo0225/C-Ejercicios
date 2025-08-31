#include <stdio.h>
#include <math.h> // se usaa para el punto 5

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//Punto 1 

void punto1() {
    float area, radio;
    
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = M_PI * radio * radio;

    printf("El area del circulo con radio '%.2f' es: %.2f \n", radio, area);

}

//Punto 2

void punto2(){
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%f °C equivalen a %.2f °F\n", celsius, fahrenheit);
}

//Punto 3 

void punto3(){
    float num1, num2, num3, promedio;

    printf("Ingrese tres números (puede ser decimal): \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    promedio = (num1 + num2 + num3) / 3;

    printf("El promedio de los numeros ingresados %.2f, %.2f y %.2f es: %.2f\n", num1, num2, num3, promedio);
}

//Punto 4

void punto4(){
    float num1, num2;

    printf("Ingrese dos numeros decimales: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("%.2f es mayor que %.2f\n", num1, num2);
    } else if (num2 > num1) {
        printf("%.2f es mayor que %.2f\n", num2, num1);
    } else {
        printf("Ambos números son iguales: %.2f\n", num1);
    }

}

//Punto 5

void punto5(){
    float numero, raiz;

    printf("Ingrese un numero: ");
    scanf("%f", &numero);

    if (numero < 0) {
        printf("El numero ingresado no se puede calcular raiz cuadrada");    
    } else {
        raiz = sqrt(numero);
        printf("La raiz cuadrada de '%.2f' es '%.2f' \n", numero, raiz);
    }
}

int main (){

    //punto1();
    //punto2();
    //punto3();
    //punto4();
    punto5();

    /* 
    Para ejecuar el punto 5
    Primero ejecuta esto en la terminal
    cd /workspaces/C-Ejercicios/Estructuras/float

    Seundo ejecuat esto en la terminal
    gcc Ejercicios_float.c -o Ejercicios_float -lm

    Tercero ejecuat esto en la terminal
    ./Ejercicios_float 
    */

    return 0;
}