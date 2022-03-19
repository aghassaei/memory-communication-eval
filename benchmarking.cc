/* implimentation (sp) for the benchmarking program */

#include <iostream>
#include "time.h"
#include "benchmarking.hh"
// make a char vector of length n 
// should get step function

 size_t size, iters, counter;
  struct timespec start, stop;
  double time_elapsed, mean_time;
  //num_t checksum;

  // timing loop
  clock_gettime(CLOCK_MONOTONIC, start);

  clock_gettime(CLOCK_MONOTONIC, stop);

  // compute mean time per coordiante, in ns
  time_elapsed =
      (stop.tv_sec - start.tv_sec) * 1e6 + (stop.tv_nsec - start.tv_nsec) / 1e3;
  mean_time = time_elapsed / (size * iters);

unsigned long get_measurements(unsigned long N){

	char* buffer = new char[argc];
	TIME = 0;
	for (auto i =0; i<iters; i++){
	//make rand_array of size fetches/loop
	//put random ints into rand_array
	//start the clock
	for (int i=0; i<FPL; i++){
		int offset = rand_array[i];
		volatile int x = buffer[offset];
	}
	//stop clock
	TIME = TIME + //the latency you just computed
}
return TIME/FPL;
}

// argc is N
int main(unsigned long argc){
	measurement = get_measurements(argc);
	//print n, then measurement


	return 0;
}