class Solution {
public:
    int passwordStrength(string password) {
        int length=password.size();
        int hash[128]={0};
        int strength=0;
        for(int i=0;i<length;i++){
            
                hash[password[i]]+=1;

        }

        for(int i=0;i<128;i++){
            if(hash[i]>0){

            if(i>=97 && i<=122){
                strength += 1;

            }
            else if(i>=65 && i<=90){
                strength+=2;
            }
            else if(i>=48 && i<=57){
                strength+=3;
            }
            else if(hash[i]==hash['!'] || hash[i]==hash['@'] || hash[i]==hash['#'] || hash[i]==hash['$']   ){
                strength+=5;
            }

            }

            else{

            }


        }
        return strength;


    }
};