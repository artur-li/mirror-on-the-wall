#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

    // Name input
    char name[50];
    printf("\nName: ");
    scanf("%s", &name);
    printf("\n========\nMirror mirror on the wall is %s the prettiest of them all?\n\n", name);

    // Random number
    int random_n;
    srand(time(NULL));
    random_n = rand() % 4;

    // Corresponding message strings
    char string1[] = "Yes you are the most beautiful, above them all!";
    char string2[] = "I need a nap, leave me alone";
    char string3[] = "Unfortunately... no";
    char string4[] = "I would say yes but theres another person far better then the rest!";

    // print the message based on the random number
    if (random_n == 0) {
        printf("%s\n========\n", string1);
    } else if (random_n == 1) {
        printf("%s\n========\n", string2);
    } else if (random_n == 2) {
        printf("%s\n========\n", string3);
    } else if (random_n == 3) {
        printf("%s\n========\n", string4);
    }

}
