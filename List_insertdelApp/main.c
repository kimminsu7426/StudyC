/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
typedef struct node
{
    double data;
    struct node* next;
}node; 


void insertnode(node*, double);
void deletenode(node*);

int main(void) 
{
    double num;
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;

    
    insertnode(head, 1.0);
    insertnode(head, 12.0);
    insertnode(head, 13.0);

    
    
   /* node* curr = head->next;
    while (curr != NULL)
    {
       
        printf("%.1lf", curr->data);
        curr = curr->next;
    }*/
    
    
    system("pause");
	return EXIT_SUCCESS;
}

void insertnode(node* head, double data)
{
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->next = head->next;
    head->next = newnode;
    printf("HEAD ��� �ڿ� ���ο� ��� �߰� ! [�� : %.1lf]\n", data);
}


void deletenode(node* head)
{

}

