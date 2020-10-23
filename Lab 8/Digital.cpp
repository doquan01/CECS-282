#include "publication.h"
#include "Sales.h"
#include "Digital.h"
#include <iostream>

using namespace std;
//Define the functions getData to input publication, storage and three months of sales
void Digital::getData()
{
    Publication::getData();
    Sales::getData();
    cout << "\nEnter file size of digital book in MG bytes: ";
    cin >> bytes;
    return;
}

//Define the function putData to display the publication, storage and three months of sales
void Digital::putData()
{
    Publication::putData();
    Sales::putData();
    cout << "\nStorage size in MG bytes: " << bytes;
    return;
}
