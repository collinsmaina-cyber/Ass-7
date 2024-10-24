
#include <stdio.h>
#include <string.h>

// Define the structure
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    
    struct book myBook;
    strcpy (myBook.title,"Introduction to C Programming");
    strcpy (myBook.author,"John Smith");
    myBook.publication_year= 2022;
    strcpy (myBook.ISBN, "9780131103627");
    myBook.price=49.99;
    
    // Print the initialized values
    printf("Book Details (Initialized):\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.f\n", myBook.price);

    // Prompt the user to enter the book details
    struct book userBook;

    printf("\nEnter Book Details:\n");

    printf("Title: ");
    fgets(userBook.title, sizeof(userBook.title), stdin);
    userBook.title[strcspn(userBook.title, "\n")] = 0; 

    printf("Author: ");
    scanf("%s \n",userBook.author); 

    printf("Publication Year: ");
    scanf("%d\n",userBook.publication_year);
    

    printf("ISBN: ");
    scanf("%s\n",userBook.ISBN);

    printf("Price: ");
    scanf("%f", &userBook.price);

    // Print the user-entered values
    printf("\nBook Details (User Input):\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.f\n", userBook.price);
    
    return 0;
}