#include<bits/stdc++.h>
using namespace std;
 vector<int> spiralOrder(vector<vector<int>>& matrix)
     {
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        vector<int>ans;
        while(count<total){
            //This  loop traverse in the first ROW
            for(int index=startingCol;count<total && index<=endingCol;index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            //This loop traverse in the Last Column
            for(int index=startingRow;count<total &&index<=endingRow;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
        
            endingCol--;
        //This loop traverse in the last ROW
        for(int index=endingCol;count<total &&index>=startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        //This is the last loop which traverse in the first column
        for(int index=endingRow;count<total &&index>=startingRow;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
        }
        return ans;

    }
int main(){
   vector<vector<int>> vect{
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
 vector<int>result=spiralOrder(vect);
   for(int i=0; i<result.size(); i++){
    cout<<result[i]<< " ";
   }
   cout<<endl;
    return 0;
}