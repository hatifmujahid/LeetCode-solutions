int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int size=0;
        int max = 0;
        for(int i=0;i<s.size();i++){
            size=0;
            for(int j=i;j<s.size();j++){
                if(m[s[j]]!=0){
                    if(max<size){
                        swap(max,size);
                    }
                    size = 0;
                    break;
                }
                else if(m[s[j]]==0){
                    m[s[j]]++;
                    size++;
                }
            }
            if(max<size){
                swap(max,size);
            }
            m.clear();
        }
        if(max<size){
            swap(max,size);
        }
        return max;
    }
