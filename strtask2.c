//use all string functions to perform operations on the string.
//string functions include: strlen(), strcpy(), strcat(), strcmp(), strrev(), strwr(), strupr(), strstr() etc.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], str3[200];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    //strlen()
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);

    //strcpy()
    strcpy(str3, str1);
    printf("String after copying str1 to str3: %s\n", str3);

    //strcat()
    strcat(str3, str2);
    printf("String after concatenating str2 to str3: %s\n", str3);

    //strcmp()
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("Both strings are equal.\n");
    } else if (cmp < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    //strrev()
    strrev(str1);
    printf("First string after reversing: %s\n", str1);

    //strupr()
    strupr(str2);
    printf("Second string after converting to uppercase: %s\n", str2);

    //strlwr()
    strlwr(str3);
    printf("Third string after converting to lowercase: %s\n", str3);

    //strstr()
    char *substr = strstr(str3, "hello");
    if (substr != NULL) {
        printf("Substring 'hello' found in third string at position: %ld\n", substr - str3);
    } else {
        printf("Substring 'hello' not found in third string.\n");
    }

    return 0;
}