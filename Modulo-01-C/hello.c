#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string firstName;
    string lastName;
    firstName = get_string("whats your first name ");
    lastName = get_string("whats your last name ");
    printf("Hello, %s %s\n", firstName, lastName);
    return 0;
}