#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    int n;
    char ch;
    char string[10];

    
    printf("Enter number of lines: ");
    scanf("%d", &n);
    getchar(); 

    char lines[n][MAX];
    for (int i = 0; i < n; i++) {
        printf("Enter line %d: ", i + 1);
        fgets(lines[i], MAX, stdin);
        int len = strlen(lines[i]);
        if (len > 0 && lines[i][len - 1] == '\n') {
            lines[i][len - 1] = '\0';  
        }
    }
    printf("Enter a character: ");
    scanf("%c", &ch);
    getchar();  
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    int len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    int ch_sum=0;
    for (int i = 0; i < n; i++) {
        int index = -1;  
        for (int j = 0; j < strlen(lines[i]); j++) {  
            if (lines[i][j] == ch) {
                index = j;
                break;
            }
        }
        printf("Line %d: Character '%c' is at index %d\n", i + 1, ch, index);
        ch_sum = ch_sum + index;
    }
    
    printf("sum of position of ch: %d\n",ch_sum);
    
    int substring_sum = 0;
    for (int i = 0; i < n; i++) {
        char *pos = strstr(lines[i], string);
        if (pos != NULL) {
            int position = pos - lines[i]; 
            printf("Line %d: String \"%s\" is at index %d\n", i + 1, string, position);
            substring_sum += position;
        } else {
            printf("Line %d: String \"%s\" not found\n", i + 1, string);
        }
    }

    printf("Sum of positions of substring: %d\n", substring_sum);
    

    return 0;
}
