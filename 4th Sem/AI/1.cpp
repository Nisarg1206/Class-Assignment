#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void giveAllSteps(vector<vector<int>> initial,vector<vector<int>>final,int si,int sj,int n){
    queue<pair<vector<vector<int>>,vector<int>>> pendingStates;
    pendingStates.push({initial,{si,sj,-2,-2}});
    
    int states = 0;
    
    while(pendingStates.size()!=0){
        vector<vector<int>> currentArray = pendingStates.front().first;
        int i = pendingStates.front().second[0];
        int j = pendingStates.front().second[1];
        int pi = pendingStates.front().second[2];
        int pj = pendingStates.front().second[3];
        
        pendingStates.pop();
        
        for(int x=0;x<n;x++){
            for(int y=0;y<n;y++){
                cout<<currentArray[x][y]<<" ";
            }
            cout<<endl;
        }
        
        cout<<endl;
        
        if(currentArray == final){
         cout<<"Final state achieved"<<endl;
         cout<<"Number of states changed "<<states<<endl;
         return ;
        }
        
        states++;
        
        vector<vector<int>> firstArray = currentArray;
        vector<vector<int>> secondArray = currentArray;
        vector<vector<int>> thirdArray = currentArray;
        vector<vector<int>> fourthArray = currentArray;
        
        if(i > 0 && i-1!=pi){
            int temp = firstArray[i][j];
            firstArray[i][j] = firstArray[i-1][j];
            firstArray[i-1][j] = temp;
            
            pendingStates.push({firstArray,{i-1,j,i,j}});
        }
        
        if(j > 0 && j-1!=pj){
            int temp = secondArray[i][j];
            secondArray[i][j] = secondArray[i][j-1];
            secondArray[i][j-1] = temp;
            
            pendingStates.push({secondArray,{i,j-1,i,j}});
        }
        
        if(i < n-1 && i+1!=pi){
            int temp = thirdArray[i][j];
            thirdArray[i][j] = thirdArray[i+1][j];
            thirdArray[i+1][j] = temp;
            
            pendingStates.push({thirdArray,{i+1,j,i,j}});
        }
        
        if(j < n-1 && j+1!=pj){
            int temp = fourthArray[i][j];
            fourthArray[i][j] = fourthArray[i][j+1];
            fourthArray[i][j+1] = temp;
            
            pendingStates.push({fourthArray,{i,j+1,i,j}});
        }
    }
}

int main(){
    int n = 3;
    vector<vector<int>> initial(n,vector<int>(n,0));
    vector<vector<int>> final(n,vector<int>(n,0));
    
    int isi,isj;
    cout<<"Enter initial state"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>initial[i][j];
        if(initial[i][j] == 0){
        isi = i;
        isj = j;
        }
      }
    }
    
    cout<<"\nEnter final state"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>final[i][j];
      }
    }
    
    cout<<"\nRunning BFS to find final state"<<endl;
    
    giveAllSteps(initial,final,isi,isj,n);
}
    


