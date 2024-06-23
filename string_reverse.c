// print a string but print per a sentence in a new line
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for (char *c = s; *c != NULL; c++) {
    if (*c == ' ') {
        *c = '\n';
    }
}
printf("%s", s);
    
    return 0;
}