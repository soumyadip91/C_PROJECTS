#include <stdio.h>
#include <string.h>

// Function declarations
void showMenu();
void greetUser();

// Greeting function
void greetUser() {
    printf("---------------------------------\n");
    printf("|\tUSER MANAGEMENT SYSTEM\t |\n");
    printf("---------------------------------\n\n");
    printf("Welcome to our page\n\n");
}

// User structure
struct user {
    char uid[50];
    char pass[50];
};

// Showing menu
void showMenu() {
    printf("\nPlease select an operation:\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
}

// Main function
int main() {
    int choice;
    struct user e1;
    char buffer_id[50];
    char buffer_pass[50];
    int isRegistered = 0; // flag to check registration

    FILE *uid_file;
    FILE *pass_file;

    greetUser();

    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline from buffer

        if (choice == 3) {
            printf("Exiting program... Goodbye!\n");
            break;
        } 
        else if (choice == 1) { // Register
            uid_file = fopen("user_id.txt", "w");
            pass_file = fopen("pass_id.txt", "w");

            if (!uid_file || !pass_file) {
                printf("Error opening files!\n");
                return 1;
            }

            printf("Enter your USER ID: ");
            fgets(e1.uid, sizeof(e1.uid), stdin);
            e1.uid[strcspn(e1.uid, "\n")] = '\0'; // remove newline

            printf("Enter your Password: ");
            fgets(e1.pass, sizeof(e1.pass), stdin);
            e1.pass[strcspn(e1.pass, "\n")] = '\0'; // remove newline

            // Write to files
            fprintf(uid_file, "%s", e1.uid);
            fprintf(pass_file, "%s", e1.pass);

            fclose(uid_file);
            fclose(pass_file);

            printf("New user added successfully!\n");
            isRegistered = 1;
        } 
        else if (choice == 2) { // Login
            uid_file = fopen("user_id.txt", "r");
            pass_file = fopen("pass_id.txt", "r");

            if (!uid_file || !pass_file) {
                printf("No user found. Please register first.\n");
                continue;
            }

            fgets(e1.uid, sizeof(e1.uid), uid_file);
            e1.uid[strcspn(e1.uid, "\n")] = '\0';

            fgets(e1.pass, sizeof(e1.pass), pass_file);
            e1.pass[strcspn(e1.pass, "\n")] = '\0';

            fclose(uid_file);
            fclose(pass_file);

            printf("Enter your USER ID to login: ");
            fgets(buffer_id, sizeof(buffer_id), stdin);
            buffer_id[strcspn(buffer_id, "\n")] = '\0';

            printf("Enter your Password: ");
            fgets(buffer_pass, sizeof(buffer_pass), stdin);
            buffer_pass[strcspn(buffer_pass, "\n")] = '\0';

            if (strcmp(buffer_id, e1.uid) == 0 && strcmp(buffer_pass, e1.pass) == 0) {
                printf("Login successful. Welcome %s!\n", e1.uid);
            } else {
                printf("Invalid credentials. TRY AGAIN.\n");
            }
        } 
        else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
