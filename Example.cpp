#include <Example.h>

Example::~Example()
{
}
Example::Example()
{
}
int Example::suma(int valor1, int valor2){
    return valor1 + valor2;
}

int Example::resta(int valor1, int valor2)
{
    return valor1 - valor2;
}

int Example::multiplicar(int valor1, int valor2)
{
    return valor1 * valor2;
}

int Example::mostrarValorPrivado(void){
    return metPrivado();
}

float Example::mostrarPi(float pi = PI){
    return pi;
}

// métodos privados

int Example::metPrivado(void){
    return this->_valorPrivado;
}