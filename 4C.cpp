#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
   int n;
   cin >> n;
   
   int temp;
   string name;
   map <string,int> dict;
   vector<string> array;
   
   for (int i=0;i<n;i++){
       string temp_name;
       cin >> temp_name;
       
       if(dict.count(temp_name) == 0){
           dict[temp_name] = 0;
           array.push_back("OK");
       }
       else{
           dict[temp_name] += 1;
           temp = dict[temp_name];
           string new_name;
           new_name = temp_name + to_string(temp);
           array.push_back(new_name);
           
       }
       
       
   }
   for (string q:array){
       cout << q <<"\n";
   }
}
