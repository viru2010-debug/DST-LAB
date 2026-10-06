#include <stdio.h>
#include <string.h>

void reversePrefix(char *word, char ch)
{
    int length = strlen(word);
    int targetIndex = -1;

    for (int i = 0; i < length; i++)
    {
        if (word[i] == ch)
        {
            targetIndex = i;
            break;
        }
    }

    if (targetIndex == -1)
    {
        return;
    }

    int start = 0;
    int end = targetIndex;

    while (start < end)
    {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[100];
    char target;

    printf("Enter a word: ");
    scanf("%99s", str);

    printf("Enter the character to find: ");
    scanf(" %c", &target);

    reversePrefix(str, target);

    printf("Result string: %s\n", str);

    return 0;
}
