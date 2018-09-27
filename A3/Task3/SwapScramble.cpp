#include "SwapScramble.h"

string SwapScramble::scramble(const string& s) {
    // string  str; 
    // int     swap_pos;
    // bool    swap_status;
    // char    c_scramble;
    // str = s;
    // swap_pos = str.length() / 2;
    // swap_status = 1;

    // if (str.length() % 2 == 0) {
    //     for (int counter = swap_pos; counter < str.length(); counter++) {
    //         if (swap_status) {
    //             c_scramble = str[counter];
    //             str[counter] = str[swap_pos - (counter - swap_pos) + 1];
    //             str[swap_pos - (counter - swap_pos) + 1] = c_scramble;
    //             swap_status = 0;
    //         }
    //         else {
    //             swap_status = 1;
    //         }
    //     }
        
    //     return (str);
    // }
    // else{
    //     for (int counter = swap_pos+1; counter < str.length(); counter++) {
    //         if (swap_status){
    //             c_scramble = str[counter];
    //             str[counter] = str[swap_pos - (counter - swap_pos)];
    //             str[swap_pos - (counter - swap_pos)] = c_scramble;
    //             swap_status = 0;
    //         } else {
    //             swap_status = 1;
    //         }
    //     }   
    //     return (str);
    // }
    int size;
    int swap_pos;
    int counter = 0;
    string str;

    swap_pos = 0;
    str = "";
    while(s[swap_pos] != '\0'){
        str += s[swap_pos];
        swap_pos++;
    }

    size = s.length();
    if(size % 2 == 0){
        counter = 0;
        swap_pos = size / 2;
        while(counter < (size / 2)){
            str[swap_pos - counter - 1] = s[swap_pos + counter];
            str[swap_pos + counter] = s[swap_pos - counter - 1];
            counter = counter + 2;
        }
    }
    else{
        counter = 0;
        swap_pos = size/2;
        while(counter < (size / 2)){
            str[swap_pos - counter - 1] = s[swap_pos + counter + 1];
            str[swap_pos + counter + 1] = s[swap_pos - counter - 1];
            counter = counter + 2;
        }
    }

    return (str);
}

string SwapScramble::unscramble(const string& s) {
    // string  str; 
    // int     swap_pos;
    // bool    swap_status;
    // char    c_scramble;
    // str = s;
    // swap_pos = str.length() / 2;
    // swap_status = 1;

    // if (str.length() % 2 == 0) {
    //     for (int counter = swap_pos; counter < str.length(); counter++) {
    //         if (swap_status) {
    //             c_scramble = str[counter];
    //             str[counter] = str[swap_pos - (counter - swap_pos) + 1];
    //             str[swap_pos - (counter - swap_pos) + 1] = c_scramble;
    //             swap_status = 0;
    //         }
    //         else {
    //             swap_status = 1;
    //         }
    //     }
        
    //     return (str);
    // }
    // else{
    //     for (int counter = swap_pos+1; counter < str.length(); counter++) {
    //         if (swap_status){
    //             c_scramble = str[counter];
    //             str[counter] = str[swap_pos - (counter - swap_pos)];
    //             str[swap_pos - (counter - swap_pos)] = c_scramble;
    //             swap_status = 0;
    //         } else {
    //             swap_status = 1;
    //         }
    //     }   
    //     return (str);
    // }

    
    string  str;
    int     size;
    int     swap_pos;
    int     counter;

    swap_pos = 0;
    str = "";
    while(s[swap_pos] != '\0'){
        str += s[swap_pos];
        swap_pos++;
    }

    size = s.length();
    if(size % 2 == 0){
        counter = 0;
        swap_pos = size / 2;
        while(counter < (size / 2)){
            str[swap_pos -counter - 1] = s[swap_pos + counter];
            str[swap_pos + counter] = s[swap_pos - counter - 1];
            counter = counter + 2;
        }
    }
    else{
        counter = 0;
        swap_pos = size / 2;
        while(counter < (size / 2)){
            str[swap_pos - counter - 1] = s[swap_pos + counter + 1];
            str[swap_pos + counter + 1] = s[swap_pos - counter - 1];
            counter = counter + 2;
        }       
    }
    return (str);
}