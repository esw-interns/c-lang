#include<stdio.h>
#include<stdlib.h>
typedef struct links{
	int data;
	struct links *next;
	struct links *prev;
}LINK;
typedef struct header{
	struct links *first;
	struct links *last;
}HDR;
void enqueue(HDR* queue,LINK* item)
{
	printf("in fun");
	LINK* temp;
	temp=queue->last;
	queue->last=item;
	item->next=(LINK*)queue;
	item->prev=temp;
	temp->next=item;
}
LINK* dequeue(HDR* queue){
	printf("in funk\n\n");
	LINK* temp2;
	temp2=queue->first;
	if(temp2==(LINK*)queue){
		temp2=NULL;
	}
	else{
		queue->first=temp2->next;
		queue->first->prev=(LINK*)queue;
	}
	return temp2;
}
int main(void){
	LINK *temp;
	HDR head;
	head.first=(LINK*)&head;
	head.last=(LINK*)&head;
	printf("ENTER no.of elements in list:\n");
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(LINK*)malloc(sizeof(LINK));
		printf("ENTER data for element no. %d::",i+1);
		scanf("%d",&temp->data);
		enqueue(&head,temp);
	                }
					temp=(LINK*)&head;	
 do{
   
   	temp=dequeue(&head);
   	if(temp!=NULL){
   		    printf("\n\ndata is %d",temp->data);
		   //free(temp);
                  }
                temp=(LINK*)&head;  
              }while(temp!=NULL);
   return 0;
}
