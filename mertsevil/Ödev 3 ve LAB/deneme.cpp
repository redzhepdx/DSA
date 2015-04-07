#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

typedef struct linked_list {
    int data;
    struct linked_list *next;
} NODE;


int main(){
	
int value,head,tail;

scanf("%d",&value);
		
  if(head==NULL){ /// ilk d���m olu�turulmad�ysa �nce onu olu�turuyoruz.
        head = (NODE *)malloc(sizeof(NODE));
        head->data = value;
        head->next = NULL;
        tail = head; /// Sadece ilk d���m i�in, head = tail
    } else {
        NODE *temp = (NODE *)malloc(sizeof(NODE)); /// Eklenecek d���mler i�in memory allocation
        temp->data = value;
        temp->next = NULL;
        tail->next = temp;
        tail = tail->next;
    }
    printf("Eklenen data %d\n", value);

getch();
return 0;

}
	
	

