#ifndef TERM_UTILS_H
#define TERM_UTILS_H

// Enum for colors
typedef enum {
    DEFAULT,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN
} Color;

// Function prototypes
void clear_screen();
void set_text_color(Color c);
void reset_text_color();
void print_divider();

#endif
