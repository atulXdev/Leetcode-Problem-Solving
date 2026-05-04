// Last updated: 04/05/2026, 23:32:12
class Solution {
public:
    string reverseWords(string s) {
     vector<string> arr;
     string temp="";
//adding all words in vector avoiding space
     for(char ch:s){
        if(ch!=' '){
            temp+=ch;
        }
        else{
            if(!temp.empty()){
                arr.push_back(temp);
                temp="";
            }
        }
     }
     if(!temp.empty()){
        arr.push_back(temp);
     }
     //reversing the words of vector
     int i=0;
     int j=arr.size()-1;
     while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
     }

     //adding space between the words
     string result="";
     for(int i=0;i<arr.size();i++){
        if(i!=arr.size()-1){
            result+=arr[i];
            result+=" ";
        }
        else{
            result+=arr[i];
        }
     }

     return result;
        
    }
};