#include <stdio.h>
#include "term_colors.h"   // Include the custom library header file

int main(void) {

    clear_screen();         // Clears the terminal screen
    
    print_divider();        // Prints a divider line

    set_color(GREEN);       // Set text color to GREEN
    printf("System Status: ONLINE\n");

    set_color(RED);         // Set text color to RED
    printf("Alert: Modular compilation in progress...\n");

    reset_color();          // Reset the text color back to default

    print_divider();        // Print one last divider line

    return 0;
}

