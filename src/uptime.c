/*
    ######################################################
    ##            SHORK UTILITY - SHORKFETCH            ##
    ######################################################
    ## Functions and data relating to handle the        ##
    ## operating system's name                          ##
    ######################################################
    ## Licence: GNU GENERAL PUBLIC LICENSE Version 3    ##
    ######################################################
    ## Kali (links.sharktastica.co.uk)                  ##
    ######################################################
*/



#include "globals.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>



/**
 * @return String containing uptime or "unknown" if undetermined/error
 */
char *getUptime(void)
{
    char *uptime = malloc(128);
    if (!uptime) return strdup("unknown");
    uptime[0] = '\0'; 

    FILE *fStream = fopen("/proc/uptime", "r");
    if (fStream)
    {
        double seconds;
        if (fscanf(fStream, "%lf", &seconds) == 1)
        {
            int sec = (int)seconds;
            int days = sec / 86400;
            int hours = (sec % 86400) / 3600;
            int minutes = (sec % 3600) / 60;

            if (!COMPACT)
            {
                const char *dayUnit = (days == 1) ? "day" : "days";
                const char *hourUnit = (hours == 1) ? "hour" : "hours";
                const char *minUnit = (minutes == 1) ? "minute" : "minutes";

                if (days > 0)
                    snprintf(uptime, 128, "%d %s, %d %s, %d %s", days, dayUnit, hours, hourUnit, minutes, minUnit);
                else
                    snprintf(uptime, 128, "%d %s, %d %s", hours, hourUnit, minutes, minUnit);
            }
            else
            {
                if (days > 0)
                    snprintf(uptime, 128, "%d:%d:%d", days, hours, minutes);
                else
                    snprintf(uptime, 128, "%d:%d", hours, minutes);
            }
        }
        fclose(fStream);
    }
    else strcpy(uptime, "unknown");

    return uptime;
}
