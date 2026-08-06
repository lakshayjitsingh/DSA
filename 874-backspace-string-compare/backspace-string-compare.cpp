class Solution {
public:
bool backspaceCompare(string s, string t) {
auto process=[](const string& str){
string res;
for(char c:str) { if(c=='#'){if(!res.empty())res.pop_back();} else res+=c; }
return res;
};
return process(s)==process(t);
}
};