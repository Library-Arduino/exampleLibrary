#include <Example.h>

Example example;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println(example.suma(1, 3));
    Serial.println(example.resta(6, 4));
    Serial.println(example.multiplicar(3, 2));
    Serial.println(example.variablePublica);
    Serial.println(example.mostrarValorPrivado());
    Serial.println(example.mostrarPi(3.141592), 6);
    Serial.println(PI, 6);

    delay(1000);
}