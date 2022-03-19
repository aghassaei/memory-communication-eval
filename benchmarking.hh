/* Header file for the benchmarking
*/ 

class Benchmark {
public: 
	using time_t = uint64_t;
	//using buffer_t = 

	// calculates the time
	time_t get_measurements() const;

private:
	const uint iters; // number of iterations
	const uint FPL; // number of fetches per loop
	time_t TIME = 0; //the actual thing we're timing

};

