#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

int main(void) {
  struct stat bob;

  time_t curTime = time(NULL);
  
  int result = stat("average.c", &bob);
  if(result == -1) {
    perror("stat");
  }

  printf("%ld\n", curTime - bob.st_atime);
}
