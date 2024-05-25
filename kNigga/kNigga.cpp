#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {
public: 
    void interface() {
        int menu = 0;
        bool isWorking = true;
        cout << "Options" << endl;
        cout << "1: add a book" << endl;
        cout << "2: delete a book" << endl;
        cout << "3: find a book by the name" << endl;
        cout << "4: show all books" << endl;
        cout << "5: close a prog" << endl;
        while (isWorking) 
        {          
            cout << "Your option: ";
            cin >> menu;
            cout << endl;
            switch (menu) {
            case 1:
                addNewBook();
                cout << "book added" << endl << endl;
                break;
            case 2:
                deleteBook();
                break;
            case 3:
                findByName();
                break;
            case 4:
                showAllBooks();
                break;
            case 5:
                isWorking = false;
                break;
            }
        }
    }
    void showAllBooks() {
        for (size_t i = 0; i < bookCount; i++)
        {
            cout << i+1 << ". \t" << arr[i].getName() << endl;
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
        it = arr.begin() + numToDelete;
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
        arr[pupupu].coutEverething();
    }
private:
    class book {
    public:
        string getName(){
            return this->name;
        }
        book() {
            cout << "Input name: ";
            cin >> this->name;
            cout << "Input author: ";
            cin >> this->author;
            cout << "Input dataPublished: ";
            cin >> this->dataPublished;
            cout << "Input ISBN: ";
            cin >> this->ISBN;
        }
        void coutEverething() {
            cout << "Name: " << this->name << endl;
            cout << "Author: " << this->author << endl;
            cout << "DataPublished: " << this->dataPublished << endl;
            cout << "ISBN: " << this->ISBN << endl;
        }
    private:
        string name;
        string author;
        int dataPublished;
        string ISBN;
    };
    vector<book> arr;
    int bookCount = 0;
};

int main()
{
    User a;
    a.interface();

    return 0;
}
