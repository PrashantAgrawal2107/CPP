// LEETCODE -->> 451. Sort Characters by Frequency-->>

// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
// Return the sorted string. If there are multiple answers, return any of them.


class Solution {
public:
    static bool myCmp(pair<char,int> p1 , pair<char,int> p2)
    {
        return p1.second>p2.second;
    }

    string frequencySort(string s) {
        char c = 'a';
        vector<pair<char,int>> v;
        for(int i=0;i<26;i++){
            v.push_back({c,0});
            c++;
        }
        c='A';
        for(int i=0;i<26;i++){
            v.push_back({c,0});
            c++;
        }
        c='0';
        for(int i=0;i<=9;i++){
            v.push_back({c,0});
            c++;
        }
        for(auto x : s){
            for(int i=0;i<v.size();i++){
                if(x==v[i].first) v[i].second++;
            }
        }
        sort(v.begin(), v.end() , myCmp);
        string ans="";
        for(auto x : v){
            for(int i=0;i<x.second;i++){
                ans+=x.first;
            }
        }
        return ans;

    }
};
