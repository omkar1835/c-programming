#include <stdio.h>
void printNamaste ();
void printBonjour ();
int main() {
    printf("enter f or F for french or i or I for hindi :\n");
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'i' || ch == 'I') {
        printNamaste ();
    } else if (ch == 'f' || ch == 'F') {
        printBonjour ();
    } else {
        printf("Invalid character\n");
    }
    return 0;
}

void printNamaste () {
    printf("Namaste:)\n");
}
void printBonjour () {
    printf("Bonjour:)\n");
}