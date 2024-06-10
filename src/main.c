#include <stdio.h>
#include "headers/consts.h"

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

int main() {
    if (getDistro()) {
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
        }
    }
}