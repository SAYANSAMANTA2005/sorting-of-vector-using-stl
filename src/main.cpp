#include<bits/stdc++.h>

using namespace std ;



int main() {

    vector<int>v= {10,30,-4,8,90};
    
    
    sort(v.begin(),v.end());//
    //sorting of vector in cpp using stl
    
    //method for printing vector element method 1
    cout<<"method 1 for printing vector element "<<endl;
   for( auto num: v){
   
   cout << " " << num<< endl;}
   
    
    cout<<"method 2 for printing vector element "<<endl;
   for( auto it=v.begin();it!=v.end();it++){
   
   cout << " " << *it << endl;}
   
   cout<<"method 3 for printing vector element "<<endl;
   for(int i=0;i<v.size();i++){
   
   cout << " " << v[i]<< endl;}
   
   
   
   
   
   
    return 0;
}