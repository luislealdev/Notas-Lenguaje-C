//Impresión en pantalla en C

#include <stdio.h>

int main()
{
    printf("Aquí escribes lo que quieras escribir");

  //tipos de datos de una variable:

    //entero = int = %d
    //flotantes = decimales (números más grandes) = float = %f
    //double = decimales (números más pequeños) = doble = %f
    //char = caracteres = char = %c

//Declaración de variables en C ( Tipo de dato + nombre de la variable [ asignación valor ] )

//Ejemplos (valor estático):

int edad = 15;
float pi = 3.1416;
double cambio = .75;
char car = "Luis Leal";

//Impresión de variable en C
//Printf("tipo de dato entre comillas", variable a imprimir )

printf("\nEl valor de tu variable entera es %d", edad);

printf(",El valor de tu variable flotante es %f", pi);

printf("\nEl valor de tu variable double es %f", cambio);

printf("\nEl valor de tu variable char es %c", car);

//Poner espacios entre texto (enter)

\n
printf("\ny aquí seguido va el texto");

//Leer variable ingresada por el usuario

scanf("tipo de dato de la variable", nombre de la variable);

//Ejemplos

scanf("%d", &edad)

//Ejemplo leer variable e imprimirla

printf("Ingresa el valor para edad");
scanf("%d", &edad)
printf("Tu edad es %d", edad)

//NUEVO COMANDO: If/Else

//Estructura:

if (condición)
{
  //instrucciones a ejecutar
}
else if {
  //instrucciones a ejecutar sino cumple la condición
}

//Ejemplo
int edad;
printf("Ingresa tu edad");
scanf("%d",&edad );

printf("Tu edad es: %d", edad);
if (edad>=18)
{
  printf("\nPuedes tramitar tu INE");
}
else {
  printf("\nNo puedes tramitar tu INE");
}

//EN CASO DE HABER MÁS DE DOS POSIBLES SOLUCIONES, ESRIBIR "Else if" LAS VECES QUE SEAN NECESARIAS. SINO SOLO ESCRIBIR "Else"
    return 0;
}
//ACTIVIDAD 7

//variables
    int entero;
    float decimallargo;
    double decimalcorto;
    char carac;


    printf("\nEscribe un caracter");
    printf("\n");
    scanf("%c", &carac);
    printf("El caracter que escribiste es %c", carac);

     printf("\n");

    printf("\nEscribe un decimal corto");
    printf("\n");
    scanf("%f", &decimalcorto);
    printf("El decimal corto que escribiste es %f", decimalcorto);

    printf("\n");

    printf("Escribe un entero");
    printf("\n");
    scanf("%d", &entero);
    printf("El entero que escribiste es %d", entero);

    printf("\n");

    printf("\nEscribe un decimal largo");
    printf("\n");
    scanf("%f", &decimallargo);
    printf("El decimal largo que escribiste es %f", decimallargo);

//ACTIVIDAD 8 EJERCICIO 1
//variables
    //int n1;
    float n1;
    float n2;

    printf("\nIngresa dos números desde teclado.");

    printf("\nIngresa n1: ");
    scanf("%f", &n1);

    printf("\nIngresa n2: ");
    scanf("%f", &n2);

    float suma;
    float resta;
    float division;
    float multiplicacion;

    suma=n1+n2;
    resta=n1-n2;
    division=n1/n2;
    multiplicacion=n1*n2;

    printf("Suma = %f", suma);
     printf("\n");
      printf("Resta = %f", resta);
       printf("\n");
        printf("División = %f", division);
         printf("\n");
          printf("Multiplicación = %f", multiplicacion);

//ACTIVIDAD 8 EJERCICIO 2
          //Variables
              float celcius;

          printf("Ingresa los grados Celcius a convertir a Farenheit");
          printf("\n");
          scanf("%f", &celcius);
              float Farenheit;
          Farenheit= celcius*1.8+32;
          printf("%f", celcius);
          printf(" son iguales a %f", Farenheit);

          //ACTIVIDAD 8 EJERCICIO 3
              //Variables
                  int peso;
                  float altura;
                  float imc;

                  printf("Ingresa tu peso en kg" "\n");
                  scanf("%d", &peso);
                  printf("Ingresa tu altura""\n");
                  scanf("%f", &altura);
                  imc = peso/altura;
                  printf("El indice de masa corporal es %f", imc);


//ACTIVIDAD 9 EJERCICIO 1
    //Variables
    int n1, n2, n3;
    printf("Escribe tres números");
    printf("\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    printf("\n");
    if (n1>n2,n3)
    {
    printf("\nEl número mayor es %d", n1);
    }
    else if (n2>n1,n3) {
    printf("\nEl número mayor es %d", n2);
    }
    else if (n3>n2,n1) {
    printf("\nEl número mayoe es %d", n3);
    }

//ACTIVIDAD 9 EJERCICIO 2
//Variables
    float n1;
    float cuadrado;

    printf("Ingresa un número: \n");
    scanf("%f", &n1);

    //Condición

    if(n1 <= 0)
    {
        printf("ERROR");
    }
    else{
        cuadrado = n1*n1;
        printf("\nEl número que ingresaste es: %f", n1);
        printf (" su cuadrado es: %f", cuadrado);
    }

    //ACTIVIDAD 9 EJERCICIO 3

    //Variables
    int peso;
    float altura;
    float imc;
    printf("Ingresa tu peso en kg" "\n");
    scanf("%d", &peso);
    printf("Ingresa tu altura""\n");
    scanf("%f", &altura);
    imc = peso/altura;
    if (imc<18.5) {
        printf("DESNUTRICIÓN: Tu indice de masa corporal es %f", imc);
    }
    else if (imc>=18.5 <=24.9) {
        printf("PESO NORMAL: Tu indice de masa corporal es %f", imc);
    }
    else if (imc>=25){
        printf("SOBREPESO: Tu indice de masa corporal es %f", imc);
    }

//ACTIVIDAD 10 EJERCICIO 1
//VARIABLES
char caracter;
char r;
char v;
char a;
int main()
{
printf("Ingresa una de las letras que se mostrarán a continuación");
printf("\n");
printf("r");
printf("\n");
printf("v");
printf("\n");
printf("a");
printf("\n");
scanf("%c",&caracter);

char carcater;
switch (caracter){
case 'r':
printf ("Rojo");
break;

case 'v':
printf("Verde");
break;

case 'a':
printf("Azul");
break;

default:
printf ("Error");
break;

}

//ACTIVIDAD 10 EJERCICIO 2
float num1;
    float num2;
    int n;
    printf("Escribe dos números \n");
    scanf("%f" , &num1);
    scanf("%f" , &num2);

    printf("Escribe el número de la operación que quieres realizar del listado siguiente:");
    printf("\n a1.Suma");
     printf("\n a2.Resta");
      printf("\n a3.Multiplicación");
       printf("\n a4.División");
        printf("\n a5.Módulo");
    scanf("%d",&n);

float a1 =num1+num2;
float a2 =num1-num2;
float a3 =num1*num2;
float a4 =num1/num2;

switch (n){
case 1:
printf ("La suma de los números es %f" , a1);
break;

case 2:
printf("La resta de los números es %f" , a2);
break;

case 3:
printf("La multiplicación de los números %f" , a3);
break;

case 4:
printf("La división de los números es %f" , a4);
break;

default:
printf ("Error");
break;
}}


//ACTIVIDAD 10 EJERCICIO 3
//Variables
    int num;
    printf("Escribe elnúmero del nombre de la lista de compañeros que se mostrarán a continuación:");
    printf("\n a1.Gustavo");
    printf("\n a2.Braulio");
    printf("\n a3.Luis");
    printf("\n a4.Pichardo");
    printf("\n a5.Rafael");
    printf("\n");
    scanf("%d", &num);

    switch(num){
        case 1:
        printf("Edgar Gustavo Gómez Macías \n Cumpleaños: 20 diciembre \n Deporte favorito: fútbol \n Va a estudiar: Nanotecnología");
        break;

        case 2:
         printf("Braulio Enrique Ayala Vargas \n Cumpleaños: 6 mayo \n Deporte favorito: fútbol \n Va a estudiar: Diseño digital");
        break;
        case 3:
         printf("Luis Rubén Rusiles Leal \n Cumpleaños: 4 noviembre \n Deporte favorito: fútbol \n Va a estudiar: Ingeniería en sistemas");
        break;
        case 4:
         printf("Brayan Pichardo Montes \n Cumpleaños: 18 noviembre \n Deporte favorito: boxeo \n Va a estudiar: Ingeniería mecánica");
        break;
        case 5:
         printf("Rafael Sebastián Ugarte Banda \n Cumpleaños: 12 agosto \n Deporte favorito: fútbol \n Va a estudiar: Ingeniería civil");
        break;
        default:
         printf("ERROR");
        break;
    }

    //EJERCICIO INE

    int edad;
printf("Ingresa tu edad");
scanf("%d",&edad );

printf("Tu edad es: %d", edad);
if (edad>=18)
{
  printf("Puedes tramitar tu INE");
}
else {
  printf("\nNo puedes tramitar tu INE");
}
