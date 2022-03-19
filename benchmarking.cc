/* implimentation (sp) for the benchmarking program */
// use gakexy explorer mech to time the code
// what does memory subsystem look like
// create vairous working sets so that they aren't hidden to us
// array, rand pulls indicies of array
// have an array of n bytes 
// look at slides for barrior 
// mutex in c++ - does this include a barrier? 
// you can set up barriers in p thread 
// is has to wait for all threads to reach it 


// try to use this to compute size of the cache

#include <iostream>
#include "time.hh"
// make a char vector of length n 
// should get step function

 size_t size, iters, counter;
  struct timespec start, stop;
  double time_elapsed, mean_time;
  num_t checksum;

  // timing loop
  clock_gettime(CLOCK_MONOTONIC, &start);

  clock_gettime(CLOCK_MONOTONIC, &stop);

  // compute mean time per coordiante, in ns
  time_elapsed =
      (stop.tv_sec - start.tv_sec) * 1e6 + (stop.tv_nsec - start.tv_nsec) / 1e3;
  mean_time = time_elapsed / (size * iters);

void get_measurements(uint32 N){

	char* buffer = new char[argc];
	TIME = 0; // do i need to initialize this if i already have in .hh?
	for /* i in iters*/{
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
	if (argc <1){std::cerr<<"Please enter a positive integer";}
	measurement = get_measurements(argc);
	//print n, then measurement


	return 0;
}