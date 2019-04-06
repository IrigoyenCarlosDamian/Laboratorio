#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include"Binario_Decimal.h"
/**************************************************/
void validar_dato(char cadena[]){
	/**
 * QH : valida que texto ingresado contenga solo numeros entre 0 y 1 , 
 * PRE :--
 * POST : si los caracteres ingresados son distinto de 0 o 1 cambio el vlaro del flag  
 * 
 */
	int bandera=1; // supongo que son solo numeros entre 0 y 1 
	do{
		printf("Teclea el numero binario de 8 bits :  ");
		scanf("%8s",cadena);
		int longitud = strlen(cadena);
		for(int i = 0; i < longitud-1; i++){
			if ((cadena[i]!='0')||(cadena[i]!='1')){// se ingresaron valores distinto a 0 o 1 
			bandera=0;// cambio el valor del flag 
			}
		}	
	}while(bandera==1);// salgo del ciclo cuando los valores estan en el rango  entre 0 y 1 		
}
/**************************************************/
void convertir_numero(char cadena[]){
	int numero_binario[8]; // ARRAY DE NUMEROS ENTEROS 
	int j=-1;// INDICE PARA numbinario
	int i;// INDICE PARA EL ARRAY PASADO POR PARAMETRO 
	int decimal=0; //VARIABLE PARA EL VALOR DECIMAL 
	for(i=7;i>=0;i=i-1){ // RECORRO EL ARRAY ENVIADO POR PARAMETRO Y ANALIZO LAS POSICIONES 
		j++;
		switch(cadena[j])//EFECTUO LA ASIGNACION SOBRE EL ARRAY DE NUMEROS ENTEROS 
		{
			case '0':
				numero_binario[i]=0; 
			break;
			case '1':
				numero_binario[i]=1;
			break;
		}
	  decimal=numero_binario[i]*pow(2,i)+decimal; // EFECTUO LA CONVERSION DEL NUMERO BINARO A DECIMAL  POW(a,b)  efectua la operacion a^b	
	}
	printf("\nEl numero en decimal es %i",decimal);
	getch();
}

/**************************************************/
void Binario_Decimal(){
	char binario[8]={'0','0','0','0','0','0','0','0'}; //ARRAY DE CARACTERS SOBRE EL QUE SE INGRESAN LOS DATOS 
	validar_dato(binario);
	system("PAUSE");
	convertir_numero(binario);//PROCEDO A LA CONVERSION DEL NUMERO A DECIMAL 
}

