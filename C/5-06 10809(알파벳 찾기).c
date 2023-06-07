

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    char A[26] = { 0 };
    scanf("%s", S);
    for (int i = 0; i < 26; ++i)
    {
        A[i] = -1;
    }
    for (int i = 97; i <= 122; ++i) {
        for (int j = 0; j < strlen(S); ++j)
        {
            if (S[j] == i) {
                A[S[j] - 'a'] = j;
                break;
            }
        }
    }
    for(int i = 0; i < 26; ++i)
    {
        printf("%d ", A[i]);
    }
    return  0;
}

