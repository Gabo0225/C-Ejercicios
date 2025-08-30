#include <stdio.h>
#include <ctype.h> //se usa en el punto 2 y 3 

// Punto 1

void punto1() { 
    char caracter;
    printf("Punto 1\n");
    printf("Introduce un caracter:"); 
    scanf(" %c", &caracter);
    printf("El carácter es: %c y su código ASCII es: %d\n", caracter, caracter); 
}

// Punto 2

void punto2() {
    char letra;
    printf("Punto 2\n");
    printf("Introduce una letra: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e'|| letra == 'i' || letra == 'o' || letra == 'u') {
        printf("la letra '%c' es una vocal.\n", letra);
    }
    else if ((letra >= 'a' && letra <= 'z')) {
        printf("la letra '%c' es una consonante.\n", letra);
    }
    else {
        printf("El caracter ingresasdo: '%c', no es una letra, posiblemente sea un caracter.\n", letra);
    }
}

void punto3() {
    char let;
    printf("Punto3 \n");
    printf("Ingrese una letra(en minuscula): ");
    scanf(" %c", &let);
    
    let = toupper(let);

    printf("La letra en mayuscula es: '%c' \n", let);
}

void punto4() {
    printf("punto4 \n");
    char palabra[20];
    char letra;
    int contar = 0;

    printf("Ingrese una palabra: \n");
    scanf(" %s", &palabra);
    printf("Ingrese la letra que quiere contar de la palabra ingresada: \n");
    scanf(" %c", &letra);

    for (int i = 0; palabra[i] != '\0'; i++){
        if (palabra [i] == letra) {
            contar++;
        }
    }

    if (contar > 0) {
        printf("la letra '%c' aparece %d veces en la palabra %s \n", letra, contar, palabra);
    } else {
        printf("La letra '%c' no aparece en la palabra \"%s\" \n", letra, palabra);
    }

}

void punto5(){
    char num;
    printf("punto 5 \n");
    printf("ingrese un numero: ");
    scanf(" %c", &num);

    if (isdigit(num)) {
        printf ("EL caracter '%c' es un numero \n", num);
    } else {
        printf ("El caracter '%c' no es un numero \n", num);
    }
}

int main() {

    //Quitar los // del punto a ejecutar

    //punto1();
    //punto2();
    //punto3();
    //punto4();
    //punto5();
    return 0;
}