#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


float oncekiTeklif = -1;
float teklif;
int i = 0	;	
int tur =0 ;
printf ("1969 model Ford Mustang Boss 429  acik artirmasina hos geldiniz \n ");


for (i=0; ; i++ ) {
	
	   tur ++;
	    printf (" \n %d teklif (Bin Dolar) : \n \n",tur);
	    scanf ("%f",&teklif);
	
	    if (teklif < oncekiTeklif && i>0) {
	    	printf ("Kazanan %.1f Bin Dolar'lik teklifin sahibi oluyor",oncekiTeklif);
	    	break;
		}
		oncekiTeklif= teklif; 
}
	
		return 0;
}
