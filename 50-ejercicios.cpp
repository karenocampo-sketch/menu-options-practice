#include <iostream>

using namespace std;

int main() {
    int opc;

    // Mostrar el menú de opciones
    cout << "Menu de opciones:" << endl;
    for (int i = 1; i <= 50; i++) {
        cout << i << ". Opcion ejercicio " << i <<endl;
    }

    // Solicitar al usuario que seleccione una opción
    cout << "Seleccione una opción (1-50): ";
    cin >> opc;

    // Ejecutar la opción seleccionada
    switch (opc) {
        case 1:
            cout << "Ejecutando opcion 1 " << endl;
            cout << "Ejercicio rua que lea si el numero es mayor o igual a cero " << endl;

            int num;
            
            cout<<"Ingrese un numero"<<endl;
            cin>>num;
            
            if (num > 0 )
            {
                cout<<"mayor a 0"<<endl;
            }
            if (num < 0){
                cout<<" es menor que 0"<<endl;
            }else if(num <= 0){
                cout<<" es mayor o igual  a 0"<<endl;
            }
            return 0;
            break;
            //fin ejercicio 1
        case 2:
            cout << "Ejecutando opcion 2" << endl;
            cout << "Rua que lea un numero e imprima si es par o impar " << endl;

            int number;
    
            cout<<"Ingrese un. numero: ";
            cin >>number;
            
            if (number % 2 == 0 ){
                cout <<"El numero"<< number << " es par." << endl; 
            }else{
                cout<<"El numero" << num << "es impar. "<<endl;
            }

            break;
            //fin ejercicio 2
        case 3:
            cout << "Ejecutando opcion 3" << endl;
            cout << "Rua que lea un número de 100 a -2" << endl;

             for (int i = 100; i >= -2; i--) {
                cout << i << endl;
            }

            break;
            //fin ejercicio 3
        case 4:
            cout << "Ejecutando opcion 4" << endl;
            cout << "Imprime  los números pares de 1 al 100 " << endl;

            for (int i = 2; i <= 100; i += 2) {
                cout << i << endl;
            }

            break;
            //fin ejercicio 4
        case 5:
            cout << "Ejecutando opcion 5" << endl;
            cout << " RUA que permita calcular el promedio de notas (notas finaliza cuando el usuario registre una nota = 0). " << endl;

            int suma = 0, contador = 0, nota;

            cout << "Ingrese las notas (finaliza con 0):" << endl;
            cin >> nota;
            while (nota != 0) {
                suma += nota;
                contador++;
                cin >> nota;
            }

            if (contador > 0) {
                cout << "El promedio de las notas es: " << suma / contador << endl;
            } else {
                cout << "No se ingresaron notas." << endl;
            }

            break;
            //fin ejercicio 5
        case 6:
            cout << "Ejecutando opcion 6" << endl;
            cout << "Imprimir y contar los múltiplos de 2 y de 3 que hay de 1 a 100." << endl;

            int contadorMultiplos2 = 0;
            int contadorMultiplos3 = 0;

            for (int i = 1; i <= 100; i++) {
                if (i % 2 == 0) {
                    contadorMultiplos2++;
                }
                if (i % 3 == 0) {
                    contadorMultiplos3++;
                }
            }

            cout<<"Imprimir y contar los múltiplos de 2 y de 3 que hay de 1 a 100."<<endl;
            cout << "Total de múltiplos de 2: " << contadorMultiplos2 << endl;
            cout << "Total de múltiplos de 3: " << contadorMultiplos3 << endl;
            break;
            //fin ejercicio 6
        case 7:
            cout << "Ejecutando opcion 7" << endl;
            cout << "Rua que determina cuál de dos números es mayor" << endl;

            int numero1, numero2;

            cout << "Ingrese el primer número: ";
            cin >> numero1;

            cout << "Ingrese el segundo número: ";
            cin >> numero2;

            if (numero1 > numero2) {
                cout << "El número " << numero1 << " es mayor que " << numero2 << "." << endl;
            } else if (numero2 > numero1) {
                cout << "El número " << numero2 << " es mayor que " << numero1 << "." << endl;
            }
            break;
            //fin ejercicio 7
        case 8:
            cout << "Ejecutando opcion 8" << endl;
            cout << "Determinar cuál de los dos números es menor" << endl;

            int numero_1, numero_2;

            cout << "Ingrese el primer número: ";
            cin >> numero_1;

            cout << "Ingrese el segundo número: ";
            cin >> numero_2;

            if (numero1 < numero_2) {
                cout << "El número " << numero1 << " es menor que " << numero_2 << "." << endl;
            } else if (numero_2 < numero_1) {
                cout << "El número " << numero_2 << " es menor que " << numero_1 << "." << endl;
            }
            break;
            //fin ejercicio 8
        case 9:
            cout << "Ejecutando opcion 9" << endl;
            cout << " Sumar los numeros del 20 al 50 " << endl;

            int numero__1 = 20;
            int numero__2 = 50;
            int totalSuma;

            for (int i = numero__1; i <= numero__2; i++) { 
                totalSuma += i; 
            }
            cout << "La suma de los números del " << numero__1 << " al " << numero__2 << " es: " << totalSuma << endl;
            break;
            //fin ejercicio 9
        case 10:
            cout << "Ejecutando opcion 10" << endl;
            cout << "Suma 15 numeros cualquiera y que sume el resultado" << endl;

                int total_Suma,numero;
                for (int i = 1; i <= 15; i++) {
                    cout << "Ingrese el número " << i << ": ";
                    cin >> numero;
                    total_Suma += numero;
                }
                cout << "La suma de los 15 números es: " << total_Suma << endl;
            break;
            //fin ejercicio 10
        case 11:
            cout << "Ejecutando opcion 11" << endl;
            cout << "RUA que lea la fecha de nacimiento de una persona y segun eso diga se es mayor de edad" << endl;

            int dia, mes, aa; //"aa" se refiere a año 
            const int mayoriaEdad = 18;

            cout << "Ingrese la fecha de nacimiento de la siguiente forma >> dia mes año <<: "<<endl;
            cin >> dia >> mes >> aa;

            int aaActual;
            cout << "Ingrese el año actual: ";
            cin >> aaActual;

            int edad = aaActual - aa;

            if (edad >= mayoriaEdad) {
                cout << "Es mayor de edad " << endl;
            } else {
                cout << "Es menor de edad " << endl;
            }
            break;
            //fin ejercicio 11
        case 12:
            cout << "Ejecutando opcion 12" << endl;
            cout << " RUA que lea 3 números y lo ordene de mayor a menor" << endl;

            int num1, num2, num3;

            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
            cout << "Ingrese el tercer número: ";
            cin >> num3;

            if (num1 >= num2 && num1 >= num3) {
                if (num2 >= num3) {
                    cout << "Orden mayor a menor: " << num1 << num2 << num3 << endl;
                } else {
                    cout << "Orden mayor a menor: " << num1 << num3 << num2 << endl;
                }
            } else if (num2 >= num1 && num2 >= num3) {
                if (num1 >= num3) {
                    cout << "Orden mayor a menor: " << num2 <<num1 << num3 << endl;
                } else {
                    cout << "Orden mayor a menor: " << num2 << num3 << num1 << endl;
                }
            } else {
                if (num1 >= num2) {
                    cout << "Orden mayor a menor: " << num3 << num1 << num2 << endl;
                } else {
                    cout << "Orden mayor a menor: " << num3 << num2 << num1 << endl;
                }
            }
            break;
            //fin ejercicio 12
        case 13:
            cout << "Ejecutando opcion 13" << endl;
            cout << "RUA que lea 3 números y lo ordene de menor a mayor" << endl;

            int num_uno, num_dos, num_tres;

            cout << "Ingrese el primer número: ";
            cin >> num_uno;
            cout << "Ingrese el segundo número: ";
            cin >> num_dos;
            cout << "Ingrese el tercer número: ";
            cin >> num_tres;


            if (num_uno <= num_dos && num_uno <= num_tres) {
                if (num_dos <= num_tres) {
                    cout << "Menor a mayor: " << num_uno << num_dos << num_tres << endl;
                } else {
                    cout << "Menor a mayor: " << num_uno << num_tres << num_dos << endl;
                }
            } else if (num_dos <= num_uno && num_dos <= num_tres) {
                if (num_uno <= num_tres) {
                    cout << "Menor a mayor: " << num_dos <<num_uno << num_tres << endl;
                } else {
                    cout << "Menor a mayor: " << num_dos << num_tres << num_uno << endl;
                }
            } else {
                if (num_uno <= num_dos) {
                    cout << "Menor a mayor: " << num_tres << num_uno << num_dos << endl;
                } else {
                    cout << "Menor a mayor: " << num_tres << num_dos << num_uno << endl;
                }
            }
            break;
            //fin ejercicio 13
        case 14:
            cout << "Ejecutando opcion 14" << endl;
            cout << " RUA que permita determinar el área y el volumen de un cilindro dado su radio (R) y su altura (H)" << endl;

               float radioR, altura, areaBase, volumenC;
                const float pi_H = 3.1416;

                
                cout << "Ingrese el radio (R) del cilindro: ";
                cin >> radioR;
                cout << "Ingrese la altura (H) del cilindro: ";
                cin >> altura;

                areaBase = pi_H * radioR * radioR;
                volumenC = areaBase * altura;

                cout << "El área de la base del cilindro es: " << areaBase << endl;
                cout << "El volumen del cilindro es: " << volumenC << endl;
            break;
            //fin ejercicio 14
        case 15:
            cout << "Ejecutando opcion 15" << endl;
            cout << "RUA que lea la velocidad de un vehículo expresado en Km por hora y proporcione la velocidad en metros por segundos." << endl;

                float velocidadKmH, velocidadMS;
                const float conversion = 0.277778; //  Un 1km por hora es igual a 0.277778 metros por segundo

                cout << "Ingrese la velocidad del vehiculo en Km/h: ";
                cin >> velocidadKmH;

                velocidadMS = velocidadKmH * conversion;

                cout << "La velocidad del vehiculo es: " << velocidadMS << " m/s" << endl;
            break;
            //fin ejercicio 15
        case 16:
            cout << "Ejecutando opcion 16" << endl;
            cout << "RUA que imprima cuantos números impares hay del 1 al 100" << endl;

            int contadorImpares;
            for (int i = 1; i <= 100; i++) {
                if (i % 2 != 0) {
                    contadorImpares++;
                }
            }

            cout << "Existen " << contadorImpares << " numeros impares del 1 al 100." << endl;
            break;
            //fin ejercicio 16
        case 17:
            cout << "Ejecutando opcion 17" << endl;
            cout << "RUA que muestre la suma de los números impares del 1 al 100." << endl;

                int sumaImpar;
                for (int i = 1; i <= 100; i++) {
                    if (i % 2 != 0) {
                        sumaImpar += i;
                    }
                }

                cout << "Resultado de la suma de los numeros impares del 1 al 100 : " <<sumaImpar << endl;
            break;
            //fin ejercicio 17
        case 18:
            cout << "Ejecutando opcion 18" << endl;
            cout << "RUA que muestre la suma de los números pares del 1 al 100." << endl;

            int sumaPar;

            for (int i = 1; i <= 100; i++) {
                if (i % 2 == 0) {
                    sumaPar += i;
                }
            }
            cout << "Resultado de la suma de los numeros pares del 1 al 100 : " <<sumaPar << endl;
            break;
            //fin ejercicio 18
        case 19:
            cout << "Ejecutando opcion 19" << endl;
            cout << "RUA que imprima el mayor y el menor de una serie de 5 números ingresados por teclado" << endl;

                int numeros, mayor, menor;

                cout << "Ingrese el primer número: ";
                cin >> numeros;
                mayor = menor; 
                menor = numero;

                for (int i = 1; i < 5; i++) {
                    cout << "Ingrese numero: ";
                    cin >> numeros;
                    
                    if (numeros > mayor) {
                        mayor = numeros;
                    }
                    if (numeros < menor) {
                        menor = numeros;
                    }
                }

                cout << "El mayor es: " << mayor << endl;
                cout << "El menor es: " << menor << endl;
            break;
            //fin ejercicio 19
        case 20:
            cout << "Ejecutando opcion 20" << endl;
            cout << "RUA que calcule el factorial de un numero" << endl;

                int numero_test;
                unsigned long long factorial = 1; //se inicializa asi porque el factorial es un numero muy grande.

                cout << "Ingrese un numero entero: ";
                cin >> numero_test;

                for (int i = 2; i <= numero_test; i++) {
                    factorial *= i;
                }

                cout << "Factorial de " << numero_test<< " es: " << factorial << endl;
            break;
            //fin ejercicio 20
        case 21:
            cout << "Ejecutando opcion 21" << endl;
            cout << "RUA que lea un número del 1 al 10 y diga cuál es su número en romano." << endl;

            int numerom;

            cout << "Ingrese un numero del 1 al 10: ";
            cin >> numerom;

            if (numerom < 1 || numerom > 10) {
                cout << "Numero fuera de rango." << endl;
            } else {
                switch (numerom) {
                    case 1:
                        cout << "El numero en numeros romanos es: I" << endl;
                        break;
                    case 2:
                        cout << "El numero en numeros romanos es: II" << endl;
                        break;
                    case 3:
                        cout << "El numero en numeros romanos es: III" << endl;
                        break;
                    case 4:
                        cout << "El numero en numeros romanos es: IV" << endl;
                        break;
                    case 5:
                        cout << "El numero en numeros romanos es: V" << endl;
                        break;
                    case 6:
                        cout << "El numero en numeros romanos es: VI" << endl;
                        break;
                    case 7:
                        cout << "El numero en numeros romanos es: VII" << endl;
                        break;
                    case 8:
                        cout << "El numero en numeros romanos es: VIII" << endl;
                        break;
                    case 9:
                        cout << "El numero en numeros romanos es: IX" << endl;
                        break;
                    case 10:
                        cout << "El numero en numeros romanos es: X" << endl;
                        break;
                }
            }
            break;
            //fin ejercicio 21
        case 22:
            cout << "Ejecutando opcion 22" << endl;
            cout << "RUA que obtenga la última cifra de un número introducido." << endl;

            int numeroA,ultimoNum;

            cout << "Ingrese un numero entero: ";
            cin >> numeroA;
            
            ultimoNum = numeroA % 10;

            cout << "Ultima cifra de " << numeroA << " es: " << ultimoNum << endl;
            break;
            //fin ejercicio 22
        case 23:
            cout << "Ejecutando opcion 23" << endl;
            cout << "RUA que tras leer una medida expresada en centímetros la convierta en pulgadas 1 pulgada=2.54 cm." << endl;

                float medidaCm, medidaPulg;
                const float conversion_medida = 2.54;

                cout<< "Ingrese una medida en centimetros: ";
                cin>> medidaCm;

                medidaPulg = medidaCm / conversion_medida;

                cout<< "la medida de "<< medidaCm<<"cm equivalen a " << medidaPulg << " pulgadas." << endl;
            break;
            //fin ejercicio 23
        case 24:
            cout << "Ejecutando opcion 24" << endl;
            cout << " RUA que exprese las horas, minutos y segundos un tiempo expresado en minutos." << endl;

                int tiempoMinutos, horas, minutos, segundos;

                cout << "Ingrese tiempo en minutos: ";
                cin >> tiempoMinutos;


                horas = tiempoMinutos / 60; 
                minutos = tiempoMinutos % 60;
                segundos = (tiempoMinutos - horas * 60 - minutos) * 60;

                cout << tiempoMinutos << " minutos son " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
            break;
            //fin ejercicio 24
        case 25:
            cout << "Ejecutando opcion 25" << endl;
            cout << "RUA que dado un número del 1 al 12 muestre en pantalla en mes correspondiente del año." << endl;

            int numeroMes;

            cout << "Ingrese un numero del 1 al 12: ";
            cin >> numeroMes;

            switch (numeroMes) {
                case 1:
                    cout << "Enero" << endl;
                    break;
                case 2:
                    cout << "Febrero" << endl;
                    break;
                case 3:
                    cout << "Marzo" << endl;
                    break;
                case 4:
                    cout << "Abril" << endl;
                    break;
                case 5:
                    cout << "Mayo" << endl;
                    break;
                case 6:
                    cout << "Junio" << endl;
                    break;
                case 7:
                    cout << "Julio" << endl;
                    break;
                case 8:
                    cout << "Agosto" << endl;
                    break;
                case 9:
                    cout << "Septiembre" << endl;
                    break;
                case 10:
                    cout << "Octubre" << endl;
                    break;
                case 11:
                    cout << "Noviembre" << endl;
                    break;
                case 12:
                    cout << "Diciembre" << endl;
                    break;
                default:
                    cout << "Numero fuera de rango." << endl;
                    break;
            }
            break;
            //fin ejercicio 25
        case 26:
            cout << "Ejecutando opcion 26" << endl;
            cout << "RUA que dado el mes, el día muestre el signo del zodiacal." << endl;

            int mes_signo, dia_signo;

            cout << "Ingrese el numero del mes (1-12): ";
            cin >> mes_signo;
            cout << "Ingrese el dia del mes: ";
            cin >> dia_signo;

            if (mes_signo >= 1 && mes_signo <= 12 && dia_signo >= 1 && dia_signo <= 31) {
                switch (mes_signo) {
                    case 1: // Enero
                        if (dia_signo >= 20) {
                            cout << "Acuario" << endl;
                        } else {
                            cout << "Capricornio" << endl;
                        }
                        break;
                    case 2: // Febrero
                        if (dia_signo >= 19) {
                            cout << "Piscis" << endl;
                        } else {
                            cout << "Acuario" << endl;
                        }
                        break;
                    case 3: // Marzo
                        if (dia_signo >= 21) {
                            cout << "Aries" << endl;
                        } else {
                            cout << "Piscis" << endl;
                        }
                        break;
                    case 4: // Abril
                        if (dia_signo >= 20) {
                            cout << "Tauro" << endl;
                        } else {
                            cout << "Aries" << endl;
                        }
                        break;
                    case 5: // Mayo
                        if (dia_signo >= 21) {
                            cout << "Geminis" << endl;
                        } else {
                            cout << "Tauro" << endl;
                        }
                        break;
                    case 6: // Junio
                        if (dia_signo >= 21) {
                            cout << "Cancer" << endl;
                        } else {
                            cout << "Geminis" << endl;
                        }
                        break;
                    case 7: // Julio
                        if (dia_signo >= 23) {
                            cout << "Leo" << endl;
                        } else {
                            cout << "Cancer" << endl;
                        }
                        break;
                    case 8: // Agosto
                        if (dia_signo >= 23) {
                            cout << "Virgo" << endl;
                        } else {
                            cout << "Leo" << endl;
                        }
                        break;
                    case 9: // Septiembre
                        if (dia_signo >= 23) {
                            cout << "Libra" << endl;
                        } else {
                            cout << "Virgo" << endl;
                        }
                        break;
                    case 10: // Octubre
                        if (dia_signo >= 23) {
                            cout << "Escorpio" << endl;
                        } else {
                            cout << "Libra" << endl;
                        }
                        break;
                    case 11: // Noviembre
                        if (dia_signo >= 22) {
                            cout << "Sagitario" << endl;
                        } else {
                            cout << "Escorpio" << endl;
                        }
                        break;
                    case 12: // Diciembre
                        if (dia_signo >= 22) {
                            cout << "Capricornio" << endl;
                        } else {
                            cout << "Sagitario" << endl;
                        }
                        break;
                }
            } else {
                cout << "Mes o dia fuera de rango." << endl;
            }
            break;
            //fin ejercicio 26
        case 27:
            cout << "Ejecutando opcion 27" << endl;
            cout << "RUA que calcule los números que hay desde 1 hasta un número introducido por teclado." << endl;

            int numero_B;
            cout << "Ingrese un numero entero positivo: ";
            cin >> numero_B;

            if (numero_B <= 0) {
                cout << "El numero debe ser positivo." << endl;
            } else {
                cout << "Los numeros desde 1 hasta " << numero_B << " son: ";
                for (int i = 1; i <= numero_B; i++) {
                    cout << i << " ";
                }
                cout << endl;
            }
            break;
            //fin ejercicio 27
        case 28:
            cout << "Ejecutando opcion 28" << endl;
            cout << "RUA que calcule los números que hay desde 1 hasta un número introducido por teclado." << endl;

            int numero_F, sumas;

            cout << "Ingrese un numero entero positivo: ";
            cin >> numero_F;

            if (numero_F <= 0) {
                cout << "El numero debe ser positivo." << endl;
            } else {
                for (int i = 1; i <= numero_F; i++) {
                    sumas += i;
                }
                cout << "La suma de los numeros desde 1 hasta " << numero_F << " es: " << sumas << endl;
            }
            break;
            //fin ejercicio 28
        case 29:
            cout << "Ejecutando opcion 29" << endl;
            cout << "RUA que calcule el residuo de la división de 1 hasta 10 de un numero dado." << endl;

            int numeroT;

            cout << "Ingrese un numero entero: ";
            cin >> numeroT;
            for (int divisor = 1; divisor <= 10; divisor++) {
                cout << "Residuo de " << numeroT << " dividido por " << divisor << ": " << (numeroT % divisor) << endl;
            }
            break;
            //fin ejercicio 29
        case 30:
            cout << "Ejecutando opcion 30" << endl;
            cout << "RUA que calcule el perímetro y área de un círculo dado su radio." << endl;

            float radioRR, perimetro;
            const float ppi = 3.1416; // Definir pi como constante

            cout << "Por favor, ingrese el radio del círculo para calcular su perímetro: ";
            cin >> radioRR;

            perimetro = 2 * ppi * radioRR;
            cout << "El perímetro del círculo es " << perimetro << endl;
            break;
            //fin ejercicio 30
        case 31:
            cout << "Ejecutando opcion 31" << endl;
            cout << "Calcular el volumen de una esfera dado su radio." << endl;

            float radioE, volumenV;
            const float PI_V = 3.1416;

            cout << "Ingrese el radio de la esfera: ";
            cin >> radioE;

            volumenV = (4.0 / 3.0) * PI_V * radioE * radioE * radioE;

            cout << "El volumen de la esfera es: " << volumenV << endl;
            break;
            //fin ejercicio 31
        case 32:
            cout << "Ejecutando opcion 32" << endl;
            cout << "Dados los catetos de un triángulo rectángulo, calcular su hipotenusa." << endl;

            float cateto1, cateto2, hipotenu, aprox, mejorAprox, sumaCuadrados;
            const float tolerancia = 0.00001; 

            cout << "Ingrese el primer cateto: ";
            cin >> cateto1;
            cout << "Ingrese el segundo cateto: ";
            cin >> cateto2;

            sumaCuadrados = (cateto1 * cateto1) + (cateto2 * cateto2);

            //método Newton-Raphson para la raiz 
            aprox  = sumaCuadrados / 2.0;
            do {
                mejorAprox = aprox;
                aprox = (mejorAprox + (sumaCuadrados / mejorAprox)) / 2.0;
            } while ((mejorAprox - aprox) > tolerancia || (aprox - mejorAprox) > tolerancia);

            hipotenu = aprox;

            cout << "La hipotenusa del triángulo es: " << hipotenu << endl;
            break;
            //fin ejercicio 32
        case 33:
            cout << "Ejecutando opcion 33" << endl;
            cout << " Escribir un programa que convierta un valor dado en grados Fahrenheit a grados Celsius. Recordar que la fórmula para la conversión es: F = 9/5C + 32" << endl;

            float fahrenheit, celsius;

            cout << "Ingrese la temperatura en grados Fahrenheit: ";
            cin >> fahrenheit;
            
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            
            cout << "La temperatura en grados Celsius es: " << celsius << endl;
            break;
            //fin ejercicio 33
        case 34:
            cout << "Ejecutando opcion 34" << endl;
            cout << "  Escribir un programa que convierta un valor dado en grados Celsius a grados Fahrenheit. Recordar que la fórmula para la conversión es" << endl;

            float celsius, fahrenheit;

            cout << "Ingrese la temperatura en grados Celsius: ";
            cin >> celsius;

            // conversion con las formula fórmula: F = (C * 9/5) + 32
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
            break;
            //fin ejercicio 34
        case 35:
            cout << "Ejecutando opcion 35" << endl;
            cout << "RUA que lea 3 notas donde la primera nota equivale al 30%, la segunda al 30% y la tercera al 40% la nota va de (1 a 5)y calcule la nota final o definitiva." << endl;

            float nota1, nota2, nota3;
            float definitiva;

            cout << "Ingrese la primera nota (equivale al 30%): ";
            cin >> nota1;
            cout << "Ingrese la segunda nota (equivale al 30%): ";
            cin >> nota2;
            cout << "Ingrese la tercera nota (equivale al 40%): ";
            cin >> nota3;

            definitiva = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);

            cout << "La nota final es: " << definitiva << endl;
            break;
            //fin ejercicio 35
        case 36:
            cout << "Ejecutando opcion 36" << endl;
            cout << "RUA que lea 4 notas donde la primera nota equivale al 20%, la segunda al 20%, la tercera al 10% y la cuarta al 50%, la nota va de (1 a 5) y calcule la nota final o definitiva." << endl;

             float n1, n2, n3, n4, definitiva;
            do {
                cout << "Ingrese la primera nota de 1 a 5 [ vale el 20%]: ";
                cin >> n1;
            } while (n1 < 1 || n1 > 5);

            do {
                cout << "Ingrese la segunda nota de 1 a 5 [ vale el 20% ] : ";
                cin >> n2;
            } while (n2 < 1 || n2 > 5);

            do {
                cout << "Ingrese la tercera nota de 1 a 5 [ vale el 10% ]: ";
                cin >> n3;
            } while (n3 < 1 || n3 > 5);

            do {
                cout << "Ingrese la cuarta nota de 1 a 5 [ vale el  50% ]: ";
                cin >> n4;
            } while (n4 < 1 || n4 > 5);

            definitiva = (n1 * 0.20) + (n2 * 0.20) + (n3 * 0.10) + (n4 * 0.50);

            cout << "La nota definitiva es: " << definitiva << endl;
            break;
            //fin ejercicio 36
        case 37:
            cout << "Ejecutando opcion 37" << endl;
            cout << "Evaluar la función y=5/3x + 3/2x + 8 cuando x–> -5…20 (rango de -5 hasta 20)" << endl;

            float y;
            for (int x = -5; x <= 20; x++) {
                y = (5.0 / 3) * x + (3.0 / 2) * x + 8;
                cout << "x = " << x << ", y = " << y << endl;
            }
            break;
            //fin ejercicio 37
        case 38:
            cout << "Ejecutando opcion 38" << endl;
            cout << " Leer 3 edades, e imprimirlas junto con el promedio" << endl;

            int edad1, edad2, edad3;
            float promedio;

            // Leer las tres edades
            cout << "Ingrese edad uno: ";
            cin >> edad1;

            cout << "Ingrese edad dos: ";
            cin >> edad2;

            cout << "Ingrese edad tres: ";
            cin >> edad3;

            promedio = (edad1 + edad2 + edad3) / 3.0;

            cout << "Edad 1: " << edad1 << endl;
            cout << "Edad 2: " << edad2 << endl;
            cout << "Edad 3: " << edad3 << endl;
            cout << "Promedio edades: " << promedio << endl;
            break;
            //fin ejercicio 38
        case 39:
            cout << "Ejecutando opcion 39" << endl;
            cout << " RUA que lea 10 números e imprima solamente los positivos." << endl;

            int num;
            int conteoNum = 0;
            cout << "Ingrese 10 numeros:" << endl;
            for (int i = 0; i < 10; i++) {
                cin >> num;
                if (num > 0) {
                    cout << "Numero positivo: " << num << endl;
                    conteoNum++;
                } else {
                    cout << "El numero " << num << " no es positivo." << endl;
                    cout<<"ingrese un numero positivo: "<<endl;
                }
            }
            cout << "Total numeros positivos: " << conteoNum << endl;
            break;
            //fin ejercicio 39
        case 40:
            cout << "Ejecutando opcion 40" << endl;
            cout << "En una galería se pregunta 10 visitantes de los colores luz primarios (rojo, verde, azul) les gusta más. Elabore un algoritmo que evalúe en porcentaje el gusto del público." << endl;

            char opcColor; //var switch
            int rojo = 0;
            int verde = 0;
            int azul = 0;
            int totalVisi = 10; 
            float porcenRojo, porcenjeVerde,porcenjeAzul;

            for (int i = 0; i < totalVisi; i++) {
                cout << "¿Cuál es tu color favorito? (R para rojo, V para verde, A para azul): ";
                cin >> opcColor;

                switch (opcColor) {
                    case 'R':
                    case 'r':
                        rojo++;
                        break;
                    case 'V':
                    case 'v':
                        verde++;
                        break;
                    case 'A':
                    case 'a':
                        azul++;
                        break;
                    default:
                        cout << "Opción inválida, se considerará neutro." << endl;
                        break;
                }
            }

            porcenRojo = (rojo * 100.0) /totalVisi;
            porcenjeVerde = (verde * 100.0) / totalVisi;
            porcenjeAzul = (azul * 100.0) / totalVisi;

            cout << "Porcentaje de gusto por el rojo: " << porcenRojo<< "%" << endl;
            cout << "Porcentaje de gusto por el color verde: " << porcenjeVerde << "%" << endl;
            cout << "Porcentaje de gusto por el color azul: " << porcenjeAzul << "%" << endl;
            break;
            //fin ejercicio 40
        case 41:
            cout << "Ejecutando opcion 41" << endl;
            cout << "Se tiene un grupo de N personas, para cada una de las cuales se ha elaborado una tarjeta de registro indicando el sexo y los puntos obtenidos en un examen. Se desea conocer con base en los promedios de los puntos obtenidos, cual sexo tuvo mejor desempeño." << endl;

            int totalPersonas;
            int puntosMujeres = 0;
            int puntosHombres = 0;
            float promMujeres, promHombres;

            cout << "Ingrese el número de personas: ";
            cin >> totalPersonas;

            if (totalPersonas <= 0) {
                cout << "El número de personas debe ser mayor que cero." << endl;
            }

            for (int i = 0; i < totalPersonas; i++) {
                char sexo;
                int puntos;

                cout << "Ingrese el sexo [ M para mujer, H para hombre ]: ";
                cin >> sexo;

                cout << "Ingrese puntos obtenidos: ";
                cin >> puntos;

                if (sexo == 'M' || sexo == 'm') {
                    puntosMujeres += puntos;
                } else if (sexo == 'H' || sexo == 'h') {
                    puntosHombres += puntos;
                } else {
                    cout << "Sexo no reconocido. Se omitirá esta persona." << endl;
                }
            }

            promMujeres = puntosMujeres / float(totalPersonas);
            promHombres = puntosHombres / float(totalPersonas);

            if (promMujeres > promHombres) {
                cout << "Promedio mejor desempeño en mujeres:  " << promMujeres << " puntos." << endl;
            } else if (promHombres > promMujeres) {
                cout << "Promedio mejor desempeño en hombres: " << promHombres << " puntos." << endl;
            } else {
                cout << "Ambos sexos tuvieron el mismo desempeño con promedio de:  " << promMujeres << " puntos." << endl;
            }
            break;
            //fin ejercicio 41
        case 42:
            cout << "Ejecutando opcion 42" << endl;
            cout <<  "En un determinado peaje se desea saber cuántos carros particulares y cuántos buses pasaron en un día, lo mismo que el promedio de personas que viajan en carro particular y el promedio de personas que viajan en bus, Se debe tener en cuenta que por cada vehículo que pase, se debe indagar por el tipo de vehículo que es y el número de pasajeros que transporta." << endl;

            int totalCarros = 0;
            int totalBuses = 0;
            int totalOtros = 0;
            int totalPasajerosCarros = 0;
            int totalPasajerosBuses = 0;
            int totalPasajerosOtros = 0;
            int tipoVehiculo, numPasajeros;

            while (true) {
                cout << "---- Ingrese la opción según el tipo de vehículo ----" << endl;
                cout << "Opción 1: Carro particular" << endl;
                cout << "Opción 2: Bus" << endl;
                cout << "Opción 3: Otro vehículo" << endl;
                cout << "Opción 0 para mostrar resultados [ resumen del día ]" << endl;

                cin >> tipoVehiculo;

                if (tipoVehiculo == 0) {
                    break;
                }

                cout << "Ingrese el número de pasajeros: ";
                cin >> numPasajeros;

                if (tipoVehiculo == 1) {  // Carro particular
                    totalCarros++;
                    totalPasajerosCarros += numPasajeros;
                } else if (tipoVehiculo == 2) {  // Bus
                    totalBuses++;
                    totalPasajerosBuses += numPasajeros;
                } else if (tipoVehiculo == 3) {  // Otro
                    totalOtros++;
                    totalPasajerosOtros += numPasajeros;
                } else {
                    cout << "Tipo de vehículo no válido. Por favor, ingrese 1, 2 o 3." << endl;
                }
            }

            float promedioCarros = totalCarros != 0 ? totalPasajerosCarros / float(totalCarros) : 0;
            float promedioBuses = totalBuses != 0 ? totalPasajerosBuses / float(totalBuses) : 0;
            float promedioOtros = totalOtros != 0 ? totalPasajerosOtros / float(totalOtros) : 0;

            cout << "---- Resumen del día ----" << endl;
            cout << "Total de carros: " << totalCarros << endl;
            cout << "Total de buses: " << totalBuses << endl;
            cout << "Total de otros vehículos: " << totalOtros << endl;
            cout << "---- Total de pasajeros ----" << endl;
            cout << "Total de pasajeros en carros: " << totalPasajerosCarros << endl;
            cout << "Total de pasajeros en buses: " << totalPasajerosBuses << endl;
            cout << "Total de pasajeros en otros vehículos: " << totalPasajerosOtros << endl;
            cout << "---- Promedio de pasajeros en vehículos ----" << endl;
            cout << "Promedio de pasajeros en carros: " << promedioCarros << endl;
            cout << "Promedio de pasajeros en buses: " << promedioBuses << endl;
            cout << "Promedio de pasajeros en otros vehículos: " << promedioOtros << endl;
            break;
            //fin ejercicio 42
        case 43:
            cout << "Ejecutando opcion 43" << endl;
            cout << "Calcular el máximo común divisor de 2 números naturales, distintos de 0." << endl;

            int numeroUno, numeroDos, mcd;

            cout << "Ingrese el primer número R [ diferente de 0 ]: ";
            cin >> numeroUno;
            cout << "Ingrese el segundo número R [ diferente de 0 ]: ";
            cin >> numeroDos;

            if (numeroUno == 0 || numeroDos == 0) {
                cout << "Los números deben ser distintos de cero." << endl;
                return 1;
            }
            while (numeroDos != 0) {
                int temp = numeroDos;
                numeroDos = numeroUno % numeroDos;
                numeroUno = temp;
            }
            mcd = numeroUno;

            cout << "El máximo común divisor (MCD) de " << numeroUno << " y " << numeroDos << " es: " << mcd << endl;
            break;
            //fin ejercicio 43
        case 44:
            cout << "Ejecutando opcion 44" << endl;
            cout << "RUA que convierta un valor dado en pesos a dólares" << endl;

            double pesos, dolar, pesosDolar,dolarPesos;
            tasaCambioA = 4000;
            
            cout << "Convierte de pesos colombianos  a dolares o de dolar a pesos colombianos"<< endl;
            cout<<"Deje este campo en 0 si no quiere hacer la conversión aqui  "<<endl;
            
            cout<<"Ingrese el valor en dolar que quiera convertir a pesos: ";
            cin >> pesos; 
            
            cout<<"Deje este campo en 0 si no quiere hacer la conversión aqui "<<endl;
            
            cout<<"Ingrese el valor en pesos que quiera convertir a dolar: ";
            cin >> dolar;
            
            pesosDolar = pesos * tasaCambioA;
            dolarPesos = dolar / tasaCambioA;
            
            if ( pesos != 0 && dolar == 0 ) {
                cout << "De peso a dolar es:  "<< pesosDolar << " dolares" <<endl;
            } else  if ( dolar != 0 && pesos == 0 ) {
                cout << "De dolar a peso es: "<< dolarPesos << " pesos" <<endl;
            } else{
                cout <<"Conversion no valida. Ingrese pesos o dolar";
            }
            break;
            //fin ejercicio 44
        case 45:
            cout << "Ejecutando opcion 45" << endl;
            cout << "RUA que convierta un valor dado en dólares a pesos" << endl;

                float dolares, pesos;
                float tasaDeCambio = 20.0; // Supongamos que 1 dólar = 20 pesos

                cout << "Ingrese la cantidad en dólares: ";
                cin >> dolares;

                pesos = dolares * tasaDeCambio;

                cout << dolares << " dólares son " << pesos << " pesos." << endl;


            break;
            //fin ejercicio 45
        case 46:
            cout << "Ejecutando opcion 46" << endl;
            cout << "RUA que calcule un valor dado en euros a dólares" << endl;
            float tasaCambioD = 0.85;  // 1 dólar por cada 0.85 euros
            float valorEuros, valorDolares;

            cout << "Ingrese el valor en euros: ";
            cin >> valorEuros;
            valorDolares = valorEuros / tasaCambiB;

            cout << "El valor en dólares es: $" << valorDolares << endl;
            break;
            //fin ejercicio 46
        case 47:
            cout << "Ejecutando opcion 47" << endl;
            cout << "RUA que calcule un valor dado en dólares a euros." << endl;

            double dolares, euros, tasaCambioB;
                
            cout << "Ingrese la tasa de cambio actual (dólares por euro): ";
            cin >> tasaCambioB;

            cout << "Ingrese el valor en dólares a convertir a euros: ";
            cin >> dolares;

            if (tasaCambioB <= 0) {
                cout << "La tasa de cambio debe ser un número positivo." << endl;
                return 1;
            }

            euros = dolares * tasaCambioB;
            cout << "El valor en euros es: " << euros << " euros" << endl;
            break;
            //fin ejercicio 47
        case 48:
            cout << "Ejecutando opcion 48" << endl;
            cout << "RUA que lea dos deportes y muestre los implementos utilizados en cada deporte " << endl;

            char deporte1[50], deporte2[50];
            char implementosDeporte1[100], implementosDeporte2[100];

            cout << "Ingrese el nombre del primer deporte: ";
            cin >> deporte1;

            cout << "Ingrese los implementos utilizados en " << deporte1 << ": ";
            cin >> implementosDeporte1;

            cout << "Ingrese el nombre del segundo deporte: ";
            cin >> deporte2;

            cout << "Ingrese los implementos utilizados en " << deporte2 << ": ";
            cin >> implementosDeporte2;

            cout << "Implementos en " << deporte1 << ": " << implementosDeporte1 << endl;
            cout << "Implementos en " << deporte2 << ": " << implementosDeporte2 << endl;
            break;
            //fin ejercicio 48
        case 49:
            cout << "Ejecutando opcion 49" << endl;
            cout << "RUA que lea un valor dado en libras y convertirlos a kilogramos ." << endl;

            double libras, kilogramos;
            
            cout << "Ingrese el valor en libras que desea convertir a kilogramos: ";
            cin >> libras;

            // 1 libra = 0.453592 kilogramos
            kilogramos = libras * 0.453592;

            cout << libras << " libras son equivalentes a " << kilogramos << " kilogramos." << endl;
            break;
            //fin ejercicio 49
        case 50:
            cout << "Ejecutando opcion 50" << endl;
            cout << "Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora trabajada depende de su categoría:categoría pago x hora" << endl;

            int horasTrabajadas;
            int categoria;
            double pagoPorHora;
            double sueldoMensual;

            cout << "Ingrese la cantidad de horas trabajadas en el mes: ";
            cin >> horasTrabajadas;

            cout << "[ categoria 1: 26.90 ] , [ categoria 2: 24.30 ] , [ categoria: 21.50 ]";
            cout << "Ingrese la categoría del empleado (1, 2 o 3): ";
            cin >> categoria;

            if (categoria == 1) {
                pagoPorHora = 26.90;
            } else if (categoria == 2) {
                pagoPorHora = 24.30;
            } else if (categoria == 3) {
                pagoPorHora = 21.50;
            } else {
                cout << "Categoría inválida. Por favor, ingrese 1, 2 o 3." << endl;
                return 1;
            }

            sueldoMensual = pagoPorHora * horasTrabajadas;

            cout << "El sueldo mensual del empleado es: $" << sueldoMensual << endl;
    
            break;
            //fin ejercicio 50
        default:
            cout << "Opción inválida. Por favor seleccione una opción entre 1 y 50." << endl;
            break;
    }

    return 0;
}
