#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
public: 
    void interface() {

    }
    void showAllBooks() {
        for (size_t i = 0; i < bookCount; i++)
        {
            cout << i << ". \t" << arr[i].getName() << endl;
        }
    }
    void addNewBook() {
        book newC;
        arr.push_back(newC);
        bookCount++;
    }
    void deleteBook() {
        cout << "Choose a book to delete" << endl;
        showAllBooks();
        int numToDelete = 0;
        cin >> numToDelete;
        
        vector<book>::iterator it;
        it = arr.begin();

        arr.erase(it);
    }
    void findByName() {
        string newBook;
        cin >> newBook;
        int pupupu = 0;
        for (int i = 0; i < bookCount; i++)
        {
            if (arr[i].getName() == newBook){
                    pupupu = i;
            }
        }
        cout << arr[pupupu].getName();
    }
private:
    class book {
    public:
        string getName(){
            return this->name;
        }
        book() {
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
    vector<book> arr;
    int bookCount;
};

int main()
{

    return 0;
}
