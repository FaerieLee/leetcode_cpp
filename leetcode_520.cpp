//
// Created by qongs on 2019/6/13.
//

class Solution {
public:
    bool detectCapitalUse(string word) {
        string::size_type length = word.size();
        if(length < 2)
            return true;
        bool fisrt_alpha_status = isupper(word[0]);
        bool second_alpha_status = isupper(word[1]);
        bool leftover_alpha_status = true;

        for(auto i=2;i<word.size();i++){

            if(second_alpha_status){
                if(islower(word[i])){
                    leftover_alpha_status=false;
                    break;
                }
            }else{
                if(isupper(word[i])){
                    leftover_alpha_status=false;
                    break;
                }
            }
        }

        return leftover_alpha_status && !(!fisrt_alpha_status && second_alpha_status);

    }
};
