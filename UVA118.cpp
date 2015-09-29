#include <stdio.h>
#pragma warning(disable:4996)
//題目有說走過的地方就不會再掉下去!!!看清楚
int main()
{
    int n, m, x, y, j, direction, dx, dy, dd, map[53][53]={0};
    char op, str[101];
    scanf("%d%d", &n, &m);
    while(scanf("%d%d %c", &x, &y, &op) == 3){
        scanf("%s", str);
        int lost = 0;
        switch(op){
            case 'N':   direction = 0;  break;
            case 'W':   direction = 1;  break;
            case 'S':   direction = 2;  break;
            case 'E':   direction = 3;  break;
        }
        for(j = 0; str[j] && lost == 0; j++){
            if(str[j] == 'R')   direction = (direction+3)%4;
            else if(str[j] == 'L')   direction = (direction+1)%4;
            else if(str[j] == 'F'){
            
                switch(direction){
                                  case 0:  if(y+1 > m && map[x][y]) continue;
                    y += 1;    break;
                    case 1:  if(x-1 < 0 && map[x][y]) continue;
                    x -= 1;    break;
                    case 2:  if(y-1 < 0 && map[x][y]) continue;
                    y -= 1;    break;
                    case 3:  if(x+1 > n && map[x][y]) continue;
                    x += 1;    break;
                }
                if(x < 0 || y < 0 || x > n || y > m){
                    switch(direction){
                        case 0:     y -= 1;    break;
                        case 1:     x += 1;    break;
                        case 2:     y += 1;    break;
                        case 3:     x -= 1;    break;
                    }
                    map[x][y] = 1;
                    dx = x, dy = y, dd = direction;
                    lost = 1;
                }
            }
        }
        if(lost)    printf("%d %d %c LOST\n", dx, dy, dd == 0?'N':dd == 1?'W':dd == 2?'S':'E');
        else        printf("%d %d %c\n", x, y, direction == 0?'N':direction == 1?'W':direction == 2?'S':'E');
    }
    return 0;
}