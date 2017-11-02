#include "stdio.h"
#include "unistd.h"

int myrand(void) {
    int i = 0;
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);

    unsigned int randval;
    FILE *f;

    f = fopen("/dev/urandom", "r");
    fread(&randval, sizeof(randval), 1, f);
    fclose(f);
        
    printf("%u\n", randval);
    
    fflush(stdout);
    usleep(1);
    
    return 0;
} 

int main(void) {
    int i = 0;

    for(;i<10;i++){
        myrand();
    }
    return 0;
}
