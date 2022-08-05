#include <stdio.h>
#include <time.h>
using namespace std;
#define ITERATION_TIME 100000
int main()
{
int n = 0;
clock_t start = clock(); // save start time
for (int i = 0; i < ITERATION_TIME; ++i) {
for (int j = 0; j < ITERATION_TIME; ++j)
n++;
}
clock_t end = clock(); // save end time
// Print measured time
// Unit: second
// Dividing a count of clock ticks by this expression yields
// the number of seconds.
printf("Time: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
return 0;
}
