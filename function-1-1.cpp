#include <iostream>
 using namespace std;

 int *array_pad(int *vals, int len){

    int *pv = new int[len+2];
    

    for(int i = 0; i < len; i++){
       cout <<" "<< *(pv+i);
       pv[i++] = vals[i];
       if(i==0){
        pv[i++] == vals[i];
       }

       if(i == (len-1)){
        pv[len+1] = vals[len-1];
       }
    }
    
    cout << endl;

    for(int i=0;i<len+2;i++){
    cout<<pv[i]<<" ";
    }
     cout<<endl;
    

    return pv;
 }