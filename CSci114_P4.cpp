#include <cstdio.h>
#include <cstdlib.h>
#include <thread>
#include <mutex>
#include <fstream>
#define max_threads 15
#define max_capacity 10

void bankers_algo(int N, int M) {
	/* 
	 * Banker's algorithm logic will go here.
	 * Need to read some more to build this.
	 * */
}
int main(int argc, char** argv) {
	if(argc < 2) {
		printf("Insufficient amount of command line arguments.\n");
		exit(1);
	}
	int N, int M;
	int capacity[max_capacity];
	std::thread threads[max_threads];
	N = atoi([1]);
	M = atoi([1]);
	std::ifstream inFile;
	inFile.open("requests-3.txt");
	if(inFile.isopen()) {
		printf("Request file has successfully been opened.\n");
	}
	else {
		printf("Request file has failed to be opened.\n");
		exit(1);
	}
	if(N > max_threads) {
		printf("Number of threads went outside of the max limit.\n");
		exit(1);
	}
	if(M > max_capacity) {
		printf("Resource request is over the max capacity allowed.\n");
		exit(1);
	}
	for(int i = 0; i < N; i++) {
		threads[i] = thread(bankers_algo, N, M);
	}
	for(int i = 0; i < N; i++) {
		thread[i].join;
	}
	
	printf("Program has finished.\n");
	return 0;
}
