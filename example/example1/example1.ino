#include <Example.h>

Example example;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Suma = " + String(example.suma(1, 3)));
    Serial.println("Resta = " + String(example.resta(6, 4)));
    Serial.println("Multiplicación = " + String(example.multiplicar(3, 2)));
    Serial.println("Variable publica = " + example.variablePublica);
    Serial.println("Variable privada = " + String(example.mostrarValorPrivado()));
    Serial.println(" Valor de Pi por parámetro = " + String(example.mostrarPi(3.141592), 6));
    Serial.println("Valor de PI = " + String(PI, 6));

    delay(1000);
}