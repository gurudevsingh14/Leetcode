class Solution {
public:
    string intToRoman(int n) {
        string ans="";
       while(n>0)
       {
           if(n>=1000){
               n=n-1000;
               ans+="M";
           }else if(n>=900&&n<1000){
               n=n-900;
               ans+="CM";
           }else if(n>=500&&n<900){
               n=n-500;
               ans+="D";
           }else if(n>=400&&n<500){
               n=n-400;
               ans+="CD";
           }else if(n>=100&&n<400){
               n=n-100;
               ans+="C";
           }else if(n>=90&&n<100){
               n=n-90;
               ans+="XC";
           }else if(n>=50&&n<90){
               n=n-50;
               ans+="L";
           }else if(n>=40&&n<50){
               n=n-40;
               ans+="XL";
           }else if(n>=10&&n<40){
               n=n-10;
               ans+="X";
           }else if(n==9){
               n=n-9;
               ans+="IX";
           }else if(n>=5&&n<9){
               n=n-5;
               ans+="V";
           }else if(n==4){
               n=n-4;
               ans+="IV";
           }else if(n>=1&&n<4){
               n=n-1;
               ans+="I";
           }
       }
        return ans;
    }
};