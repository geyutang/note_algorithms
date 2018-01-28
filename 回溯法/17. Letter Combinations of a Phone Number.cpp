class Solution {
private:
     map<char, string> phone_map;
    void Helper(string& digits, int i, string& temp, vector<string>& ans){
        if(i == digits.size()){
            ans.push_back(temp);
        }else{
            string str = phone_map[digits[i]];
            for(int j = 0; j< str.size(); j++){
                temp += str[j];
                Helper(digits, i+1, temp, ans);
                temp.pop_back();
            }
        }


    }
public:
    vector<string> letterCombinations(string digits) {
        phone_map['2'] = "abc";
        phone_map['3'] = "def";
        phone_map['4'] = "ghi";
        phone_map['5'] = "jkl";
        phone_map['6'] = "mno";
        phone_map['7'] = "pqrs";
        phone_map['8'] = "tuv";
        phone_map['9'] = "wxyz";
        vector<string> ans;
        int size = digits.size();
        string temp = "";
        if(size <=0){
            return vector<string>();
        }
        Helper(digits, 0, temp, ans);
        return ans;
    }

};
