/*The following libraries have been included in the code for it to 
support the functionalities like input / output / string manipulation
/ */
#include<iostream>
#include<string.h>

using namespace std;

int day=1, month=1;

struct itemNode {
    string name;
    int quantity, id;
    double price;
    itemNode* link;
};
itemNode* itemHead = NULL;

struct customerNode {
    string name;
    int id, date, month;
    customerNode* link;
};
customerNode* customerFront = NULL;
customerNode* customerRear = NULL;

struct orderNode {
    int id, quantity, customerId, day, month;
    orderNode* link;
};
orderNode* orderTop = NULL;

void insertFoodItems(int id, string name, /*int quantity,*/ double price);
int customerQueue(string name, int date, int month);
void orderStack(int id, int quantity, int customerId);
void takeOrder();

void insertFoodItems(int id, string name, /*int quantity,*/ double price) {
    itemNode* temp = new itemNode();

    if(itemHead == NULL) {                  //check if list is empty
        temp -> id = id;
        temp -> name = name;
        //temp -> quantity = quantity;
        temp -> price = price;
        itemHead = temp;
    } else {
        itemNode* temp1 = itemHead;
        while(temp1 -> link != NULL) {      //search for last item in the inventory list
            temp1 = temp1 -> link;
        }
        temp -> id = id;
        temp -> name = name;
        //temp -> quantity = quantity;
        temp -> price = price;
        temp -> link = NULL;
        temp1 -> link = temp;
    }
}

int customerQueue(string name, int date, int month) {
    int id;
    customerNode* temp = new customerNode();
    temp -> name = name;
    temp -> date = date;
    temp -> month = month;

    if(customerFront == NULL && customerRear == NULL) {
        temp -> id = 1;
        customerFront = customerRear = temp;
    } else {
        temp -> id = customerRear -> id + 1;
        temp -> link = NULL;
        customerRear -> link = temp;
        customerRear = temp;
    }
    return temp -> id;
}

void orderStack(int id, int quantity, int customerId) {
    orderNode* temp = new orderNode();
    temp -> id = id;

    //temp -> quantity = quantity;

    temp -> customerId = customerId;
    temp -> day = day;
    temp -> month = month;

    temp -> link = orderTop;
    orderTop = temp;
}

void takeOrder() {
    string name;
    int id, date, month, quantity, n, customerId;
    double cashTotal=0;

    //for(int i=0; i<1; i++) 

    cout << "Customer Name: ";
    cin >> name;
    customerId = customerQueue(name,date,month);

    cout << "---------- INVENTORY ----------" << endl;      //show current inventory
    itemNode* temp1 = itemHead;
    while(temp1 != NULL) 
    {
        //temp1 = temp1 -> link;

        //cout << "ID: " << temp1 -> id << "\nName: " << temp1 -> name << "\nQuantity: " << temp1 -> quantity << "\nPrice/Unit: " << temp1 -> price <<"tk\n" << endl;
        
        cout << "ID: " << temp1 -> id << "\nName: " << temp1 -> name << "\nPrice/Unit: " << temp1 -> price <<"tk\n" << endl;
        temp1 = temp1 -> link;
    }
    cout << "------------------------------\nHow many orders?" << endl;     //the number of items to be ordered
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Item ID: ";
        cin >> id;
        cout << "Quantity: ";
        cin >> quantity;
        cout << endl;
        itemNode* temp2 = itemHead;
        while(temp2 -> id != id) {
            temp2 = temp2 -> link;
        }
        cashTotal += quantity * temp2 -> price;
        orderStack(id, quantity, customerId);
    }
    cout << "Total amount to be paid:  " << cashTotal << "tk\n" <<endl;
}

int main()
{
    int x;

    insertFoodItems(1, "Burger", /*20,*/ 50.0);
    insertFoodItems(2, "Sandwich", /*10,*/ 35.0);
    insertFoodItems(3, "Pizza", /*15,*/ 75.50);

    while(1) {
        cout << "1. Place Order\n2. Change Date ( Current:"<< day << "/" << month <<" )\n3. Generate Report\n4. Quit" <<endl;
        cin >> x;
        switch(x) {
            case 1: takeOrder();
                    break;
            case 2: cout << "Enter Day & Month: " << endl;
                    cin >> day >> month;
                    break;
            case 3: break;                          //put file code here

            case 4: exit(1);
                    break;
            default: printf("Wrong input!!!/n");
                    break;
        }
        
        //REMOVE COMMENT TO DISPLAY STACK

        orderNode* temp1 = orderTop;
        while(temp1 != NULL) {
            cout << "Id: " << temp1 -> id << "\nQuantity: " << temp1 -> quantity << "\nCusId: " << temp1 -> customerId << endl;
            temp1 = temp1 -> link;
        }

    }
    return 0;
}




