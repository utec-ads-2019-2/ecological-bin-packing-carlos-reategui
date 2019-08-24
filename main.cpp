#include <iostream>
#include <string>
#include <limits.h>

int main() {
    unsigned int b[3], g[3], c[3];
    
    while(scanf("%u %u %u %u %u %u %u %u %u", &b[0], &g[0], &c[0], &b[1], &g[1], &c[1], &b[2], &g[2], &c[2]) != EOF) {
        std::string output, bins[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};;
        unsigned int movements[6], min = INT_MAX, bin = 0;
        movements[0] = b[1] + b[2] + c[0] + c[2] + g[0] + g[1];
        movements[1] = b[1] + b[2] + g[0] + g[2] + c[0] + c[1];
        movements[2] = c[1] + c[2] + b[0] + b[2] + g[0] + g[1];
        movements[3] = c[1] + c[2] + g[0] + g[2] + b[0] + b[1];
        movements[4] = g[1] + g[2] + b[0] + b[2] + c[0] + c[1];
        movements[5] = g[1] + g[2] + c[0] + c[2] + b[0] + b[1];
        
        for(unsigned int i = 0; i < 6; i++) {
            if(movements[i] < min) {
                min = movements[i];
                bin = i;
            }
        }
        
        std::cout << bins[bin] << " " << min << std::endl;
    }
    return 0;
}
