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
#include <string.h>

/* �ڱ����� ����ü(��Ī node)�� ���ؼ� ���� ����Ʈ�� �����, �Ǽ��� ���� �� �ֵ��� �Ѵ�.
���⼭ insertNode()�Լ��� ���� �������� Node�� �߰�, deletNode(int index)�� ���ϴ� ��ġ�� ���� �����ϰ��Ѵ�.
�� �۾� �� ����� �Ѱ�����ŭ �����͸� ����ϴ� �Լ�, printNode()�� �����Ѵ�*/
typedef struct node
{
    double data;
    struct node* next;
}node; // struct node* next == &struct node

void insertnode(node* head, node* last_node, double last);
void deletenode(node*);

int main(void) 
{
                                              // node ����ü�� ���� head ����
    node* head = (node*)malloc(sizeof(node)); // head ����ü �����Ϳ� 4byte�� �����޸��ּ��Ҵ�
    head->next = NULL; // head�� ����Ű�� ���� NULL
   
    node* node1 = (node*)malloc(sizeof(node)); // 4byte �����޸��ּҸ� node1�� �Ҵ�   
    node1->next = head->next; // node1 == &next(NULL) : node1�� �ּҿ� next�ǰ�(NULL)�� ����
    node1->data = 1.1; // node1�� data = 10;
    head->next = node1; // head = &node1 node1�� �ּҸ� haed�� ����

    node* node2 = (node*)malloc(sizeof(node)); // 4byte �����޸��ּҸ� node2�� �Ҵ�
    node2->next = node1->next; // node2�� �ּҿ� next(NULL)�� ����
    node2->data = 2.2;
    node1->next = node2; // head->next == &node1,1.1 node1->next,2.2 == &node2, node2->next = NULL;

    node* node3 = (node*)malloc(sizeof(node));
    node3->next = node2->next;
    node3->data = 3.3;
    node2->next = node3;

    node* node4 = (node*)malloc(sizeof(node));
    node4->next = node3->next;
    node4->data = 4.4;
    node3->next = node4;
    
    node* node5 = (node*)malloc(sizeof(node));
    node5->next = node4->next;
    node5->data = 5.5;
    node4->next = node5;
    
    node* current = head->next; // current == &node1
    while (current != NULL)
    {
        printf("%.1lf\n", current->data); // current->data == node1->data 
        current = current->next; // node1 = node1->next == current = &node2
    }

    free(head);
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);


    
    system("pause");
	return EXIT_SUCCESS;
}