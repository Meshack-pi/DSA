#include <iostream>
using namespace std;
int main(){
    //String compression
    char chars[]={'a','a','b','b','c'};
    vector<string> s;
    //For each group of consecutive repeating characters in chars
    //If the group's length is 1 then append to s
    //otherwise append the character followed by group length
    //Compressed string shouldn't be returned separately but instead stored in the 
    int n = sizeof(chars)/sizeof(chars[0]);
    int read = 0;
    int write =0;
    while(read<n){
        char current_char = chars[read];
        int count =0;
        while(read<n && chars[read]==current_char){
            read++;
            count++;
        }
        chars[write++] = current_char;
        if(count>1){
            string count_str = to_string(count);
            for (char c : count_str){
                chars[write++] =c;
            }
        }
    }
    
    return 0;
}