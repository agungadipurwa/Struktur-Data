#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    char iden[100];
    struct node *link;
}*front=NULL, *rear=NULL;

void enter_q(char*cusin);
void display_q();

void main()
{
    int
    struct o;
    char cusin[100];
    //masuk antrian
    puts("Cinema XXI Queue");
    //Gimana caranya input beberapa string ke linkedlist sekaligus
    printf("Custemer Identity");
    gets(cusin);
    fflush(stdin);
    enter_q(cusin);
    display_q();
}

void enter_q(char *cusin){
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    if (temp == NULL){
        printf("ERROR");
        return;
    }
    strcpy(temp->iden,cusin);
    temp->link=NULL;
    if(front==NULL){
        front = temp;
    }
    else{
        rear->link = temp;
    }
    rear = temp;
}

void display_q()
{
    int i;
    struct node *dp;
    if(front == NULL)
    {
        printf("Underflow");
        return;
    }
    dp = front;
    printf("Cinema Queue XXI:");
    while(dp!=NULL){
        printf("%s", dp->iden);
        dp = dp->link;
        i++;
    }
}