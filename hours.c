// convert seconds to hours/minutes/seconds
#include <stdio.h>
int main(void) {
  puts("input the seconds: ");
  long total_seconds;
  scanf("%ld", &total_seconds);
  long hours = total_seconds / 3600;
  long minutes = total_seconds % 3600 / 60;
  long seconds = total_seconds - (minutes * 60) - (hours * 3600);

  printf("%ld:%ld:%ld\n", hours, minutes, seconds);
}
