
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;
    int j;
    int sum_x = 0;
    int sum_0 = 0;
    bool win_x = false;
    bool win_0 = false;
    bool check_1 = false;
    char martix[3][3]={
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cin >> martix[i][j];
        }
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (martix[i][j] == 'X'){
                sum_x += 1;
            }
            else if (martix[i][j] == '0'){
                sum_0 += 1;
            }
            
        }
    }
    
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                if (martix[i][j] == '.'){
                    check_1 = true;
                }
            }
        }
    
    for (i=0;i<3;i++){
            if (martix[i][0] == 'X' && martix[i][1] == 'X' && martix[i][2] == 'X'){
                win_x = true;
            }
            else if (martix[i][0] == '0' && martix[i][1] == '0' && martix[i][2] == '0'){
                win_0 = true;
            }
        }
            
        for (j=0;j<3;j++){
            if (martix[0][j] == 'X' && martix[1][j] == 'X' && martix[2][j] == 'X'){
                win_x = true;
            }
            else if (martix[0][j] == '0' && martix[1][j] == '0' && martix[2][j] == '0'){
                win_0 = true;
            }
        }
            
        if (martix[0][2] == 'X' && martix[1][1] == 'X' && martix[2][0] == 'X'){
                win_x = true;
                
            }
        else if (martix[0][2] == '0' && martix[1][1] == '0' && martix[2][0] == '0'){
                win_0 = true;
            }
        
        if (martix[0][0] == 'X' && martix[1][1] == 'X' && martix[2][2] == 'X'){
                win_x = true;
            }
        else if (martix[0][0] == '0' && martix[1][1] == '0' && martix[2][2] == '0'){
                win_0 = true;
            }
    
    if ((sum_x < sum_0 || sum_x-sum_0 > 1)||(win_x == true and win_0 == true)){
        cout << "illegal";
    }
    else if(win_x == true and abs(sum_x-sum_0) < 1){
        cout << "illegal";
    }
    else if(win_0 == true and (sum_0 < sum_x)){
        cout << "illegal";
    }
    else if (win_x == true){
        cout << "the first player won";
    }
    else if (win_0 == true){
        cout << "the second player won";
    }
    else{
        if (check_1){
            if (sum_x>sum_0){
                cout << "second";
            }
            else if (sum_0==sum_x){
                cout << "first";
            }
            
        }
        
        if(!(check_1)){
            cout << "draw";
        }
    }
}
