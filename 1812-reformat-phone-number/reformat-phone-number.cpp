class Solution {
public:
    string reformatNumber(string number) {
        for(int i=0;i<number.size();){
            if( (number[i]==' ') || (number[i]=='-')){
                number.erase(i,1);
            }
            else{
                i++;
            }
        }
        int n=number.size();
        int i=0;
        while(n-i >4){
            number.insert(i+3,1,'-');
            i+=4;
            n++;
        }
        if(n-i == 4){
            number.insert(i+2,1,'-');
        }
        return number;
    }
};