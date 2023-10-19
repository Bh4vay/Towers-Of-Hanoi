#include <stdio.h>

void toH(int n, char src, char hel, char dest)
{
    if (n == 1)
    {
        printf("Move disk %d from %c to %c\n", n, src, dest);
        return;
    }
    toH(n - 1, src, dest, hel);
    printf("Move disk %d from %c to %c\n", n, src, dest);
    toH(n - 1, hel, src, dest);
}

int main()
{
    int n;
    char s = 'A';
    char h = 'B';
    char d = 'C';
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    toH(n, s, h, d);
}