#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
#define N 8



void OutputArr(int A[N][N])
{

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

// Check if the move is available
int isSafe(int x, int y, int A[N][N])
{
	if(x >= 0 &&
	   y >= 0 &&
	   x < N &&
	   y < N &&
	   A[x][y] == -1) // If the square is still not visited
		return 1;
	return 0;
}

int BackTrack(int sol[N][N], int xMove[N], int yMove[N], int x, int y,
	int Move)
{
	int k, next_x, next_y;
	if(Move == N * N){
		return true;
	}

	// Try all next moves
	for(k = 0; k < N; k++){
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if(isSafe(next_x, next_y, sol)){
			sol[next_x][next_y] = Move;
			if(BackTrack(sol, xMove, yMove, next_x, next_y, Move + 1) == true){
				return true;
			}
			else // Backtrack, mark that the path is fail
				sol[next_x][next_y] = -1;
		}
	}
	return false;
}

bool Solve()
{
	int sol[N][N];

	// Set up the "board"
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			sol[i][j] = -1;
		}
	}

	// Square that the Knight can move to
	int xMove[8] = {2, -2, -1, 1, -2,  2,  1, -1};
	int yMove[8] = {1,  1,  2, 2, -1, -1, -2, -2};

	// Where the knight starts
	sol[0][0] = 0;

	if(BackTrack(sol, xMove, yMove, 0, 0, 1) == false){
		cout << "No solution." << endl;
		return false;
	}
	else{
		OutputArr(sol);
	}
	return true;
}

int main()
{
	Solve();
    getchar();
	return 0;
}
