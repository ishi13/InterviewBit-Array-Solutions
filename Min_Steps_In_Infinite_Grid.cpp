/*
You are in an infinite 2D grid where you can move in any of the 8 directions :

 (x,y) to 
    (x+1, y), 
    (x - 1, y), 
    (x, y+1), 
    (x, y-1), 
    (x-1, y-1), 
    (x+1,y+1), 
    (x-1,y+1), 
    (x+1,y-1) 
You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.

Input :

Given two integer arrays A and B, where A[i] is x coordinate and B[i] is y coordinate of ith point respectively.
Output :

Return an Integer, i.e minimum number of steps.
Example :

Input : [(0, 0), (1, 1), (1, 2)]
Output : 2
*/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int res = 0;
    for(int i = 0; i < A.size() - 1; i++){
        if(abs(A[i] - A[i+1]) <= abs(B[i] - B[i+1]))
         res += abs(B[i] - B[i+1]);
        else{
            res +=abs(A[i] - A[i+1]);
        }
    }
    return res;
}
