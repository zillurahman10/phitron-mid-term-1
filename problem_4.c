#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int tc = 1; tc <= t; tc++) {
        char s[10001];
        scanf("%s", s);

        int capital = 0;
        int small = 0;
        int digit = 0;

        for (int i = 0; s[i] != '\0'; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                capital++;
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                small++;
            } else if (s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}
