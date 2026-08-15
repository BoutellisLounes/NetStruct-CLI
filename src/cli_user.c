#include <stdio.h>
#include "../include/cli_user.h"
#include "../include/ip_calc.h"

void display_menu(void) {
    int answer;
    do{
        printf("Enter : 1 : 'Network Calculator', 2 : 'Exit' :");
        scanf("%d", &answer);

        switch (answer){
            case 1:
                calc_ip_adress();
                break;
            case 2:
                printf("Goodbye!");
                break;
            default:
                printf("Error : Invalid choice !");
                break;
        }
    } while (answer != 2);
}

