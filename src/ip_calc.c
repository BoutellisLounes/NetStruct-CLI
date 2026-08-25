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

void print_network_info(int cidr, char const *IP) {
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
    
    int ip1,ip2,ip3,ip4;

    // Extract the 4 Bytes of the enterred IPv4 adress
    sscanf(IP, "%d.%d.%d.%d", &ip1, &ip2, &ip3, &ip4);
     
    // Calculate the Network adress with the Bitwise AND (&)
    // Compare each IP adress byte with its correspondant byte of the mask adress

    int network1 = x & ip1;
    int network2 = y & ip2;
    int network3 = z & ip3;
    int network4 = d & ip4;

    printf("The network adress is : %d.%d.%d.%d\n", network1, network2, network3, network4);

    int Broadcast_1 = ip1 | (~x & 0xFF);
    int Broadcast_2 = ip2 | (~y & 0xFF);
    int Broadcast_3 = ip3 | (~z & 0XFF);
    int Broadcast_4 = ip4 | (~d & 0xFF);

    printf("The broadcast adress is : %d.%d.%d.%d\n", Broadcast_1,Broadcast_2,Broadcast_3,Broadcast_4);
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
            print_network_info(cidr, ip_adress);
        }

    } else {
        printf("\n[ERROR] The entered IP adress : %s is invalid\n(Example valid format : '192.168.1.1')\n", ip_adress);
    }
}