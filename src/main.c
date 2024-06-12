#include <stdio.h>
#include "headers/consts.h"
#include <string.h>

int getDistro() {
    FILE *fp = NULL;
    for (size_t i = 0; i < sizeof(pManagersPlacement) / sizeof(pManagersPlacement[0]); i++) {
        fp = fopen(pManagersPlacement[i], "r");
        if (fp != NULL) {
            printf("Detected derivitive of %s.\n", pManagers[i]);
            fclose(fp);
            return 1;
        }
    }
    printf("Unknown Distro.\n");
    return 0;
}

int getSelection() {
    for (size_t i = 0; i < sizeof(installType) / sizeof(installType[0]); i++) {
        int num = i;
        printf("%d> %s\n", num + 1, installType[num]);
    }
    int selection;
    printf("\nEnter a number: ");
    scanf("%d", &selection);
    return selection;
}

int readSelection(int Type) {

}

int getSelectionClass2() {
    int choice = getSelection();
    switch (choice) {
        case 1:
            for (size_t i = 0; i < sizeof(fileManagers) / sizeof(fileManagers[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, fileManagers[num]);
            }
            break;
        case 2:
            for (size_t i = 0; i < sizeof(browsers) / sizeof(browsers[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, browsers[num]);
            }
            break;
        case 3:
            for (size_t i = 0; i < sizeof(terminal) / sizeof(terminal[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, terminal[num]);
            }
            break;
        case 4:
            for (size_t i = 0; i < sizeof(media) / sizeof(media[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, media[num]);
            }
            break;
        case 5:
            for (size_t i = 0; i < sizeof(gaming) / sizeof(gaming[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, gaming[num]);
            }
            break;
        case 6:
            for (size_t i = 0; i < sizeof(connection) / sizeof(connection[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, connection[num]);
            }
        case 7:
            for (size_t i = 0; i < sizeof(desktop) / sizeof(desktop[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, desktop[num]);
            }
        case 8:
            for (size_t i = 0; i < sizeof(extra) / sizeof(extra[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, extra[num]);
            }
            break;
        case 9:
            for (size_t i = 0; i < sizeof(games) / sizeof(games[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, games[num]);
            }
            break;
        case 10:
            for (size_t i = 0; i < sizeof(emulators) / sizeof(emulators[0]); i++) {
                int num = i;
                printf("%d> %s\n", num + 1, emulators[num]);
            }
            break;
        default:
            printf("Not a valid Answer\n");
            break;
    }
    return choice;
}

int main() {
    if (getDistro()) {
        int choice;
        do {
            choice = getSelectionClass2();
        } while (choice >= 11 || choice <= 0);
        printf("%d", choice);
    }
}
