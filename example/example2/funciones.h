#include <LiquidCrystal_I2C.h>

void saludo()
{
    Serial.println("Esto es la funcion");
}

void printPantalla(String value, LiquidCrystal_I2C *pantalla)
{
    pantalla->setCursor(0, 2);
    pantalla->print(value);
}