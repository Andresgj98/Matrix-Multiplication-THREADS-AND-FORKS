#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>
#include <time.h>
 
using namespace std;
 
#define N 600
 
int mat1[N][N];
int mat2[N][N];
int res[N][N];


 
// Driver Code
int main()
{
    int i, j, k;
    int res[N][N]; // To store result
    int mat1[N][N];
    int mat2[N][N];
    
	for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
        	mat1[N][N] = rand() % 10;
        }
    }                  
 
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
        	mat2[N][N] = rand() % 10;
        }
    }    
 
 	struct timeval start;
  	struct timeval end;
  	double milisecs;
  	long seconds, useconds;
  	
 	gettimeofday(&start, 0);
 	
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    
    gettimeofday(&end, 0);
    
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
    
    
    
    
    seconds  = end.tv_sec  - start.tv_sec;
  	useconds = end.tv_usec - start.tv_usec;
  	milisecs = ((seconds) * 1000 + useconds/1000.0);
  	cout<<"Tiempo de ejecucion:\t";
  	cout<<" "<<milisecs;
	cout<<" milisegundos\n";
   

 
    return 0;
}
 
