//
// Created by qongs on 2019/6/13.
//

class Solution {
public:
    string toGoatLatin(string S) {
        string result;
        string::size_type begin_index =0;
        string::size_type count =0;
        for(string::size_type i=0;i<S.size();i++){
            while(i < S.size() && S[i] != ' ') i++;
            count++;
            if(S[begin_index] == 'a' || S[begin_index] == 'e' || S[begin_index] == 'o' || S[begin_index] == 'i' || S[begin_index] == 'u' ||S[begin_index] == 'A' || S[begin_index] == 'E' || S[begin_index] == 'O' || S[begin_index] == 'I' || S[begin_index] == 'U'){
                for(;begin_index < i;begin_index++){
                    result += S[begin_index];
                }
                begin_index++;
            }else{
                char tmp = S[begin_index];
                while(++begin_index < i){
                    result += S[begin_index];
                }
                result += tmp;
                begin_index++;
            }

            result += "ma";

            for(string::size_type j=0;j<count;j++){
                result+='a';
            }
            if(i < S.size())
                result += ' ';
        }

        return result;
    }
};