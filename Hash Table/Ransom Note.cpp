class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[256]={0};
        for(int i=0;i<magazine.size();i++){
            hash[magazine[i]-'a']=hash[magazine[i]-'a']+1;
             }

        for(int j=0;j<ransomNote.size();j++){

            if(hash[ransomNote[j]-'a']>0){
                hash[ransomNote[j]-'a']--;
            }
            else{
                return false;
            }

        }
        return true;

    }
};