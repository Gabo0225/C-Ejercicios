#include <stdio.h>
#include <math.h> //se necesita en el punto 5
//Punto 1

void punto1 (int cantnum) {
    double pi = 0.0;
    int n;

    for (n = 0; n < cantnum; n++) {
        if (n % 2 == 0) {
            pi += 1.0 / (2 * n + 1);
        } else {
            pi -= 1.0 / (2 * n + 1);
        }
    }

    pi *= 4.0;
    printf("El valor de PI con %d numeros es %.10f\n", cantnum, pi);

}

//Punto 2 

void punto2() {
    double num1, num2, suma;
    
    printf("Ingrese un numero decimal: ");
    scanf("%lf", &num1);

    printf("Ingrese otro numero decimal: ");
    scanf("%lf", &num2);

    suma = num1 + num2;

    printf("La suma de los numeros '%.4f' y '%.4f' es: %.4f", num1, num2, suma);
}

//Punto 3

void punto3() {
    double num1, num2, num3, num4, num5, promedio;

    printf("Ingresa 5 numeros: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);
    scanf("%lf", &num4);
    scanf("%lf", &num5);

    promedio = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("El promedio de los numeros '%.2f', '%.2f', '%.2f', '%.2f', '%.2f' es: %.4f", num1, num2, num3, num4, num5, promedio);
}

//Punto 4

void punto4(){
    double num;

    printf("Inresa un numero (puede ser decimal, positivo o negativo): ");
    scanf("%lf", &num);

    if (num == 0) {
        printf("El numero ingresado es 0 \n");
    } else if (num > 0) {
        printf("El numero ingresado es positivo \n");
    } else {
        printf("El numero ingresado es negativo \n");
    }
}

//Punto 5

void punto5(){
    double num, exponente, resultado;

    printf("Ingresa un numero (puede ser decimal): ");
    scanf("%lf", &num);

    printf("Ingresa el exponenete (puede ser decimal): ");
    scanf("%lf", &exponente);

    //codigo para usar exponentes (no sirve para decimales)
    /*if (exponente > 0) {
        for (int i = 0; i < exponente; i++)
        resultado *= num;
    } else if (exponente < 0) {
        for (int i = 0; i < -exponente; i++){
            resultado *= num;
        }
        resultado = 1.0 / resultado;
    } else {
        resultado = 1.0;
    }*/

    resultado = pow(num, exponente);

    printf("El resultado de elevar a la potencia '%.3f' el numero '%.3f' es: %.5f \n", exponente, num, resultado);
}



int main(){

    //Quiar los // del punto a ejecuar

    //punto1(1000);
    //punto2();
    //punto3();
    //punto4();
    //punto5(); 

    /* 
    Para ejecuar el punto 5
    Primero ejecuta esto en la terminal
    cd /workspaces/C-Ejercicios/Estructuras/double

    Seundo ejecuat esto en la terminal
    gcc Ejercicios_double.c -o Ejercicios_double -lm

    Tercero ejecuat esto en la terminal
    ./Ejercicios_double 
    */

    return 0;
}

