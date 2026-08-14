#include<stdio.h>
#include "../include/ip_calc.h"

int is_ip_adress_valid(const char *IP){
    int a,b,c,d;
    char extra; // Used to catch invalid trailing characters

    // Set up format specifiers to look for integers separated by dots
    int count = sscanf(IP, "%d.%d.%d.%d%c", &a, &b, &c, &d, &extra);

    // Ensure exactly 4 integers were successfully read
    if(count == 4){
        // Check whether the fourth parts of IP adress are between the right bounds (between 0 and 255)
        if ( ( a>=0 && a<=255 ) && ( b>=0 && b<=255 )
            && ( c>=0 && c<=255 ) && ( d>=0 && d<=255 )){

            return 1;

        }
    }
    return 0;
    
}