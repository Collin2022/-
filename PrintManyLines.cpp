#include <bits/stdc++.h>
using namespace std;

// output path: ./out.cpp
// ver: 1.0
//
// Add Commands
// |- :cls     clean all
// |- :undo    undo
//
// made by Phoenix

int main(int argc, char *argv[]){
	string a[100000];
	int cnt=0;
	ofstream fout("out.cpp");
	cout << "       ####   #  #  ###   #### #    #   ####  #    #" << endl;
	cout << "      #   #  #  #  #  #  #     # #  #    #     #  #" << endl;
	cout << "     ####   ####  #  #  ####  #   # #   #       #" << endl;
	cout << "    #      #  #  #  #  ##    #     #   #      #  #" << endl;
	cout << "   #      #  #   ###  ####  #      # ####    #   #" << endl;
	cout << endl << endl;
	cout << "加入我们 JOIN US!   https://www.luogu.com.cn/team/82669#main" << endl;
	cout << "版本号 VERSION: 1.0" << endl;
	system("pause");
	while(1){
		cout << cnt + 1 << " |";
		getline(cin, a[cnt]);
		if(a[cnt] == "-1"){
			system("cls");
			fout << "// made by Phoenix" << endl;
			fout << "// ver: 1.0" << endl;
			fout << "#include<bits/stdc++.h>" << endl;
			fout << "using namespace std;" << endl;
			fout << "int main(){" << endl;
			for(int i=0; i<cnt; i++){
				fout << "    cout << \"" << a[i] << "\" << endl;" << endl;
			}
			fout << "    return 0;" << endl;
			fout << "}" << endl;
			cout << "文件生成完毕！ FILE WRITE COMPLIE!";
			break;
		} else if (a[cnt] == ":undo"){
			cnt --;
			system("cls");
			for(int i=0; i<cnt; i++){
				cout << cnt + 1 << " |" << a[cnt] << endl;
			}
		} else if (a[cnt] == ":cls"){
			cnt = 0;
			system("cls");
		}
		cnt += 1;
	}
}
