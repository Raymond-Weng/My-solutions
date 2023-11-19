#include <iostream>

using namespace std;

int main()
{
    //輸入x跟n
    int x, n;
    cin >> x >> n;
    
    //設定往左右的食物數量
    int left, right;
    left = right = 0;
    
    //設定往左右最後的位置
    int leftPos, rightPos;
    leftPos = rightPos = x; //在沒有出現食物時就會在原本位置
    
    //處理每筆食物位置
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(input > x){  //在老鼠右邊
            right++;
            if(input > rightPos){   //目前走最遠位置
                rightPos = input;
            }
        }else{  //在老鼠左邊
            left++;
            if(input < leftPos){   //目前走最遠位置
                leftPos = input;
            }
        }
    }
    
    //輸出
    if(left > right){   //往左走吃比較多
        cout << left << " " << leftPos;
    }else{   //往右走吃比較多
        cout << right << " " << rightPos;
    }

    return 0;
}
