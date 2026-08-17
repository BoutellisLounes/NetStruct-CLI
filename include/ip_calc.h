#ifndef ip_calc_h
#define ip_calc_h

// Check whatever the enterred string is a valid IPv4 adress or no ( ex : 111.55.87.255)
// Return 1 if it is valid, 0 else
int is_ip_adress_valid(const char *IP);
// Interactive procedure to enter an IP adress and analyse it 
void calc_ip_adress(void);
// A function that takes the CIDR prefix as an integer and prints the subnet mask.
void print_subnet_mask(int CIDR);
#endif
