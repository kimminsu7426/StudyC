/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� / ���ڿ� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// �����Լ�
int main(void) 
{
    /*har* dessert = "apple";
    
    printf("������ �Ľ��� %s �Դϴ�\n", dessert);
    dessert = "banana";
    printf("������ �Ľ��� %s �Դϴ�\n", dessert);
    */
    
    /*char str[80];
    
    printf("���� ���� ���ڿ� �Է� : ");
    fgets(str, sizeof(str), stdin);
    printf("���ڿ��� : %s\n", str);
    */

    /*int age;
    char name[20];

    printf("���� �Է� : ");
    scanf("%d", &age);
    getchar();
    printf("�̸� �Է� : ");
    gets(name);
    printf("���� : %d, �̸� : %s\n", age, name);
    */

    /*char str[80] = "apple juice";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout);
    puts("jam");
    */
	
    /*char str1[80] = "strawberry";
    char str2[80] = "apple";
    char* ps1 = "banana";
    char* ps2 = str2;

    printf("���� ���ڿ� : %s\n", str1);
    strcpy(str1, str2);
    printf("�ٲ� ���ڿ� : %s\n", str1); // apple 
    
    strcpy(str1, ps1);
    printf("�ٲ� ���ڿ� : %s\n", str1); // banana
    
    strcpy(str1, ps2);
    printf("�ٲ� ���ڿ� : %s\n", str1); // apple

    strcpy(str1, "banana");
    printf("�ٲ� ���ڿ� : %s\n", str1); // banana
    */

    /*char str[20] = "mango tree";

    strncpy(str,"apple - pie",5);

    printf("%s\n", str);
    */

    /*char str[80] = "straw";

    strcat(str, "berry"); 
    printf("%s\n", str); // strawberry
    strncat(str, "piece", 3);
    printf("%s\n", str); // strawberrypie
    */

    /*char str1[80], str2[80];
    char* resp;

    printf("2���� ���� �̸� �Է� : ");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2)) 
    
        resp = str1;  // ���ڿ� ���̰� �� �ܾ� resp�� ���� �� ���
    else
        resp = str2;
    printf("�̸��� �� ������ : %s\n", resp);
    printf("1 : %d, 2 : %d\n", strlen(str1), strlen(str2));
    */

    /*char str1[80] = "apple";
    char str2[80] = "banana";

    printf("������ ���߿� ������ ���� �̸� : ");
    
    if (strcmp(str1, str2) > 0) // str1�� str2 ���� �����켱������ ������
        printf("%s\n", str1); // str1 ��� (1)
    else
        printf("%s\n", str2); // str2 ��� (-1)
    */

    char str1[80];
    char str2[80];

    printf("�� ���� �� �Է� �ϼ��� : ");
    while (1)
    {
        scanf("%s%s", str1, str2);
        if (str1[0] == 'X') // ù���ڰ� X�Ͻ� break
        {
            break;
        }
        else if (strcmp(str1, str2) < 0) // str1 > str2 = str1
        {
            printf("%s\n", str1);
            printf("�� ���� �� �Է� �ϼ��� : \n");
        }
        else if (strcmp(str1, str2) > 0) // str1 < st2 = str2
        {
            printf("%s\n", str2);
            printf("�� ���� �� �Է� �ϼ��� : \n");
        }
        
       
    }

   
    system("pause");
	return EXIT_SUCCESS;
}