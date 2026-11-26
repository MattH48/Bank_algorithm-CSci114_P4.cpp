/* This is programming assignment CSci114_P4.cpp
	How to run:
	g++ CSci114_P4.cpp
	MacOS/Linux: ./a.out N M
	Windows Cygwin: ./a.exe N M
*/
#include <cstdio.h>
#include <cstdlib.h>
#include <thread>
#include <mutex>
#include <fstream>
#define max_threads 15
#define max_capacity 10

void is_safe() {
	/*Checks if the process request is in a safe state.
	Then moves to the bankers_algo function to complete the request going back to main.*/
}
void possible_deadlock() {
	/* Checks if resource will cause a possible deadlock issue
	Skips if the request will cause a deadlock and has the request wait
	Until it is able to be completed.
	*/
}
void bankers_algo(int N, int M) {
	/* 
	 * Banker's algorithm logic will go here.
	 * Need to read some more to build this.
	 * */
}
int main(int argc, char** argv) {
	/*
	1. Checks cmd line arguments
	2. Does file i/o opening and closing the file
	3. Moving the values into a 2d array
	4. Creates a thread for each process
	5. Then moves to the functions
	*/
	if(argc < 2) {
		printf("Insufficient amount of command line arguments.\n");
		exit(1);
	}
	int N, int M;
	std::thread threads[max_threads][max_capacity];
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
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			inFile >> threads[N][M];
		}
	}
	inFile.close();
	for(int i = 0; i < N; i++) {
		threads[i] = thread(bankers_algo, N, M);
	}
	for(int i = 0; i < N; i++) {
		thread[i].join;
	}
	
	printf("Program has finished.\n");
	return 0;
}
