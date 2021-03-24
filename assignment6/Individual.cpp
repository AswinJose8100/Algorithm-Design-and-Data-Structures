
#include "Individual.h"

Individual::Individual(int length){
	for(int j=0;j<length;j++){
		binaryString_vec.push_back("0");

	}
}
Individual::Individual(string str){
	 binaryString = str;
	 for(unsigned int j=0;j<binaryString.length();j++){
	 	if(binaryString.at(j)=='0')
	 		binaryString_vec.push_back("0");
	 	else if(binaryString.at(j)=='1')
	 		binaryString_vec.push_back("1");
	 }
}
string Individual::getString(){
	string result="";
	for(unsigned int j=0; j<binaryString_vec.size();j++){
		result=result+binaryString_vec.at(j);
	}
	return result;
}
int Individual::getBit(int pos){
	return std::stoi(binaryString_vec.at(pos));
}
void Individual::flipBit(int pos){
	if(binaryString_vec.at(pos)=="1")
		binaryString_vec.at(pos)="0";
	else
		binaryString_vec.at(pos)="1";
}
int Individual::getMaxOnes(){
	int continuous = 0, largest = 0;
    for(unsigned int j=0; j<binaryString_vec.size();j++){
    	while((j<binaryString_vec.size()) && binaryString_vec.at(j)=="1"){
    		continuous++;
    		if(largest<continuous)
    			largest=continuous;
    		j++;
    	}
    	continuous=0;
    }
    return largest;
}
int Individual::getLength(){
	return binaryString_vec.size();
}
