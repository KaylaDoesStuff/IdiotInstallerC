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

int main() {
    getDistro();
    
}