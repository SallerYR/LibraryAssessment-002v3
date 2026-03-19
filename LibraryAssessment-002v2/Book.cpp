#include "Book.h"

// Assign values to all book attributes
void Book::setBookDetails(string t, string a, string i, bool av, string d)
{
    title = t;
    author = a;
    isbn = i;
    availability = av;
    dateAdded = d;
}

// Display one book's details
void Book::displayBookDetails()
{
    cout << title << "\t\t"
        << author << "\t\t"
        << isbn << "\t\t"
        << (availability ? "Available" : "Borrowed") << "\t\t"
        << dateAdded << endl;
}

// Borrow the book only if it is available
bool Book::borrowBook()
{
    if (availability)
    {
        availability = false;
        return true;
    }
    return false;
}

// Return the book and mark it as available
void Book::returnBook()
{
    availability = true;
}

// Return the ISBN of the book
string Book::getISBN()
{
    return isbn;
}

// Return the availability status
bool Book::isAvailable()
{
    return availability;
}