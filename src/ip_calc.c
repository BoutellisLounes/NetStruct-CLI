#include <stdio.h>
#include "../include/ip_calc.h"

int is_ip_adress_valid(const char *IP) {
    int a, b, c, d;
    char extra;

    int count = sscanf(IP, "%d.%d.%d.%d%c", &a, &b, &c, &d, &extra);

    if (count == 4) {
        if ((a >= 0 && a <= 255) && (b >= 0 && b <= 255) &&
            (c >= 0 && c <= 255) && (d >= 0 && d <= 255)) {
            return 1;
        }
    }
    return 0;
}

void print_subnet_mask(int cidr) {
    unsigned int mask;

    // Handle edge case to prevent C from crashing on a 32-bit shift
    if (cidr == 0) {
        mask = 0; 
    } else {
        mask = 0xFFFFFFFF << (32 - cidr);
    }

    // Extract the 4 octets
    int x = (mask >> 24) & 0xFF;
    int y = (mask >> 16) & 0xFF;
    int z = (mask >> 8) & 0xFF;
    int d = mask & 0xFF;

    printf("The Subnet Mask is : %d.%d.%d.%d\n", x, y, z, d);
}

void calc_ip_adress(void) {
    char ip_adress[16]; 
    int cidr;
    
    printf("\n--- Enter an IPv4 adress: ");
    scanf("%15s", ip_adress); 
    
    if (is_ip_adress_valid(ip_adress)) {
        printf("[SUCCESS] The entered IP Adress : %s is valid\n", ip_adress);
        
        // Ask for CIDR only if the IP is valid
        printf("Enter the CIDR prefix (0-32) : ");
        scanf("%d", &cidr);

        if (cidr < 0 || cidr > 32) {
            printf("[ERROR] The entered slash number is invalid!\n");
        } else {
            print_subnet_mask(cidr);
        }

    } else {
        printf("\n[ERROR] The entered IP adress : %s is invalid\n(Example valid format : '192.168.1.1')\n", ip_adress);
    }
}