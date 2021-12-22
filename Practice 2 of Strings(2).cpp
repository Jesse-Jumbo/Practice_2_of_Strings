#include <iostream>					/*cin�Bcout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*�I�s�e����������res[i]*/ 

using namespace std;				/*�ٲ���std*/ 

int main()
{
	
	vector<string> res;				/*�ŧi�@�Ӧr��e���A�ΨӦs��̲פ��Ϋ᪺���e*/ 
    string base;					/*�ŧi�@�Ӧr��A�Ψӿ�J��l���e*/ 
    string words;					/*�ŧi�@�Ӧr��A�ΨӼȦsŪ���쪺��l���e�A�ÿ�J��res��*/ 
    vector<string>::iterator n;		/*�ŧi�@�Ӧr��e��n�A���i�Q�Ψӧ@���N*/ 
    vector<string> word; 			/*�ŧi�@�Ӧr��e�� word�A�ΨӸ�res����ۦP����r*/ 
    string w;						/*�ŧi�@�Ӧr��w�A�Ψӿ�J�n�䪺�r�A�æs�i�r��e��word��*/ 
    
	getline(cin, base);				/*Ū����J�����r��bbase*/ 
    stringstream input(base);		/*��input�ŧi���@��stringstream�����i�H�Χ@��X�M��J,�A��base���r�Ŧ�Ū���iinput*/ 

    while(input>>words)			    /*��ڧ�input��J��words��(�o�O�֩w�y)*/ 
        res.push_back(words);		/*��r��words��i�e�����̫�*/ 
        
	res.resize(20);					/*��e�����e�q�]�w�b�i��20�Ӥ������Ŷ��A�W�L�N�R��*/ 
	
    for(int i=0;i<res.size();i++)   /*�q�Ĥ@���}�l,�P�_���W�L�e�����e�q,�A�q�U�@���}�l*/
	{ 
        cout<<res[i]<<endl;			/*�L�X�e�������e*/ 
    }
	
    cin >> w;						/*��Jword�����e�A�Ψӿ�J�iword�r��e��*/ 
    word.push_back(w);				/*�Nw�̿�J����r�A�@�ӭӿ�J�i�r��e��word)*/ 

 	for(int i = 0; i < res.size() ; i++)							    /*�Ʀr i �q�s�}�l,����p�Gi�p��res�����ؼƤ����u�ɰ���,�_�hi�N+1*/ 
    {
        n = find(word.begin(),word.end(),res[i]);						/*�r��e�����N��n = �q�r��e��word�q�Y������A���r��e��res��������*/ 
        if(n != word.end())												/*�p�G n ������r��e��word���̫�@�����u��*/ 
        {
           cout<<"The positions "<< i <<" of the  found ";				/*�L�X��m*/
		   cout<< res[i]<< " words in the original sentence." << endl;	/*�L�X����*/
    	}
    }
    return 0;
}
