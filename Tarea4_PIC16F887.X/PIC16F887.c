
//******************************************************************************
// PIC16F887 Configuration Bit Settings
// 'C' source line config statements
//******************************************************************************

// CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT
#pragma config WDTE = OFF       
#pragma config PWRTE = OFF      
#pragma config MCLRE = OFF      
#pragma config CP = OFF         
#pragma config CPD = OFF        
#pragma config BOREN = OFF      
#pragma config IESO = OFF       
#pragma config FCMEN = OFF      
#pragma config LVP = OFF        
// CONFIG2
#pragma config BOR4V = BOR40V   
#pragma config WRT = OFF        
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

//******************************************************************************
// Includes
//******************************************************************************
#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>    //Se incluyen las librerias necesarias

//******************************************************************************
// Definiciones
//******************************************************************************
#define _XTAL_FREQ 4000000  //Se establece el oscilador a 4.0Mhz
         
#define LED_ROJO RB0    // LED rojo conectado al pin RB0
#define LED_AMARILLO RB1 // LED amarillo conectado al pin RB1
#define LED_VERDE RB2   // LED verde conectado al pin RB2

void main(void) {
    TRISB = 0; // Configura todos los pines del PORTB como salida
    PORTB = 0; // Inicialmente todos los LEDs estan apagados
    
    while(1) {
        LED_ROJO = 1; // Enciende el LED rojo
        __delay_ms(5000); // Espera 5 segundos
        LED_ROJO = 0; // Apaga el LED rojo
        
        LED_AMARILLO = 1; // Enciende el LED amarillo
        __delay_ms(2000); // Espera 2 segundos
        LED_AMARILLO = 0; // Apaga el LED amarillo
        
        LED_VERDE = 1; // Enciende el LED verde
        __delay_ms(5000); // Espera 5 segundos
        LED_VERDE = 0; // Apaga el LED verde
    }
}
