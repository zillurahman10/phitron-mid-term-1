#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    fgets(s, 100001, stdin);
    
    int consonant = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
            consonant++;
        }
    }

    printf("%d\n", consonant);
    return 0;
}
