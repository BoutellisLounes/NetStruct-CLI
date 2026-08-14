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

#include <stdio.h>
#include "../include/ip_calc.h"

void calc_ip_adress(void) {
    // Declare an array of 16 characters to hold the string
    char ip_adress[16]; 
    
    printf("\n--- Enter an IPv4 adress: ");
    
    // Use %15s to prevent the user from typing more than 15 characters (Security!)
    scanf("%15s", ip_adress); 
    
    printf("--- Checking whether it is valid or not ... ---\n");

    // the checking logic point using the precedent logical function
    if( is_ip_adress_valid(ip_adress) ) {
        printf("SUCCESS : The entered IP Adress : %s is valid\n", ip_adress);
    } else {
        printf("\nERROR : The entered IP adress : %s is invalid\n(Example valid format : '192.168.1.1')\n", ip_adress);
    }
}
