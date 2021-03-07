#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* findnonreduciblestring(char* s) {
    unsigned int length = strlen(s), position = 0, isreducible = 0;
    char*s2 = malloc(length * sizeof(char));
    
    for(register unsigned int i = 0; i < length; i++) {
        if (s[i] == 0) {
            continue;
        } else if (s[i] == s[i + 1]) {
            s[i] = s[i + 1] = 0;
        } else {
            s2[position] = s[i];
            if (position > 0 && s2[position - 1] == s2[position]) {
                isreducible = 1;
            }
            position++;
        }
    }
    
    if (isreducible) {
        return findnonreduciblestring(s2);
    } else if (position == 0) {
        return "Empty String";
    } else {
        return s2;
    }
}

int main() {
    char* s = malloc(100 * sizeof(char));
    scanf("%s", s);
    printf("%s", findnonreduciblestring(s));

    return 0;
}