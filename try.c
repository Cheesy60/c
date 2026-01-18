#include <stdio.h>
int htoi(char c[]);
int main(){
   printf("%d",htoi("0x539"));
}
int htoi(char c[])
{
    int i,n,start;
    n = 0;
    start = 0;
    if(c[0] == '0' && (c[1] == 'x' ||c[1] == 'X'))
    {start = 2;}
    for(i=start;(c[i] >= '0' && c[i] <= '9')|| (c[i] >= 'a' && c[i] <= 'f')||(c[i] >= 'A' && c[i] <= 'F');++i)
    {
        if(c[i] >= 'a' && c[i] <= 'f')
        {
            n = 16 * n + (c[i] - 'a' + 10);
        }else if (c[i] >= 'A' && c[i] <= 'F') {
            n = 16 * n + (c[i] - 'A' + 10);
        }else {
            n = 16 * n + (c[i] - '0');
        }
    }
    return n;
}

