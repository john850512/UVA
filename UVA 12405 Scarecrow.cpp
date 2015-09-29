#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
    int t = 0 ;
    int time = 0;   
    scanf("%d",&t);
    while(t--)
    {
        int n = 0 ;
        char field[101] = {0};
        bool used[101];
        int ans = 0;

        for(int i = 0 ; i < 101 ; ++i) used[i] = false;

        scanf("%d",&n);
        while(getchar() != '\n'){};
        gets(field);


        for(int i = 0 ; i < strlen(field) ; ++i)
        {
            if(field[i] == '.' && !used[i-1] )
            {
                //printf("%d %d\n",i,used[i]);
                if(used[i])
                {
                    continue;
                }
                //printf("%d   ",i+1);
                used[i+1] = true;
                ans++;
            }
        }
        printf("Case %d: %d\n",++time,ans);

    }

    return 0;
}