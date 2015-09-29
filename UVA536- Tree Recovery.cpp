#include <stdio.h>
#include <string.h>
 
char str1[30], str2[30];
int count;
 
void post(int start, int end)
{
    if(start > end) return;
 
    count++;
    int i;
    for(i = 0 ; i < strlen(str2) ; i++)
    {
        if(str1[count] == str2[i])
        {
            post(start, i - 1);
            post(i + 1, end);
            putchar(str2[i]);
            return;
        }
    }
}
 
int main()
{
    memset(str1, 0, sizeof(str1));
    memset(str2, 0, sizeof(str2));
 
    while(~scanf("%s%s", str1, str2))
    {
        count = -1;
        post(0, strlen(str1) - 1);
        puts("");
        memset(str1, 0, sizeof(str1));
        memset(str2, 0, sizeof(str2));
    }
    return 0;
}