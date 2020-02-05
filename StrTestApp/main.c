/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 문자열 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메인함수
int main(void) 
{
    /*har* dessert = "apple";
    
    printf("오늘의 후식은 %s 입니다\n", dessert);
    dessert = "banana";
    printf("내일의 후식은 %s 입니다\n", dessert);
    */
    
    /*char str[80];
    
    printf("공백 포함 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("문자열은 : %s\n", str);
    */

    /*int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);
    getchar();
    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);
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

    printf("최초 문자열 : %s\n", str1);
    strcpy(str1, str2);
    printf("바뀐 문자열 : %s\n", str1); // apple 
    
    strcpy(str1, ps1);
    printf("바뀐 문자열 : %s\n", str1); // banana
    
    strcpy(str1, ps2);
    printf("바뀐 문자열 : %s\n", str1); // apple

    strcpy(str1, "banana");
    printf("바뀐 문자열 : %s\n", str1); // banana
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

    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str1, str2);
    if (strlen(str1) > strlen(str2)) 
    
        resp = str1;  // 문자열 길이가 긴 단어 resp에 저장 후 출력
    else
        resp = str2;
    printf("이름이 긴 과일은 : %s\n", resp);
    printf("1 : %d, 2 : %d\n", strlen(str1), strlen(str2));
    */

    /*char str1[80] = "apple";
    char str2[80] = "banana";

    printf("사전에 나중에 나오는 과일 이름 : ");
    
    if (strcmp(str1, str2) > 0) // str1이 str2 보다 사전우선순위가 높을시
        printf("%s\n", str1); // str1 출력 (1)
    else
        printf("%s\n", str2); // str2 출력 (-1)
    */

    char str1[80];
    char str2[80];

    printf("두 개의 언어를 입력 하세요 : ");
    while (1)
    {
        scanf("%s%s", str1, str2);
        if (str1[0] == 'X') // 첫글자가 X일시 break
        {
            break;
        }
        else if (strcmp(str1, str2) < 0) // str1 > str2 = str1
        {
            printf("%s\n", str1);
            printf("두 개의 언어를 입력 하세요 : \n");
        }
        else if (strcmp(str1, str2) > 0) // str1 < st2 = str2
        {
            printf("%s\n", str2);
            printf("두 개의 언어를 입력 하세요 : \n");
        }
        
       
    }

   
    system("pause");
	return EXIT_SUCCESS;
}