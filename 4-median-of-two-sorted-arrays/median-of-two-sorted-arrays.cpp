class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) { 
        int s1 = num1.size();
        int s2 = num2.size();
        int y= s1+s2;

        for(int i=0;i<s2;i++){
            num1.push_back(num2[i]);
        }
        sort(num1.begin(),num1.end());
        int am=num1.size();
        if(am%2==0){
            float x=(num1[am/2]+num1[(am/2)-1])/2.0;
            return x;
        }
        else{
            return num1[am/2];
        }

        return 0;

    }
};