#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	std::cout << "Enter what to append to the text file: " << std::endl;
	string input;
	std::getline(std::cin,input);
	ofstream of("CSC450_CT5_mod5.txt", std::ios_base::app);
	if(of.is_open()){
		of << input;
	}
	of.close();

	ifstream ifs("CSC450_CT5_mod5.txt", std::ios::in);
	ofstream ofs("CSC450-mod5-reverse.txt", std::ios::out);
	if(ifs.is_open()){
		string s;
		for(char ch; ifs.get(ch);){
			s.push_back(ch);
		}
		string reversed(s.rbegin(), s.rend());
		for(char ch: reversed){
			ofs.put(ch);
		}
	}
	ifs.close();
	ofs.close();
}

