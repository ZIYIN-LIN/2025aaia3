//week10-2.cpp(埃程程キА羱)
//LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total=0;//羱常癬ㄓ
        int N=salary.size();//羆ΤN
        int M=salary[0],m=salary[0];//ゑ程
        for (int i=0;i<N;i++){//ゑ程
            total +=salary[i];
            if(salary[i]>M) M=salary[i];
            if(salary[i]<m) m=salary[i];
        }
        return(total-M-m)/(N-2);//埃2程 程
    }
};
