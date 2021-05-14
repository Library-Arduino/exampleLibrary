/**
 * @file Example.h
 * @author your Jairo (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-14
 * @description 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef Example_H
#define Example_H

#if ARDUINO > 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include <Timep.h>
#include <LiquidCrystal_I2C.h>

#define PI 3.1415

class Example : public Timep
{
private:
    /* data */
    LiquidCrystal_I2C *lcd;
    int _valorPrivado = 100;
    int metPrivado(void);

public:
    String variablePublica = "Hola que tal";
    /**
     * @brief Construct a new Example object
     * 
     * @param pantalla objeto de lcd
     */
    Example(LiquidCrystal_I2C *pantalla);
    ~Example();
    int suma(int valor1, int valor2);
    int resta(int valor1, int valor2);
    /**
     * @brief 
     * 
     * @param valor1 
     * @param valor2 
     * @return int 
     */
    int multiplicar(int valor1, int valor2);
    int mostrarValorPrivado(void);
    float mostrarPi(float pi = PI);
    /**
     * @brief 
     * 
     * @param args 
     * @param ms 
     */
    void mostrarMensaje(String args, unsigned long ms);
};

#endif // !Example_H