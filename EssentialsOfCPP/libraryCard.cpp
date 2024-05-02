#include <iostream>
#include <format>

using std::cout;
using std::format;

struct libCard{
    char* Title;
    char* Author;
    char* Publisher;
    char* Subject;
    char* ISBN;
    int WorldCatIdentifier;
    int deweyDecimal[2];
    int yearPublished;
    int yearAcquired;
    int quantityInStock;
};
int main(int argc, char** argv){
    libCard libC {"Darkest Hour","Stephen grind","hodder","fiction","1234-1234-1234-5",1234,{234,92},1234,1500,50};
    auto* libC_ = &libC;
    cout<<format("Book Details:\n"
                 "\tName: {}\n"
                 "\tAuthor: {}\n"
                 "\tPublisher: {}\n"
                 "\tGenre: {}\n"
                 "\tISBN: {}\n"
                 "\tWorldCat Identifier: {}\n"
                 "\tDeweyDecimal value: {}.{}\n"
                 "\tYear published: {}\n"
                 "\tYear Acquired: {}\n"
                 "\tQuantity: {}\n",
                 libC_->Title,libC_->Author,libC_->Publisher,
                 libC_->Subject,libC_->ISBN,libC_->WorldCatIdentifier,
                 libC_->deweyDecimal[0],libC_->deweyDecimal[1],
                 libC_->yearPublished,libC_->yearAcquired,libC_->quantityInStock);
}
//Book Details:
//    Name: Darkest Hour
//    Author: Stephen grind
//    Publisher: hodder
//    Genre: fiction
//    ISBN: 1234-1234-1234-5
//    WorldCat Identifier: 1234
//    DeweyDecimal value: 234.92
//    Year published: 1234
//    Year Acquired: 1500
//    Quantity: 50
