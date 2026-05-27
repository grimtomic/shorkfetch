/*
    ######################################################
    ##            SHORK UTILITY - SHORKFETCH            ##
    ######################################################
    ## ANSI escape code colour definitions              ##
    ######################################################
    ## Licence: GNU GENERAL PUBLIC LICENSE Version 3    ##
    ######################################################
    ## Kali (links.sharktastica.co.uk)                  ##
    ######################################################
*/



#include "colours.h"
#include "general.h"

#include <stdlib.h>
#include <string.h>



/**
 * Validates if the given potential accent colour option supplied matches a
 * known colour.
 * @return ANSI escape code for colour; NULL if not found
 */
char *validateColour(char *input)
{
    char *colour = NULL;

    if (strcmp(input, "black") == 0)
        colour = strdup("\033[" COL_BLACK "m");
    else if (strcmp(input, "blue") == 0)
        colour = strdup("\033[" COL_BLUE "m");
    else if (strcmp(input, "bold_blue") == 0)
        colour = strdup("\033[" COL_BOLD_BLUE "m");
    else if (strcmp(input, "bold_cyan") == 0)
        colour = strdup("\033[" COL_BOLD_CYAN "m");
    else if (strcmp(input, "bold_green") == 0)
        colour = strdup("\033[" COL_BOLD_GREEN "m");
    else if (strcmp(input, "bold_magenta") == 0)
        colour = strdup("\033[" COL_BOLD_MAGENTA "m");
    else if (strcmp(input, "bold_red") == 0)
        colour = strdup("\033[" COL_BOLD_RED "m");
    else if (strcmp(input, "bold_white") == 0)
        colour = strdup("\033[" COL_BOLD_WHITE "m");
    else if (strcmp(input, "bold_yellow") == 0)
        colour = strdup("\033[" COL_BOLD_YELLOW "m");
    else if (strcmp(input, "cyan") == 0)
        colour = strdup("\033[" COL_CYAN "m");
    else if (strcmp(input, "green") == 0)
        colour = strdup("\033[" COL_GREEN "m");
    else if (strcmp(input, "grey") == 0)
        colour = strdup("\033[" COL_GREY "m");
    else if (strcmp(input, "magenta") == 0)
        colour = strdup("\033[" COL_MAGENTA "m");
    else if (strcmp(input, "off") == 0)
        colour = strdup("");
    else if (strcmp(input, "red") == 0)
        colour = strdup("\033[" COL_RED "m");
    else if (strcmp(input, "white") == 0)
        colour = strdup("\033[" COL_WHITE "m");
    else if (strcmp(input, "yellow") == 0)
        colour = strdup("\033[" COL_YELLOW "m");

    return colour;
}
