#include <Example.h>

Example::Example(LiquidCrystal_I2C *pantalla)
{
    lcd = pantalla;
}
Example::~Example()
{
}
int Example::suma(int valor1, int valor2)
{
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

int Example::mostrarValorPrivado(void)
{
    return metPrivado();
}

float Example::mostrarPi(float pi = PI)
{
    return pi;
}

void Example::mostrarMensaje(String args, unsigned long ms)
{
    Serial.print(args + " ");
    this->delayp(ms);
    Serial.println(args);
    lcd->setCursor(0, 1);
    lcd->print(args);
}

// métodos privados

int Example::metPrivado(void)
{
    return this->_valorPrivado;
}