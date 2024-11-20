#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
	//make unordered map
	unordered_map<string, int> hashmap;
	
	//create elements
	hashmap.insert({"fortnite", 5});
	hashmap["sigma"] = 15;
	
	//access specific element
	cout << "number of sigma: " << hashmap["sigma"] << "\n";
	
	//output the entire map
	for(const auto& pair : hashmap){
		cout << "key: " << pair.first << ", value: " << pair.second << "\n";
	}
	
	//search for element, if exists output first statement, if not output second
	if(hashmap.find("beta") != hashmap.end()){
		cout << "beta does exist\n";
	}else{
		cout << "beta doesn't exist\n";
	}
	
	//erase element
	hashmap.erase("fortnite");
}
