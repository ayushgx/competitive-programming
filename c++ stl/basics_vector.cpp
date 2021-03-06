#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool f(int x, int y){
    return x>y;
}
int main(){
    vector<int> A ={3,11,2,14};
    cout<<A[1]<<endl;
    sort(A.begin(),A.end());   //(NlogN)                              //sorting in the vector
    bool present = binary_search( A.begin() , A.end() , 3 ); //true   /* binary search function
    cout<<present<<endl;                                                ..
    present = binary_search( A.begin() , A.end() , 4 );    //false      binary search function
    cout<<present<<endl;                                                */
    
    A.push_back(100);                                                                 
    present = binary_search( A.begin() ,A.end() , 100);
    cout<<present<<endl;
    A.push_back(100);                       //push back function
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    /*vector<int>::iterator*/auto it = lower_bound(A.begin(),A.end(),100);  //>= 
    /*vector<int>::iterator*/auto it2 = upper_bound(A.begin(),A.end(),100); //>     //upper_bound and lower_bound shows results of the sorted array
    cout<<*it<<" "<<*it2<<endl;
    cout<< it2 - it<<endl;
    
    sort(A.begin(),A.end(),f);   //sorting in desending order
    /*
    vector<int>::iterator it3;
    for(it3 = A.begin();it3 != A.end();it3++){             
        cout<<*it3<<" ";                               //printing a vector
    }
    */
    for(int &x: A){
        x++;              //printing using reference
    }
    for(int x: A){
        cout<<x<<" ";      //printing
    }
    A.erase(v.begin()+4) //erases the fifth element from the vector
    A.erase(v.begin()+2,v.begin()+4) //erases all the element s from the third element to the fifth  element    
    
    
     return 0;
}
