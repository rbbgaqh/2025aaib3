///week11-2.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        ///int total=0;
        double total=0;
        int M=salary[0],m=salary[0];
        for(int i=0;i<salary.size();i++){
            total += salary[i];
            if(salary[i] >M) M =salary[i];//更大的
            if(salary[i] <m) m =salary[i];//更小的
        }
        return (total-M-m)/(salary.size()-2);
    }
};
