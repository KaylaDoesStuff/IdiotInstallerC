#include <stdio.h>
#include "headers/consts.h"

int getDistro() {
    int found = 0;
    for (size_t i = 0; i < sizeof(pManagersPlacement) / sizeof(pManagersPlacement[0]); i++) {
        FILE *fp = fopen(pManagersPlacement[i], "r");
        if (fp != NULL) {
            printf("Detected derivitive of %s.\n", pManagers[i]);
            fclose(fp);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Unknown Distro.\n");
    }
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

int main() {
    getDistro();
    int choice = getSelection();
    if (choice == 1) {
        for (size_t i = 0; i < sizeof(fileManagers) / sizeof(fileManagers[0]); i++) {
            int num = i;
            printf("%d> %s\n", num + 1, fileManagers[num]);
        }
    } else if (choice == 2) {
        for (size_t i = 0; i < sizeof(browsers) / sizeof(browsers[0]); i++) {
            int num = i;
            printf("%d> %s\n", num + 1, browsers[num]);
        }
    }
}