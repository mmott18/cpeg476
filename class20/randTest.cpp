#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "unistd.h"

void rand_guess(unsigned int seed, int n_output) {
  static size_t MAX = 1000;
  int r[MAX];
  int i;

  r[0] = seed;
  for (i=1; i<31; i++) {
    r[i] = (16807LL * r[i-1]) % 2147483647;
    if (r[i] < 0) {
      r[i] += 2147483647;
    }
  }
  for (i=31; i<34; i++) {
    r[i] = r[i-31];
  }
  for (i=34; i<344; i++) {
    r[i] = r[i-31] + r[i-3];
  }
  for (i=344; i<344+n_output; i++) {
    r[i] = r[i-31] + r[i-3];
    printf("%u\n", ((unsigned int) r[i]) >> 1);
  }
}

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    
    unsigned int seed = time(NULL);
    srand(seed);
    int trials = 5;
    int i=0;
    for(; i < trials; i++){
      printf("%u\n", rand());
    }
    
    printf("\nNow My Turn:\n");
    rand_guess(seed, trials);
    
    printf("\nsame for random()\n");
    srand(seed);
    for(i = 0; i < trials; i++){
      printf("%ld\n", random());
    }

    fflush(stdout);
    usleep(1);
    
    return 0;
} 
