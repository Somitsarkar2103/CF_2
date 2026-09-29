#include <stdio.h>
#include <ctype.h>
 
int main() {
    char s[101];
    int upper = 0, lower = 0;
 
    scanf("%s", s);
 
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
 
    if (upper > lower) {
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = toupper(s[i]);
    } else {
        for (int i = 0; s[i] != '\0'; i++)
            s[i] = tolower(s[i]);
    }
 
    printf("%s\n", s);
 
    return 0;
}