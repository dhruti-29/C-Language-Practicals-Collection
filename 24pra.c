#include <stdio.h>
int main() {
 printf("Dhruti Viradiya\n");
 printf("25CS113\n");

    char note1[100], note2[100], temp[100];
    int choice, i, j, length = 0, same = 1;
    printf("Enter Note 1: ");
    gets(note1);
    printf("Enter Note 2: ");
    gets(note2);

        printf("\n--- Alex's Note Program (Using Arrays Only) ---\n");
        printf("1. Calculate Length\n");
        printf("2. Reverse a Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy a Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");

        while(1){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch(choice){
        case 1:
            {
            length = 0;
            for (i = 0; note1[i] != '\0'; i++) {
                length++;
            }
            printf("Length of Note 1 = %d\n", length);
            break;
            }
        case 2:
            {
            length = 0;
            for (i = 0; note1[i] != '\0'; i++) {
                length++;
            }
            printf("Reversed Note: ");
            for (i = length - 1; i >= 0; i--) {
                printf("%c", note1[i]);
            }
            printf("\n");
            break;
            }
       case 3:
           {
            same = 1;
            for (i = 0; note1[i] != '\0' || note2[i] != '\0'; i++) {
                if (note1[i] != note2[i]) {
                    same = 0;
                }
            }
            if (same == 1)
                printf("Both notes are the same.\n");
            else
                printf("Notes are different.\n");
                break;
            }
        case 4:
            {
            for (i = 0; note1[i] != '\0'; i++) {
                temp[i] = note1[i];
            }
            temp[i] = '\0';
            printf("Copied Note: %s\n", temp);
            break;
            }
        case 5:
            {
            i = 0;
            while (note1[i] != '\0') {
                i++;
            }
            j = 0;
            while (note2[j] != '\0') {
                note1[i] = note2[j];
                i++;
                j++;
            }
            note1[i] = '\0';
            printf("Concatenated Note: %s\n", note1);
            break;
            }
        case 6:
            {
                for (i = 0; note1[i] != '\0'; i++) {
                    if (note1[i] >= 'a' && note1[i] <= 'z')
                        note1[i] = note1[i] - 32;
                    }
                    printf("Uppercase Note: %s\n", note1);
                    break;
            }
        case 7:
            {
                for (i = 0; note1[i] != '\0'; i++) {
                    if (note1[i] >= 'A' && note1[i] <= 'Z')
                        note1[i] = note1[i] + 32;
                }
                printf("Lowercase Note: %s\n", note1);
                break;
            }
        case 8:
            {
                for (i = 0; note1[i] != '\0'; i++) {
                    if (note1[i] >= 'A' && note1[i] <= 'Z')
                        note1[i] = note1[i] + 32;
                }
                    note1[0] = note1[0] - 32;
                for (i = 1; note1[i] != '\0'; i++) {
                    if ((note1[i - 1] == ' ' || note1[i - 1] == '\t') &&
                        (note1[i] >= 'a' && note1[i] <= 'z')) {
                        note1[i] = note1[i] - 32;
                    }
                }

                printf("Capitalized Note: %s\n", note1);
                break;
            }

       case 9:
            {
            printf("Exiting Program...\n");
            break;
            }
        default:
            {
        printf("enter your invild choice.\n");
            }
          }
        }
    return 0;
}