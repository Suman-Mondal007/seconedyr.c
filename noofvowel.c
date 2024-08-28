#include <stdio.h>
#include <ctype.h>
int main() {
    char str[26];
    int i, vowels = 0, consonants = 0;
    char ch;
    printf("Enter a alphabet: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);
            switch (ch) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
                    break;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}
