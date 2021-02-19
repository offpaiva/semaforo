/*
 * File:   newsemaforo.c
 * Author: 20185206
 *
 * Created on 19 de Fevereiro de 2021, 15:09
 */


#include <xc.h>

#define VERDE           PORTDbits.RD5
#define AMARELO         PORTDbits.RD6
#define VERMELHO        PORTDbits.RD7
#define VERDEPED        PORTDbits.RD3
#define VERMELHOPED     PORTDbits.RD2
#define BOTAOPED        PORTDbits.RD1
 //inicializaçao

void newsemaforo_init (void)

{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD1 = 1;
            
    VERDE = 0;
    AMARELO = 0;
    VERMELHO = 0 ;
    
}
 void verde(int x)  
 {
     VERDE = x;
 }

 void amarelo (int x)
 {
     AMARELO = x;
 }
 
 void vermelho(int x)
 {
     VERMELHO = x;
 }
 
 void verdePed(int x)
 {
     VERDEPED = x;
 } 
 void vermelhoPed(int x)
 {
     VERMELHOPED = x;
 }
 
int botaoPedestre ( void )
{
    return (BOTAOPED);
}