#include <iostream>
#include <algorithm>
#include <cstring>
struct Book {
    std::string title;
    std::string author;
    std::string publisher;
    std::string genre;
};

void editBook(Book& book) {
    std::cout << "Enter new title: ";
    std::cin.ignore();
    std::getline(std::cin, book.title);
    
    std::cout << "Enter new author: ";
    std::getline(std::cin, book.author);
    
    std::cout << "Enter new publisher: ";
    std::getline(std::cin, book.publisher);
    
    std::cout << "Enter new genre: ";
    std::getline(std::cin, book.genre);
}

void printBooks(const Book books[], int size) {
    std::cout << "Books in the library:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Title: " << books[i].title << std::endl;
        std::cout << "Author: " << books[i].author << std::endl;
        std::cout << "Publisher: " << books[i].publisher << std::endl;
        std::cout << "Genre: " << books[i].genre << std::endl;
        std::cout << std::endl;
    }
}

void searchByAuthor(const Book books[], int size, const std::string& author) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (books[i].author == author) {
            std::cout << "Book found:" << std::endl;
            std::cout << "Title: " << books[i].title << std::endl;
            std::cout << "Author: " << books[i].author << std::endl;
            std::cout << "Publisher: " << books[i].publisher << std::endl;
            std::cout << "Genre: " << books[i].genre << std::endl;
            std::cout << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No books found by author: " << author << std::endl;
    }
}

void searchByTitle(const Book books[], int size, const std::string& title) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (books[i].title == title) {
            std::cout << "Book found:" << std::endl;
            std::cout << "Title: " << books[i].title << std::endl;
            std::cout << "Author: " << books[i].author << std::endl;
            std::cout << "Publisher: " << books[i].publisher << std::endl;
            std::cout << "Genre: " << books[i].genre << std::endl;
            std::cout << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "No book found with title: " << title << std::endl;
    }
}

bool compareByTitle(const Book& book1, const Book& book2) {
    return book1.title < book2.title;
}

bool compareByAuthor(const Book& book1, const Book& book2) {
    return book1.author < book2.author;
}

bool compareByPublisher(const Book& book1, const Book& book2) {
    return book1.publisher < book2.publisher;
}

void sortByTitle(Book books[], int size) {
    std::sort(books, books + size, compareByTitle);
    std::cout << "Library sorted by title" << std::endl;
}

void sortByAuthor(Book books[], int size) {
    std::sort(books, books + size, compareByAuthor);
    std::cout << "Library sorted by author" << std::endl;
}

void sortByPublisher(Book books[], int size) {
    std::sort(books, books + size, compareByPublisher);
    std::cout << "Library sorted by publisher" << std::endl;
}

int main() {
    Book library[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Enter book " << i + 1 << " details:" << std::endl;
        std::cout << "Title: ";
        std::getline(std::cin, library[i].title);
        std::cout << "Author: ";
        std::getline(std::cin, library[i].author);
        std::cout << "Publisher: ";
        std::getline(std::cin, library[i].publisher);
        std::cout << "Genre: ";
        std::getline(std::cin, library[i].genre);
        std::cout << std::endl;
    }
    
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Edit book" << std::endl;
    std::cout << "2. Print all books" << std::endl;
    std::cout << "3. Search by author" << std::endl;
    std::cout << "4. Search by title" << std::endl;
    std::cout << "5. Sort by title"   << std::endl;

    std::cout << "6. Sort by author" << std::endl;
    std::cout << "7. Sort by publisher" << std::endl;
    
    int option;
    std::cin >> option;
    
    switch(option) {
        case 1: {
            std::cout << "Enter book index to edit (0-9): ";
            int index;
            std::cin >> index;
            if (index >= 0 && index < 10) {
                editBook(library[index]);
            } else {
                std::cout << "Invalid book index" << std::endl;
            }
            break;
        }
        case 2: {
            printBooks(library, 10);
            break;
        }
        case 3: {
            std::cout << "Enter author name: ";
            std::string author;
            std::cin.ignore();
            std::getline(std::cin, author);
            searchByAuthor(library, 10, author);
            break;
        }
        case 4: {
            std::cout << "Enter book title: ";
            std::string title;
            std::cin.ignore();
            std::getline(std::cin, title);
            searchByTitle(library, 10, title);
            break;
        }
        case 5: {
            sortByTitle(library, 10);
            printBooks(library, 10);
            break;
        }
        case 6: {
            sortByAuthor(library, 10);
            printBooks(library, 10);
            break;
        }
        case 7: {
            sortByPublisher(library, 10);
            printBooks(library, 10);
            break;
        }
        default:
            std::cout << "Invalid option" << std::endl;
    }
    
    return 0;
}