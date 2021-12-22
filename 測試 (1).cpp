#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int q[] = {2, 7, 1, 5, 9, 6, 8};
    int p[] = {0, 1, 2, 3, 7, 9};
    vector<int> vector2(q, q+7);
    vector<int> vector1(p, p+6);
    for(int i = 0; i < vector2.size(); i++)
    {
        vector<int>::iterator it;
        it = find(vector1.begin(),vector1.end(),vector2[i]);
        if(it != vector1.end())
        {
            int index1 = distance(vector1.begin(),it);
            cout<<"find"<<endl;
            cout<<"The element "<<vector2[i]<<"index is"<<index1<<endl;
        }
    }
    cout << "Hello World!" << endl;
    return 0;
}
#endif

#if 0
#include <iostream>					/*cin、cout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*呼叫容器中的項目*/ 

using namespace std;

int main(){
	
	vector<string> res;				/*宣告一個字串容器，用來存放最終分割後的內容*/ 
    string base;					/*宣告一個字串，用來輸入原始內容*/ 
    string words;					/*宣告一個字串，用來暫存讀取到的原始內容*/ 
    vector<string>::iterator n;		/*宣告一個字串容器n，它可被用來作迭代*/ 
    vector<string> word; 			/*宣告一個字串容器 word，用來比較相同的單字*/ 
    string w;						/*宣告一個字串w，用來輸入並存進字串容器word裡*/ 
    
	getline(cin, base);				/*讀取輸入的整行字串在base*/ 
    stringstream input(base);		/*把input宣告成一個stringstream讓它可以用作輸出和輸入,再把base的字符串讀取進input*/ 

    while(input>>words)			    /*當我把input輸入到words中(這是肯定句)*/ 
        res.push_back(words);		/*把字串words放進容器的最後*/ 

    for(int i=0;i<res.size();i++){	/*從第一項開始,判斷不超過容器的容量,再從下一項開始*/ 
        cout<<res[i]<<endl;			/*印出容器的內容*/ 
    }

    cin >> w;						/*輸入word的內容，用來輸入進word字串容器*/ 
    word.push_back(w);				/*將w裡輸入的單字，一個個輸入進字串容器word)*/ 

 	for(int i = 0; i < res.size(); i++)									/*數字 i 從零開始,直到如果i小於res的項目數不為真時停止,否則i就+1*/ 
    {
        n = find(word.begin(),word.end(),res[i]);						/*字串容器迭代器n = 從字串容器word從頭到尾找到，有字串容器res中的項目*/ 
        if(n != word.end())												/*如果 n 不等於字串容器word的最後一項為真時*/ 
        {
            int index = distance(word.begin(),n);						/*整數index為計算字串容器word首項開始到n為止的距離*/ 
            cout<<"The positions "<< index <<" of the  found "<< res[i]<< " words in the original sentence." << endl;	/*印出位置和項目*/ 
        }
    }
    return 0;
}
#endif

#if 1
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
	string a ="Hello Taiwan and Hello World!";
	string fname;
	fstream file;
	scanf("%s",fname.c_str());
	const char *f =fname.c_str();
	char *c =new char(1);
	file.open(f,ios::in);
	if(!file){
		cout<<"Can not open file!"<<endl;
	}
	else{
		for(int i=0;i<a.length();i++){
			strcpy(c,a.c_str());
		}
		file.read(c,a.length());
		file.close();
		file.open(f,ios::out|ios::trunc);
		file.write(a.c_str(),a.length());
		file.close();
		cout<<"WK1 data from file...\n"<<c<<endl;
	}
}
#endif
