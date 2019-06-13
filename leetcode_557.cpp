//
// Created by qongs on 2019/6/13.
//

public:
string reverseWords(string s) {
    string result;
    string::size_type begin_index = 0;
    for(string::size_type i = 0; i < s.size(); ++i){
        if(std::isspace(s[i])){
            string::size_type count= i - begin_index;
            for(string::size_type j= 1;j <= count; j++){
                result += s[i-j];
            }
            result += " ";
            begin_index = i+1;
        }

    }


    string::size_type count= s.size() - begin_index;
    for(string::size_type j= 1;j <= count; j++){
        result += s[s.size()-j];
    }

    return result;
}

/*
 * 总结：1.未在原有字符串中进行修改，浪费空间
 *      2. 由于1中存在的问题，导致判断逻辑混乱，难以读懂
 *
 * */

};
