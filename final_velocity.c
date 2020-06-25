// this program calculates final velocity from input
#include <stdio.h>
int main(void) {
  float initial_velocity, acceleration, time;
  puts("input initial_velocity acceleration and time");

  scanf("%f", &initial_velocity);
  scanf("%f", &acceleration);
  scanf("%f", &time);

  printf("final velocity: %f\n", initial_velocity + acceleration * time);
  printf("distance traveled: %f\n",
         initial_velocity * time + 0.5 * acceleration * time * time);
  return 0;
}
