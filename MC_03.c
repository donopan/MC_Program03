#include <16f877.h>
#fuses HS,NOPROTECT,
#use delay(clock=20000000)
#org 0x1F00, 0x1FFF void loader16F877(void){}

void main(){
	while(1){
		TRISA.F0 = 1; //Configuramos bit0 del puerto A como entrada
		TRISA.F1 = 1; //Configuramos bit1 del puerto A como entrada
		TRISA.F2 = 1;
		TRISA.F3 = 1;
		TRISA.F5 = 1;

		if (PORTA.F0 == 0){
			swapHex();
		}
		else if(PORTA.F1 == 0){
			parpDer();
		}
		else if(PORTA.F2 == 0){
			parpIzq();
		}
		else if(PORTA.F3 == 0){
			incremento();
		}
		else if(PORTA.F5 == 0){
			decremento();
		}

	}
}