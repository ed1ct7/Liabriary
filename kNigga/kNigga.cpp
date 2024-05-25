#include <iostream>
#include <string>


using namespace std;

class User {
public: 
    void interface() {
        bool isWorking = true;
        while (isWorking) {
            int a;
            cout << "menu" << endl;
            cin >> a;
            switch (a) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                isWorking = false;
                break;
            }
        }
    }
private:
    class kNigga {
    public:
        kNigga() {
            cout << "Input name" << endl;
            cin >> this->name;
            cout << "Input author" << endl;
            cin >> this->author;
            cout << "Input dataPublished" << endl;
            cin >> this->dataPublished;
            cout << "Input ISBN" << endl;
            cin >> this->ISBN;
        }

    private:
        string name;
        string author;
        int dataPublished;
        string ISBN;
    };
};

int main()
{

    return 0;
}
