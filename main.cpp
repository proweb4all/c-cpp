#include <iostream>
#include <cstring>
using namespace std;


class MyString
{
	public:
		MyString(){
			str = nullptr;
		}

		MyString(char *valstr){
			int length = strlen(valstr);
			this->str = new char[length + 1]; 
			for(int i = 0; i < length; i++){
				this->str[i] = valstr[i];
			}
			this->str[length] = '\0';
		}
		~MyString(){
			delete[] this->str;
		}
		MyString operator + (const MyString &other){
			MyString newStr;
			int thislen = strlen(this->str);
			int otherlen = strlen(other.str);
		
			newStr.str = new char[thislen + otherlen + 1]; 
			int i = 0;
			for (; i < thislen; i++){
				newStr.str[i] = this->str[i];
			}
			for (int j = 0; j < otherlen; j++,i++){
				newStr.str[i] = other.str[j];
			}
			newStr.str[thislen + otherlen] = '\0';
//			cout << "\n+";
//			newStr.Print();
			return newStr;
		}
		MyString& operator = (const MyString &other){
			if (this->str != nullptr){
				delete[] str;
			}
			int length = strlen(other.str);
			this->str = new char[length + 1]; 
			for(int i = 0; i < length; i++){
				this->str[i] = other.str[i];
			}
			this->str[length] = '\0';
//			cout << "\n=";
//			this->Print();
			return *this;
		}
		
		
		void Print(){
			cout << str;
		}
	private:	
		char *str;
};



int main()
{
	MyString str1;
	str1 = "Hello";
	str1.Print();
	cout << endl;
	
	MyString str2("World");
	str2.Print();
	cout << endl;

	//str2 = str1;
	//str2.Print();
	//cout << endl;
	
	MyString res;
	res = str1 + ", " + str2 + "!";
	cout << "\n--------------\n";
	res.Print();
	cout << endl;
	
	
	return 0;
}
