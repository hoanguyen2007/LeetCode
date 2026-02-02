// Last updated: 2/2/2026, 11:18:19 PM
class Solution {
public:
    bool isValid(string s) {
        stack <char> openst;
        stack <char> closedst;
        
        for (char a: s){
            if (!openst.empty()){
                if (isPair(openst.top(),a))
                {
                    openst.pop();
                    continue;
                }
            }
            openst.push(a);
        }
        return openst.empty();
    }
private:
    bool isPair(char open, char closed){
        return ((open=='(' && closed==')')||
        (open=='[' && closed==']')||
        (open=='{' && closed=='}'));
    }

};