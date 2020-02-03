#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
  FILE *fp = fopen("pic.ppm", "w");
  fprintf(fp, "P3\n512 512\n255\n");

  for(int row = 0; row < 512; row++){
    for(int column = 0; column < 512; column++){
      fprintf(fp, "%d %d %d\n", (row/2) % 255, (column/2) % 255, 0);
    }
  }
  fclose(fp);
  return 0;
}
