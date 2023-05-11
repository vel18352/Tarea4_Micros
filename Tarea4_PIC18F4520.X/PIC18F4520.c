#include <xc.h>

// Configuraciones del PIC
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config PBADEN = OFF
#pragma config MCLRE = OFF

#define _XTAL_FREQ 20000000  // Define la frecuencia del cristal

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
