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

    /*
     * 总结：1.仅仅按着题目意思写代码逻辑，没能深刻挖掘题目背后的含义，导致逻辑判断复杂。要学会转化问题
     * 该题目中，可将判断字符串中 1.全部为大写 2.全部为小写 3.首字母为大写，其余为小写，这三种情况 转化为判断字符串中大写
     * 字母的数量，如果等于0，则是情况2，等于字符串长度，则是情况1，等于1，且第一个字母为大写，则是情况3，其他的则属于其余情况，
     * 所以要学会在已有问题上进一步思考，灵活转化问题。
     *
     * 样例：
     *  bool detectCapitalUse(string word) {
        string::size_type length = word.size();
        string::size_type upper_count = 0;
        for(char c:word){
            if(isupper(c))
                upper_count++;
        }

        return (upper_count == 0) || (upper_count == length) || ((upper_count == 1) && isupper(word[0]));

    }
     *
     */
};
