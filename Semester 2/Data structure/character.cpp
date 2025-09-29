#include <stdio.h>

#define MAX_CHARACTERS 100

struct Character {
    char name[50];
    int hp;
    int magic;
};

// Global array to store characters
struct Character characters[MAX_CHARACTERS];
int characterCount = 0;


void insertCharacter() {
    if (characterCount < MAX_CHARACTERS) {
        struct Character newCharacter;
        printf("\nEnter character name: ");
        scanf("%s", newCharacter.name);
        printf("Enter character HP: ");
        scanf("%d", &newCharacter.hp);
        printf("Enter character magic: ");
        scanf("%d", &newCharacter.magic);

        characters[characterCount++] = newCharacter;

        printf("Character inserted successfully.\n");
    } else {
        printf("Character database full. Unable to insert more characters.\n");
    }
}

void viewCharacters() {
    if (characterCount == 0) {
        printf("No characters to display.\n");
    } else {
        printf("\nList of characters:\n");
        for (int i = 0; i < characterCount; ++i) {
            printf("%d. Name: %s, HP: %d, Magic: %d\n", i + 1, characters[i].name, characters[i].hp, characters[i].magic);
        }
    }
}

void deleteCharacter() {
    if (characterCount == 0) {
        printf("No characters to delete.\n");
    } else {
        int index;
        printf("\nEnter the index of the character to delete: ");
        scanf("%d", &index);

        if (index < 1 || index > characterCount) {
            printf("Invalid index.\n");
        } else {
            // Shift elements
            for (int i = index - 1; i < characterCount - 1; ++i) {
                characters[i] = characters[i + 1];
            }
            characterCount--;
            printf("Character deleted successfully.\n");
        }
    }
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. View\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                insertCharacter();
                break;
            case 2:
                viewCharacters();
                break;
            case 3:
                deleteCharacter();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    } while(choice != 4);

    return 0;
}
