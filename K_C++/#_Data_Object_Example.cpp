#include <iostream>
#include <string>
using namespace std;

// Define a Book class
class Book {
private:
    string title;
    string author;
    int pages;

public:
    // Constructor to initialize the attributes
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
    }

    // Method to display book details
    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author << ", Pages: " << pages << endl;
    }

    // Method to set the number of pages
    void setPages(int p) {
        pages = p;
    }

    // Method to get the number of pages
    int getPages() {
        return pages;
    }
};

int main() {
    // Creating data objects of the Book class
    Book book1("1984", "George Orwell", 328);
    Book book2("To Kill a Mockingbird", "Harper Lee", 281);

    // Accessing and displaying book details using methods
    book1.displayDetails();  // Output: Title: 1984, Author: George Orwell, Pages: 328
    book2.displayDetails();  // Output: Title: To Kill a Mockingbird, Author: Harper Lee, Pages: 281

    // Modifying an attribute using a method
    book1.setPages(350);
    cout << "Updated number of pages in '1984': " << book1.getPages() << endl;  // Output: 350

    return 0;
}
