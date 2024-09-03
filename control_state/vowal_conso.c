#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert the character to lowercase to handle both uppercase and lowercase input
    ch = tolower(ch);

    // Check if the character is a vowel or consonant
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            // Check if the character is an alphabet
            if ((ch >= 'a' && ch <= 'z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("%c is not an alphabet.\n", ch);
            }
    }

    return 0;
}
