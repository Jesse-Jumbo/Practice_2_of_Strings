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
#include <iostream>					/*cin�Bcout*/ 
#include <string>					/*string*/ 
#include <sstream>					/*stringstream*/
#include <vector>					/*vector*/
#include <algorithm>				/*�I�s�e����������*/ 

using namespace std;

int main(){
	
	vector<string> res;				/*�ŧi�@�Ӧr��e���A�ΨӦs��̲פ��Ϋ᪺���e*/ 
    string base;					/*�ŧi�@�Ӧr��A�Ψӿ�J��l���e*/ 
    string words;					/*�ŧi�@�Ӧr��A�ΨӼȦsŪ���쪺��l���e*/ 
    vector<string>::iterator n;		/*�ŧi�@�Ӧr��e��n�A���i�Q�Ψӧ@���N*/ 
    vector<string> word; 			/*�ŧi�@�Ӧr��e�� word�A�ΨӤ���ۦP����r*/ 
    string w;						/*�ŧi�@�Ӧr��w�A�Ψӿ�J�æs�i�r��e��word��*/ 
    
	getline(cin, base);				/*Ū����J�����r��bbase*/ 
    stringstream input(base);		/*��input�ŧi���@��stringstream�����i�H�Χ@��X�M��J,�A��base���r�Ŧ�Ū���iinput*/ 

    while(input>>words)			    /*��ڧ�input��J��words��(�o�O�֩w�y)*/ 
        res.push_back(words);		/*��r��words��i�e�����̫�*/ 

    for(int i=0;i<res.size();i++){	/*�q�Ĥ@���}�l,�P�_���W�L�e�����e�q,�A�q�U�@���}�l*/ 
        cout<<res[i]<<endl;			/*�L�X�e�������e*/ 
    }

    cin >> w;						/*��Jword�����e�A�Ψӿ�J�iword�r��e��*/ 
    word.push_back(w);				/*�Nw�̿�J����r�A�@�ӭӿ�J�i�r��e��word)*/ 

 	for(int i = 0; i < res.size(); i++)									/*�Ʀr i �q�s�}�l,����p�Gi�p��res�����ؼƤ����u�ɰ���,�_�hi�N+1*/ 
    {
        n = find(word.begin(),word.end(),res[i]);						/*�r��e�����N��n = �q�r��e��word�q�Y������A���r��e��res��������*/ 
        if(n != word.end())												/*�p�G n ������r��e��word���̫�@�����u��*/ 
        {
            int index = distance(word.begin(),n);						/*���index���p��r��e��word�����}�l��n����Z��*/ 
            cout<<"The positions "<< index <<" of the  found "<< res[i]<< " words in the original sentence." << endl;	/*�L�X��m�M����*/ 
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
