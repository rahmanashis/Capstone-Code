#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Simple code analyzer for debugging C programs
int main() {
    printf("=== CODE ANALYZER FOR SMART GARAGE MANAGEMENT SYSTEM ===\n\n");
    
    // Check if main files exist
    FILE *files[] = {
        fopen("final code.c", "r"),
        fopen("Capstone_project_final_code.c", "r"),
        fopen("user_data.txt", "r"),
        fopen("inventory.txt", "r"),
        fopen("orders.txt", "r"),
        fopen("mechanics.txt", "r")
    };
    
    const char *filenames[] = {
        "final code.c",
        "Capstone_project_final_code.c", 
        "user_data.txt",
        "inventory.txt",
        "orders.txt",
        "mechanics.txt"
    };
    
    printf("FILE EXISTENCE CHECK:\n");
    printf("=====================\n");
    for (int i = 0; i < 6; i++) {
        if (files[i]) {
            printf("✓ %s - EXISTS\n", filenames[i]);
            fclose(files[i]);
        } else {
            printf("✗ %s - MISSING\n", filenames[i]);
        }
    }
    
    printf("\nCOMMON ISSUES TO CHECK:\n");
    printf("======================\n");
    printf("1. Missing data files (check above)\n");
    printf("2. File permissions (Windows UAC)\n");
    printf("3. Buffer overflow in scanf operations\n");
    printf("4. Memory leaks in dynamic allocation\n");
    printf("5. Uninitialized variables\n");
    printf("6. Infinite loops in menu systems\n");
    printf("7. File handle not closed properly\n");
    
    printf("\nSUGGESTED DEBUG STEPS:\n");
    printf("=====================\n");
    printf("1. Compile with debugging flags: gcc -g -Wall -o debug final_code.c\n");
    printf("2. Run with GDB: gdb ./debug\n");
    printf("3. Set breakpoints at critical functions\n");
    printf("4. Check file operations return values\n");
    printf("5. Add printf statements for flow tracing\n");
    
    printf("\nPOTENTIAL FIXES:\n");
    printf("===============\n");
    printf("1. Add error checking for all file operations\n");
    printf("2. Use fgets() instead of scanf() for strings\n");
    printf("3. Initialize all variables before use\n");
    printf("4. Add bounds checking for arrays\n");
    printf("5. Handle EOF conditions properly\n");
    
    return 0;
}
