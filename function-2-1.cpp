#include <iostream>
 using namespace std;

 int *array_pad(int *vals, int len){

    int *pv = new int[len+2];
    //pv = vals;
    
    
    //cout << *(pv);
    for(int i = 0; i < len; i++){
      // cout <<" "<< *(pv+i);
      //cout << vals[i];
       pv[i+1] = vals[i];
       if(i == 0){
       cout << vals[i];
        pv[0] == vals[i];
       }

       if(i == (len-1)){
        //cout << vals[len-1];