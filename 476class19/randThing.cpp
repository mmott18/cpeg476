#include "stdio.h"
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

void print_random(){
	printf("%d\n", rand());
}

int main(void) {
    srand(1983);	
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    int i=0;
    for(; i < 10; i++){
      print_random();
    }
    fflush(stdout);
    usleep(1);
    return 0;
}
