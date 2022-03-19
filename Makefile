CXX=g++
CXXFLAGS=-Wall -Wextra -Werror -pedantic -std=c++17 -O3 -g
LDFLAGS=$(CXXFLAGS)
OBJ=$(SRC:.cc=.o)

# if not working use: -D_POSIX_C_SOURCE=199309L

all:  benchmarking

benchmarking: benchmarking.o 
	$(CXX) $(LDFLAGS) -o $@ $^

%.o: %.cc %.hh
	$(CXX) $(CXXFLAGS) $(OPTFLAGS) -c -o $@ $<

clean:
	rm -rf *.o benchmarking