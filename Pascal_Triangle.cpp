/*
Given numRows, generate the first numRows of Pascal’s triangle.

Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

Example:

Given numRows = 5,

Return

[
     [1],
     [1,1],
     [1,2,1],
     [1,3,3,1],
     [1,4,6,4,1]
]
*/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> res;
    vector<int> v;
    if(A == 0)
    return res;
    v.push_back(1); 
    res.push_back(v);
    
     if(A == 1)
    return res;
    v.push_back(1); // now it contains 1 1
    res.push_back(v);
    
    if(A == 2)
    return res;
    
    for(int line = 2 ; line < A ; line++){
        vector<int> temp(line + 1, 1); // next row with i+1 elements and each assigned to 1
        for(int i = 1 ; i < line ; i++){
                temp[i] = res[line - 1][i - 1] + res[line- 1][i];
            }
            res.push_back(temp);
    }
    return res;
}


