#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];

    printf("Enter a word: ");
    gets(word);

    int i = 0;
    int count = 0;

    while (word[i] != '\0') {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
            word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
            count++;
        }
        i++;
    }
    printf("Number of vowels in the word is: %d", count);
    int len = strlen(word);
    printf("\n Length of the word is: %d", len);
    
}

