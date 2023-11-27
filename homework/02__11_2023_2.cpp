#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
};

void addBook(vector<Book>& books) {
    Book book;
    cout << "Введите название книги: ";
    cin.ignore(); // Очистка буфера ввода перед считыванием строки
    getline(cin, book.title);
    cout << "Введите автора книги: ";
    getline(cin, book.author);
    cout << "Введите номер ISBN книги: ";
    getline(cin, book.isbn);
    books.push_back(book);
    cout << "Книга успешно добавлена!" << endl;
}

void removeBook(vector<Book>& books) {
    if (books.empty()) {
        cout << "Библиотека пуста!" << endl;
        return;
    }
    string isbn;
    cout << "Введите номер ISBN книги, которую нужно удалить: ";
    cin >> isbn;
    for (int i = 0; i < books.size(); i++) {
        if (books[i].isbn == isbn) {
            books.erase(books.begin() + i);
            cout << "Книга успешно удалена!" << endl;
            return;
        }
    }
    cout << "Книга с таким номером ISBN не найдена!" << endl;
}

void viewBooks(const vector<Book>& books) {
    if (books.empty()) {
        cout << "Библиотека пуста!" << endl;
        return;
    }
    for (const Book& book : books) {
        cout << "Название: " << book.title << endl;
        cout << "Автор: " << book.author << endl;
        cout << "Номер ISBN: " << book.isbn << endl;
        cout << endl;
    }
}

void saveBooks(const vector<Book>& books) {
    ofstream fout("books.txt");
    for (const Book& book : books) {
        fout << book.title << endl;
        fout << book.author << endl;
        fout << book.isbn << endl;
    }
    fout.close();
}

void loadBooks(vector<Book>& books) {
    ifstream fin("books.txt");
    if (fin.fail()) {
        cout << "Не удалось открыть файл!" << endl;
        return;
    }
    Book book;
    while (getline(fin, book.title)) {
        getline(fin, book.author);
        getline(fin, book.isbn);
        books.push_back(book);
    }
    fin.close();
}

int main() {
    vector<Book> books;
    loadBooks(books);
    
    int choice;
    while (true) {
        cout << "Выберите действие:" << endl;
        cout << "1. Добавить книгу" << endl;
        cout << "2. Удалить книгу" << endl;
        cout << "3. Просмотреть список книг" << endl;
        cout << "4. Выйти" << endl;
        cin >> choice;
        
        switch (choice) {
            case 1:
                addBook(books);
                saveBooks(books);
                break;
            case 2:
                removeBook(books);
                saveBooks(books);
                break;
            case 3:
                viewBooks(books);
                break;
            case 4:
                saveBooks(books);
                return 0;
            default:
                cout << "Некорректный выбор! Попробуйте еще раз." << endl;
        }
        
        cout << endl;
    }
}
