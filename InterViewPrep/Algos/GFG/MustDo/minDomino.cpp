/*https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/submissions/
22-08-2020 11:36:17
Input: A = [2,1,2,4,2,2], B = [5,2,6,2,3,2]
Output: 2
Explanation: 
The first figure represents the dominoes as given by A and B: before we do any rotations.
If we rotate the second and fourth dominoes, we can make every value in the top row equal to 2, as indicated by the second figure.

Input: A = [3,5,1,2,3], B = [3,6,3,3,4]
Output: -1
Explanation: 
In this case, it is not possible to rotate the dominoes to make one row of values equal.*/

//https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/discuss/252242/JavaC%2B%2BPython-Different-Ideas

class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int countA[7] = {0};
        int countB[7] = {0};
        int same[7] = {0};
        for(int i=0;i<A.size();i++){
            countA[A[i]]++;
            countB[B[i]]++;
            if(A[i] == B[i]) same[A[i]]++;
        }
        for(int i=1;i<7;i++){
            if(countA[i]+countB[i]-same[i] == A.size()){
                return A.size() - max(countA[i],countB[i]);
            }
        }
        return -1;
    }
};