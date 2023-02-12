#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char s[105];
    
    int n;
    fgets(s, 105, stdin);
    n = strlen(s);

    short ok = 0;
    int i;
    for(i = 0; i < n - 1; i++) {
        if(strchr("aeiou", s[i]) != NULL) {
            
            char t[100];
            strcpy(t, s + i + 1);
            strcpy(s + i + 2, t);
            s[i + 1] = '*';
            ++n;
            ok = 1;
        }
    }

    if (!ok) {
        printf("FARA VOCALE\n");
        return 0;
    }


    for (int i = 0; i < n - 1; ++i) {
        printf("%c", s[i]);
    }


    /**
     * strchr(s, c) => Cauta prima aparitie a caracterului c in sirul s. Daca il 
     * gaseste, intoarce sirul pornind de la acea pozitie: Ex: strchr(alex, l) => lex
     * Daca nu, practic in cautare am ajuns la final, adica la \0 adica NULL.
     * 
     * 
     * strcmp(a, b) == 0 (Sirurile sunt egale)
     * strcmp(a, b) < 0 (Sirul a e mai mic)
     * strcmp(a, b) > 0 (Sirul a e mai mare)
     * 
     * strcpy(a, b) => Copiaza sirul b in sirul a
     * 
     * 
    */
     

    return 0;
}