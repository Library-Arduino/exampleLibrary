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
    delay(1000);
}