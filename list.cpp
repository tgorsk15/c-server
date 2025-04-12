#include "list.hpp"


void print_menu()
{
    int choice;

    std::cout << "**************\n";
    std::cout << " 1 - Print list\n";
    std::cout << " 2 - Add to List\n";
    std::cout << " 3 - Delete from list\n";
    std::cout << " 4 - Quit\n";

    std::cin >> choice;

    if (choice == 4) {

    }
    else if (choice == 2) {

    }
    else if (choice == 3) {
        delete_item();
    }
    else {
        std::cout << "Sorry choice is not valid\n";
    }
}

void delete_item()
{
    std::cout << "deleted item";
}

void add_item()
{
    std::cout << "Added New Item";
}
