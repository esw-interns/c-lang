#include<stdio.h>
#include<string.h>
int main(void){
	printf("\nenter no of persons in your room\n");
	int n;
	scanf("%d",&n);
	char *names[n];
	char str1[n][20];
	int i;
	printf("\nenter names of the persons in your room:\n");
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("\nperson %d",i+1);
		gets(str1[i]);
		names[i]=str1[i];
	}
	printf("enter no.of persons involved in payment");
	int p;
	scanf("%d",&p);
	char *paid[p];
	char str2[p][20];
	printf("\n\nEnter names of the persons paid:\n");
	for(i=0;i<p;i++){
		fflush(stdin);
		printf("\nperson %d",i+1);
		gets(str2[i]);
		paid[i]=str2[i];
	}
	
	
	
	
	
	
	
	
	
	
	
	
	printf("\n\n\n\nnames of the persons in room:");
	for(i=0;i<n;i++){
		printf("\nperson %d is %s\n",i+1,names[i]);
	}
	printf("\n\nnames of the persons paid:\n");
	for(i=0;i<p;i++){
		printf("\nperson %d is %s\n",i+1,paid[i]);
	}
	
	
	
}
