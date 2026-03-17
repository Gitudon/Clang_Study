#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "123456789";
    char str2[] = "ABCDEFGHIJ";
    puts("strlenの使用例");
    printf("str1 = \"%s\"\n", str1);
    printf("str1の長さは%zu\n", strlen(str1));
    printf("str2 = \"%s\"\n", str2);
    printf("str2の長さは%zu\n", strlen(str2));
    puts("strcpyの使用例");
    char tmp1[128];
    char tmp2[128];
    strcpy(tmp1, str1);
    strcpy(tmp2, str2);
    printf("tmp1 = \"%s\"\n", tmp1);
    printf("tmp2 = \"%s\"\n", tmp2);
    puts("strncpyの使用例");
    char tmp3[128];
    char tmp4[128];
    strncpy(tmp3, str1, 5);
    tmp3[5] = '\0';
    strncpy(tmp4, str2, 5);
    tmp4[5] = '\0';
    printf("tmp3 = \"%s\"\n", tmp3);
    printf("tmp4 = \"%s\"\n", tmp4);
    puts("strcatの使用例");
    char tmp5[128] = "Hello, ";
    char tmp6[] = "World!";
    strcat(tmp5, tmp6);
    printf("tmp5 = \"%s\"\n", tmp5);
    puts("strncatの使用例");
    char tmp7[128] = "Hello, ";
    char tmp8[] = "World!";
    strncat(tmp7, tmp8, 3);
    printf("tmp7 = \"%s\"\n", tmp7);
    puts("strcmpの使用例");
    char str3[] = "abc";
    char str4[] = "abc";
    char str5[] = "adb";
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));
    printf("strcmp(str3, str5) = %d\n", strcmp(str3, str5));
    puts("strncmpの使用例");
    printf("strncmp(str3, str4, 2) = %d\n", strncmp(str3, str4, 2));
    printf("strncmp(str3, str5, 2) = %d\n", strncmp(str3, str5, 2));
    return 0;
}
