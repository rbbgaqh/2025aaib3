// week07-3.cpp
// 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: 要把資料,放到陣列a裡面
        for(string op : operations){ //Part01: C++進階迴圈
            // cout << "現在讀到了: " << op << "\n"; //Part02:看他是誰,等一下刪掉
            // Part03: 一堆if判斷要怎麼模擬
            if(op[0]=='C'){ //清除最後一位
                a.pop_back(); // 丟掉最後一個 // Part06: pop_back()
            } else if (op[0]=='D'){ //最後一位變兩倍在加到最後面
                a.push_back( a.back() * 2); // 乘兩倍 Part06: back()
            } else if (op[0]=='+'){ //還不知道,等一下再看
                int temp = a.back(); //先抄最後一台車的車牌
                a.pop_back(); //把最後一台車開走
                int temp2 = a.back(); //可以抄倒數第2台車的車牌
                a.push_back(temp); //把剛剛的車停回來
                a.push_back( temp + temp2 ); //把最後兩個加起來,在加到最後面
            } else{ // 數字的字串,要加到最後面
                a.push_back( stoi(op) ); // Part04: .push_back()
            }
        }
        int ans=0;
        for (int now : a){ // Part05: C++ 進階迴圈 要看陣列裡的值
        ans += now; //cout << now << " "; //Part02:看他是誰,等一下刪掉
        }
    return ans; //return 0; // 先隨便return 等一下再寫真的答案
    }
};
