/*https://practice.geeksforgeeks.org/problems/binary-array-sorting5355/1
15-08-2020 15:24:12
*/

vector<int> SortBinaryArray(vector<int> binArray)
{
    // Your code goes here
    int low = 0;
    int high = binArray.size()-1;
    while(low<high){
        while(binArray[low]!=1){
            low++;
        }
        while(binArray[high]!=0){
            high--;
        }
        if(low<high){
            swap(binArray[low],binArray[high]);
            // low++;
            // high--;
        }

    }
    return binArray;
}
