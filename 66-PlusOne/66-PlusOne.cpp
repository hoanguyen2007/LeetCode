// Last updated: 2/2/2026, 11:18:11 PM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int adder=1;
        for (int i=digits.size()-1;i>=0;i--){ 
            if (digits[i]==9 && adder==1) {digits[i]=0; adder=1;}
            else if (digits[i]!=9) {digits[i]=digits[i]+adder;
            adder = 0;
            }
        }
        if (adder==1) {digits.insert(digits.begin(),1);}
        return digits;
    }
};