#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 40
#define MAXLINE 4


/************************************/
void eliminar_vocales(char cadena[]){
	int i,j;	
	int longitud=strlen(cadena);
    j=' ';
    for(i=0;i<longitud;i++){
        if(cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'){
            cadena[i]=j;
        }
    }
	printf("%s", cadena);
}

/***********************************/
int main(int argc, char *argv[]) {
	char *buffer;
	int i,j;
	if(argc==1) {
		printf("Ingrese lineas");
	}
	if(argc>1){
		int longitud=0;
		for(i=1;i<argc;i++){
			buffer= (char *) malloc((strlen(argv[i]) + 1) * sizeof(char));
			strcpy(buffer,argv[i]);
			eliminar_vocales(buffer);
		
		}
		
	}
	
}
