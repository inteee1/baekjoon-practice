#include <stdio.h>
#include <string.h>
int main(void)
{
    char S[1000000];
    int len;
    int cnt = 0;
    int i = 0;
    scanf("%[^\n]", S);
    len = strlen(S);
    if (len == 1)
    {
        if (S[i] == ' ')
        {
            printf("0\n");
            return 0;
        }
    }
    for (i = 0; i < len - 1; ++i)
    {
        if (S[i] == ' ') {

            cnt++;
        }
    }
    printf("%d", cnt + 1);
    return 0;
}
