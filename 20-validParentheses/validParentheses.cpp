class Solution {
public:
    bool isValid(string s) {
        stack<char> characters;
        map<char,char> map;
        map['}'] = '{';
        map[']'] = '[';
        map[')'] = '(';

        for(int i = 0; i < s.length(); ++i){
            char curr = s[i];
            if(!characters.empty()){
                if(characters.top() == map[curr]){
                    characters.pop();
                }
                else{
                    characters.push(curr);
                }
            }
            else{
                characters.push(curr);
            }
        }
        return characters.empty();
    }
};
