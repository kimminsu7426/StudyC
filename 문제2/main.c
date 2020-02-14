/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 자기참조 구조체(명칭 node)를 통해서 연결 리스트를 만들고, 실수를 담을 수 있도록 한다.
여기서 insertNode()함수로 제일 마지막에 Node를 추가, deletNode(int index)로 원하는 위치의 값을 삭제하게한다.
각 작업 후 노드의 총갯수만큼 데이터를 출력하는 함수, printNode()를 구현한다*/
typedef struct node
{
    double data;
    struct node* next;
}node; // struct node* next == &struct node

void insertnode(node* head, node* last_node, double last);
void deletenode(node*);

int main(void) 
{
                                              // node 구조체의 변수 head 생성
    node* head = (node*)malloc(sizeof(node)); // head 구조체 포인터에 4byte의 동적메모리주소할당
    head->next = NULL; // head가 가르키는 값은 NULL
   
    node* node1 = (node*)malloc(sizeof(node)); // 4byte 동적메모리주소를 node1에 할당   
    node1->next = head->next; // node1 == &next(NULL) : node1의 주소에 next의값(NULL)을 저장
    node1->data = 1.1; // node1의 data = 10;
    head->next = node1; // head = &node1 node1의 주소를 haed에 저장

    node* node2 = (node*)malloc(sizeof(node)); // 4byte 동적메모리주소를 node2에 할당
    node2->next = node1->next; // node2의 주소에 next(NULL)값 저장
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