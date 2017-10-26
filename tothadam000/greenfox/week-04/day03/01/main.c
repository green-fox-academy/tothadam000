#include <stdio.h>
#include <stdint.h>
//TODO: Change the bits to 64
//TODO: print out the structure members

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};
int main() {
    struct Computer comp = {3.2, 8, 32};

    comp.bits = 64;

    printf( "Cpu speed : %.1f Ghz\n", comp.cpu_speed_GHz);
    printf( "Ram size : %d GB\n", comp.ram_size_GB);
    printf( "Bits : %d\n", comp.bits);

    return 0;
}

