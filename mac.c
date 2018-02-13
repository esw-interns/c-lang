#include<stdio.h>
#include<string.h>


#define READ(fmt,n) printf("enter value \n"); scanf(fmt,&n)
#define DISPLAY(fmt,str,n) printf("%s "fmt,str,n)

int main(void){
	int n;
	READ("%d",n);
//	printf("printing in main function %d\n",n);
	DISPLAY("%d","Answer is",n);
}


/*
#define READ(N) printf("enter value \n"); scanf("%d",&N);
#define DISPLAY(N) printf("value is %d \n",N);
#define READ_ARR(arr,M) \
                      for(int i=0;i<M;i++){\
                      READ(arr[i]);\
					  }
#define DISPLAY_ARR(k,arr) \
                      for(int i=0;i<k;i++){\
                      DISPLAY(arr[i]);\
					  }


int main(void){
	int n;
	READ(n);
	DISPLAY(n)
	int arr[n];
	READ_ARR(arr,n);
	printf("\n\n\ndisplaying array\n\n\n");
	DISPLAY_ARR(n,arr);
	return 0;
}*/
