#include <stdio.h>

// A = 65 a= 97
// B = 66 b = 98

int main()
{
    char ch;

    printf("Enter character:");
    scanf("%c", &ch);
    if (ch >= 97)
    {
        // lowercase --> uppercase
        ch = ch - 32;
    }
    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        printf("Vowel\n");
    }
    else
    {
        printf("consonant\n");
    }
}
