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


struct namecard
{
    
    char name[10];
    char phone[13];
    char mail[50];
    
};
struct namecard user[50];
int menu(void);
int input_business_card(); // 명함번호, 한글이름, 폰번호, 메일입력
void search_business_card(int x); // 명함번호로 검색 후 특정키 누를시 다시 메뉴 출력
//int edit_business_card(); // 명함번호 검색 후 폰번호, 이메일 다시 입력받아 저장
//void delete_business_card();
//void show_all_cards(); // 명함 전체 출력
void previous(void);
void save(char*);
int load(char*);

int index = -1; //처음실행하면 아무것도없는 -1이라는 뜻.
int num = 1;
int main()
{
    int a = 0;
    while (1)
    {
        switch (menu())
        {
        case 1:
            printf("입력이 선택되었습니다.\n");
            input_business_card();
            break;
           /*case 2:
                 printf("수정이 선택되었습니다.\n");
                 edit_business_card();
                 break;
             case 3:
                 printf("삭제가 선택되었습니다.\n");
                 delete_business_card();
                 break;
             case 4:
                 printf("전체출력이 선택되었습니다.\n");
                 show_all_cards();
                 break;*/
             case 5:
                 printf("검색이 선택되었습니다.\n");
                 printf("검색할 명함번호를 입력하세요 :");
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
                printf("프로그램을 종료합니다.\n");
                return 0;
             default:
                 printf("잘못된 메뉴입니다.\n");
                 break;
        }
    }
    system("pause");
    return EXIT_SUCCESS;
}

int menu(void)
{
    int menu1 = 0;
    printf(" 메뉴를 입력하세요.\n");
    printf("(1)입력, (2)수정, (3)삭제,(4)전체출력, (5)검색, (6)저장, (7)불러오기, (8)종료 : ");
    scanf("%d", &menu1);
   
    return menu1;

}

int input_business_card()
{
    system("cls");
    printf("\t고객의 이름을 입력하세요:");
    scanf("%s, user[num].name");
    printf("\t고객의 전화번호를 입력하세요(000-0000-0000):");
    scanf("%s, user[num].phone");
    printf("\t고객의 메일을 입력하세요(example@example.com):");
    scanf("%s, user[num].mail");
    printf("\t고객님은 %d번째에 저장되었습니다.\n", num);
    num++;
    index++;
   
}

/*void search_business_card(int x) // 검색, !작동안됌
{

    
    if (x <= 0)
    {
        printf("\t입력된 데이터가 없습니다.");
        system("pause");
        system("cls");
        return;
    }
    else if ( x >= 1)
    {
    system("cls");
    printf("\t================================\n");
    printf("\t%d 번째 고객님의 정보입니다.\n", x);
    printf("\t--------------------------------\n");
    printf("\t이름 : %s\n", user[num].name);
    printf("\t전화번호 : %s\n", user[num].phone);
    printf("\t메일 : %s\n", user[num].mail);
    printf("\t================================\n");
    }

}*/


/*void show_all_cards() // 전체출력 , ! 작동안됌
{
    if (num < 0 )
    {
        printf("\t입력된 데이터가 없습니다.");
        system("pause");
        system("cls");
        return;
    }
    else
    {
        for (int i = 1; i < num; i++)
        {
            printf("%d번째 회원의 정보\n", user[num[&i]]);
            printf("이름 : %s\n", user[num[&i]].name);
            printf("전화번호 : %s\n", user[num[&i]].phone);
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
    printf("\t\t데이터가 저장되었습니다.\n");
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
        printf("\t\t파일이 존재하지 않습니다.\n");
        printf("\t==============================================\n");
        return 0;
    }
}

