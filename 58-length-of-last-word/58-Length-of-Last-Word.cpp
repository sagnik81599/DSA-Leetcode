class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length()-1;

        int count =0 ;

        while(i>= 0 && s[i] == ' ' ){ //reomve extra space last length
         i--;
         
       }

       while(i>=0 && s[i] != ' '){ //count length 
        count++;
        i--;
       }

       return count;
   
        } 
};