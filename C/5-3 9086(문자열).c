

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[1000] = { 0 };
    int head, tail;
    int length = 0;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%s", str);
        length = strlen(str);
        head = str[0];
        tail = str[length - 1];
        printf("%c%c\n", head, tail);
    }
    return 0;
}
