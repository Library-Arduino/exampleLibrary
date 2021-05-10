#ifndef Example_H
#define Example_H

#if ARDUINO > 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#define PI 3.1415

class Example
{
private:
    /* data */
    int _valorPrivado = 100;
    int metPrivado(void);

public:
    String variablePublica = "Hola que tal";
    Example(/* args */);
    ~Example();
    int suma(int valor1, int valor2);
    int resta(int valor1, int valor2);
    int multiplicar(int valor1, int valor2);
    int mostrarValorPrivado(void);
    float mostrarPi(float pi = PI);
};

#endif // !Example_H