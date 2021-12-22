#include <iostream>					/*cin、cout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*呼叫容器中的項目res[i]*/ 

using namespace std;				/*省略打std*/ 

int main()
{
	
	vector<string> res;				/*宣告一個字串容器，用來存放最終分割後的內容*/ 
    string base;					/*宣告一個字串，用來輸入原始內容*/ 
    string words;					/*宣告一個字串，用來暫存讀取到的原始內容，並輸入到res內*/ 
    vector<string>::iterator n;		/*宣告一個字串容器n，它可被用來作迭代*/ 
    vector<string> word; 			/*宣告一個字串容器 word，用來跟res比較相同的單字*/ 
    string w;						/*宣告一個字串w，用來輸入要找的字，並存進字串容器word裡*/ 
    
	getline(cin, base);				/*讀取輸入的整行字串在base*/ 
    stringstream input(base);		/*把input宣告成一個stringstream讓它可以用作輸出和輸入,再把base的字符串讀取進input*/ 

    while(input>>words)			    /*當我把input輸入到words中(這是肯定句)*/ 
        res.push_back(words);		/*把字串words放進容器的最後*/ 
        
	res.resize(20);					/*把容器的容量設定在可放20個元素的空間，超過就刪除*/ 
	
    for(int i=0;i<res.size();i++)   /*從第一項開始,判斷不超過容器的容量,再從下一項開始*/
	{ 
        cout<<res[i]<<endl;			/*印出容器的內容*/ 
    }
	
    cin >> w;						/*輸入word的內容，用來輸入進word字串容器*/ 
    word.push_back(w);				/*將w裡輸入的單字，一個個輸入進字串容器word)*/ 

 	for(int i = 0; i < res.size() ; i++)							    /*數字 i 從零開始,直到如果i小於res的項目數不為真時停止,否則i就+1*/ 
    {
        n = find(word.begin(),word.end(),res[i]);						/*字串容器迭代器n = 從字串容器word從頭到尾找到，有字串容器res中的項目*/ 
        if(n != word.end())												/*如果 n 不等於字串容器word的最後一項為真時*/ 
        {
           cout<<"The positions "<< i <<" of the  found ";				/*印出位置*/
		   cout<< res[i]<< " words in the original sentence." << endl;	/*印出項目*/
    	}
    }
    return 0;
}
