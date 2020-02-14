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


struct namecard
{
    
    char name[10];
    char phone[13];
    char mail[50];
    
};
struct namecard user[50];
int menu(void);
int input_business_card(); // ���Թ�ȣ, �ѱ��̸�, ����ȣ, �����Է�
void search_business_card(int x); // ���Թ�ȣ�� �˻� �� Ư��Ű ������ �ٽ� �޴� ���
//int edit_business_card(); // ���Թ�ȣ �˻� �� ����ȣ, �̸��� �ٽ� �Է¹޾� ����
//void delete_business_card();
//void show_all_cards(); // ���� ��ü ���
void previous(void);
void save(char*);
int load(char*);

int index = -1; //ó�������ϸ� �ƹ��͵����� -1�̶�� ��.
int num = 1;
int main()
{
    int a = 0;
    while (1)
    {
        switch (menu())
        {
        case 1:
            printf("�Է��� ���õǾ����ϴ�.\n");
            input_business_card();
            break;
           /*case 2:
                 printf("������ ���õǾ����ϴ�.\n");
                 edit_business_card();
                 break;
             case 3:
                 printf("������ ���õǾ����ϴ�.\n");
                 delete_business_card();
                 break;
             case 4:
                 printf("��ü����� ���õǾ����ϴ�.\n");
                 show_all_cards();
                 break;*/
             case 5:
                 printf("�˻��� ���õǾ����ϴ�.\n");
                 printf("�˻��� ���Թ�ȣ�� �Է��ϼ��� :");
                 scanf("%d", &a);
                 search_business_card(a);
                 break;
             case 6:
                 save("D:\PKNU2020\StudyC\exam01\card_data.txt");                
                 break;
             case 7:
                 num = load("D:\PKNU2020\StudyC\exam01\card_data.txt");
                 index = num - 1;
                 break;
             case 8:
                printf("���α׷��� �����մϴ�.\n");
                return 0;
             default:
                 printf("�߸��� �޴��Դϴ�.\n");
                 break;
        }
    }
    system("pause");
    return EXIT_SUCCESS;
}

int menu(void)
{
    int menu1 = 0;
    printf(" �޴��� �Է��ϼ���.\n");
    printf("(1)�Է�, (2)����, (3)����,(4)��ü���, (5)�˻�, (6)����, (7)�ҷ�����, (8)���� : ");
    scanf("%d", &menu1);
   
    return menu1;

}

int input_business_card()
{
    system("cls");
    printf("\t���� �̸��� �Է��ϼ���:");
    scanf("%s, user[num].name");
    printf("\t���� ��ȭ��ȣ�� �Է��ϼ���(000-0000-0000):");
    scanf("%s, user[num].phone");
    printf("\t���� ������ �Է��ϼ���(example@example.com):");
    scanf("%s, user[num].mail");
    printf("\t������ %d��°�� ����Ǿ����ϴ�.\n", num);
    num++;
    index++;
   
}

/*void search_business_card(int x) // �˻�, !�۵��ȉ�
{

    
    if (x <= 0)
    {
        printf("\t�Էµ� �����Ͱ� �����ϴ�.");
        system("pause");
        system("cls");
        return;
    }
    else if ( x >= 1)
    {
    system("cls");
    printf("\t================================\n");
    printf("\t%d ��° ������ �����Դϴ�.\n", x);
    printf("\t--------------------------------\n");
    printf("\t�̸� : %s\n", user[num].name);
    printf("\t��ȭ��ȣ : %s\n", user[num].phone);
    printf("\t���� : %s\n", user[num].mail);
    printf("\t================================\n");
    }

}*/


/*void show_all_cards() // ��ü��� , ! �۵��ȉ�
{
    if (num < 0 )
    {
        printf("\t�Էµ� �����Ͱ� �����ϴ�.");
        system("pause");
        system("cls");
        return;
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            printf("%d��° ȸ���� ����\n", user[num[&i]]);
            printf("�̸� : %s\n", user[num[&i]].name);
            printf("��ȭ��ȣ : %s\n", user[num[&i]].phone);
            printf(" : %s\n", user[num[&i]].mail);
        }
        printf("\n");
    }

}*/

void save(char* namecard)
{
    FILE* fout = fopen("card_data.txt", "w");
    int i;
    for (i = 0; i < num; i++)
    {
        fprintf(fout, "%s %s %s \n", user[i].name, user[i].phone, user[i].mail);
    }
    printf("\t==============================================\n");
    printf("\t\t�����Ͱ� ����Ǿ����ϴ�.\n");
    printf("\t==============================================\n");

    fclose(fout);
}

int load(char* namecard)
{
    FILE* fin = fopen("card_data.txt", "r");
    int i = 0;
    if (fin == NULL)
    {
        printf("\t==============================================\n");
        printf("\t\t������ �������� �ʽ��ϴ�.\n");
        printf("\t==============================================\n");
        return 0;
    }
}

