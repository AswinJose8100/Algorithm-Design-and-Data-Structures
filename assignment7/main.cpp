#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <string>

int main(){
	int arr[100],arr_size=0;
	string func="";
	int para1=0,para2=0;
	for(int j=0;j<100;j++)
		arr[j]=0;

    int num=0;
    string usr_inpt="";
    getline(cin,usr_inpt);
    while(isalpha(usr_inpt.at(num))==0)
    	num=num+1;
    string parse=usr_inpt.substr(0,num);
    string param=usr_inpt.substr(num,usr_inpt.size());
    num=0;
    for(unsigned int j=0;j<parse.size();j++){
    	if(isdigit(parse.at(j))!=0){
    		while(isdigit(parse.at(j))!=0){
    			arr[num]*=10;
    			arr[num]=arr[num]+usr_inpt.at(j)-'0';
    			j=j+1;
    		}
    		num++;
    		arr_size++;
    	}
    } 
    int condition=1;
    for(unsigned int j=0;j<param.size();j++){
    	if((isalpha(param.at(j))!=0) && (isspace(param.at(j))==0))
    		func+=param.at(j);
    	else if(isdigit(param.at(j))!=0 || param.at(j)=='-'){
    		if(condition==1){
    			if(param.at(j)=='-'){
    				para1+=(param.at(j+1)-'0');
    				para1*=-1;
    				if((j<param.size()) && isspace(param.at(j+2))!=0){
    					condition=2;
    					j++;
    				}
    			}
    			else{
    				para1*=10;
    				para1+=param.at(j)-'0';
    				if((j<param.size()-1) && isspace(param.at(j+1))!=0)
    					condition=2;
    			}
    		}
    		else if(condition==2){
    			para2*=10;
    			para2+=param.at(j)-'0';
    		}

    	}

    }
    LinkedList link_list(arr,arr_size);
    if(func=="AF")
    	link_list.addFront(para1);
    if(func=="AE")
    	link_list.addEnd(para1);
    if(func=="AP")
    	link_list.addAtPosition(para1,para2);
    if(func=="S")
    	link_list.search(para1);
    if(func=="DF")
    	link_list.deleteFront();
    if(func=="DE")
    	link_list.deleteEnd();
    if(func=="DP")
    	link_list.deletePosition(para1);
    if(func=="GI")
    	link_list.getItem(para1);
    link_list.printItems();
    return 0;  
}