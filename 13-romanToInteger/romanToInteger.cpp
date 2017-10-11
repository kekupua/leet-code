class Solution {
public:
    int romanToInt(string s) {
        map<char, int> convert;
        convert['I'] = 1;
        convert['V'] = 5;
        convert['X'] = 10;
        convert['L'] = 50;
        convert['C'] = 100;
        convert['D'] = 500;
        convert['M'] = 1000;
        stack<char> romans;
        int total = 0;
        for(int i = 0; i < s.length(); ++i){
            char current = s[i];
            if(romans.empty()) romans.push(current);
            else{
                if(convert[romans.top()] < convert[current]){
                    total += convert[current] - convert[romans.top()];
                    romans.pop();
                }
                else {
                    total += convert[romans.top()];
                    romans.pop();
                    romans.push(current);
                }
            }
        }
        if(!romans.empty()) total += convert[romans.top()];
        return total;
    }
};
