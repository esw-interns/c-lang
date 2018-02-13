#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double Mask(int b, int w);

int main(void){
	
	int b,w;
	scanf("%d %d",&b,&w);
	
	double mask = Mask(b,w);
	
	printf("%x\n",(long long int)mask);
	
	getchar();
	return 0;
	
}

double Mask(int b, int w){
	
	double mask = 0.0;
	int i,j;
	
	for(i=0;i<64;i++){
		
		if(b==i){
			
			for(j=b;j<(w+b);j++){
				if(j==1){
					mask = mask +1;
					
				}else
				{
					mask = mask + pow(2.0,(double)(j-1));
				}
			}
			
			
		}
		
	}
	
	return mask;

	
}
