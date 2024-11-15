#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

class BaseClass{
	public:
		virtual void input() = 0;
		virtual void display() const = 0;
		virtual ~BaseClass() = default;
};

class Contact : public BaseClass{
	private:
		int cNum;
		string cName;
	public:
		void input() override {
			cout << "enter contact num: ";
			cin >> cNum;
			cout << "enter contact name: ";
			cin.ignore();
			getline(cin, cName);
		}
		void display() const override {
			cout << "contact:\n" << "number: " << cNum << endl << "name: " << cName << endl;
		}
};

int main(){
	vector<shared_ptr<BaseClass>> objs;
	
	return 0;
}
