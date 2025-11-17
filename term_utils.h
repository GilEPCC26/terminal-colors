#ifndef TERM_UTILS_H
#define TERM_UTILS_H

// Color options for terminal text
typedef enum {
    DEFAULT,   // Needed for reset_text_color()
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN
} Color;

/**
 * Clears the terminal screen comp*
