#include <stdio.h>
#include <math.h>

int main() {
    int x = 3;
    int y = 4;
    int ans = x++ + ++x - --y + y--;
    printf("%d", ans);
    return 0;
}