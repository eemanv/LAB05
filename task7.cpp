#include<iostream>
#include<cmath>
using namespace std;

float calculateFill(int, int, float);
int calculatePipeContribution(int, float, float);

main()
{

	int vol;
	int pipe1, pipe2, pipe1_percent, pipe2_percent;
	int overflow;
	float pool_filled, pool_filled_percent;
	float hour;

	cout << "Enter the Volume of pool in liters=> ";
	cin >> vol;
	cout << "Enter the Flow rate of Pipe one=> ";
	cin >> pipe1;
	cout << "Enter the Flow rate of Pipe two=> ";
	cin >> pipe2;
	cout << "Enter the amount of Hours absent=> ";
	cin >> hour;
	
	pool_filled = calculateFill(pipe1,pipe2,hour);
	pipe1_percent = calculatePipeContribution(pipe1,pool_filled,hour);
	pipe2_percent = calculatePipeContribution(pipe2,pool_filled,hour);

	pool_filled_percent = (pool_filled/vol) * 100;
	
	
	if(pool_filled<=vol)
	{
	
		cout << "The pool is " << pool_filled_percent << "% full. "; 
		cout << "Pipe 1: " << pipe1_percent << "%. ";
		cout << "Pipe 2: " << pipe2_percent << "%.";
	
	}
	if(pool_filled>vol)
	{
		
		overflow = pool_filled - vol;
		cout << "For " << hour << " hours the pool overflows with " << overflow << " liters.";

	}

}

float calculateFill(int p1, int p2, float hour)
{

	int totalFlow, pool_filled_percent;
	float pf;

	totalFlow = p1 + p2;
	pf = totalFlow * hour;

	return pf; 

}

int calculatePipeContribution(int pipe, float pool_filled, float hour)
{

	int pipeCon, pipe_percent;

	pipeCon = pipe * hour;
	pipe_percent = (pipeCon / pool_filled) * 100;

	return pipe_percent;

}