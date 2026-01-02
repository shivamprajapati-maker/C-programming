#include <stdio.h>

// Function to detect danger zones
void detectDangerZones(int grid[10][10], int rows, int cols) {
    int found = 0;

    printf("\n--- Danger Zone Locations ---\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                printf("Danger at Row %d, Column %d\n", i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No danger zones found.\n");
    }
}

int main() {
    int rows, cols;
    int grid[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter grid values (0 = Safe, 1 = Danger):\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    detectDangerZones(grid, rows, cols);

    return 0;
}