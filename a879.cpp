#include <iostream>
using namespace std;
int main() {
    int total=0,times,insidetimes,range1;
    int duckX[1001],duckY[1001],centerX,centerY;
    cin>>times;
    for(int i=0;i<times;i++){
        cin>>insidetimes>>range1;
        for(int g=0;g<insidetimes;g++){
            cin>>duckX[g]>>duckY[g];
        }
        cin>>centerX>>centerY; 
        for(int h=0;h<insidetimes;h++){
            int XX=(duckX[h]-centerX),YY=(duckY[h]-centerY);
            int target1=XX*XX+YY*YY;
            if(target1<=(range1)*(range1)){
                total++;
            }
        }
        cout<<total<<endl;
        total=0;
    }
}
