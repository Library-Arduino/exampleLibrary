#include <Example.h>
#include <LiquidCrystal_I2C.h>
#include "funciones.h"

LiquidCrystal_I2C lcd(0x27, 3, POSITIVE);
Example example(&lcd);

void setup()
{
    Serial.begin(9600);
    lcd.begin(20, 4);
    lcd.print("Hello World");
}

void loop()
{
    Serial.println("Valor de PI = " + String(example.mostrarPi()));
    example.delayp(1000);
    Serial.println("Suma es igual = " + String(example.suma(1, 4)));
    example.mostrarMensaje("Hola mundo", 1000);
    saludo();
    printPantalla("Principal", &lcd);
}