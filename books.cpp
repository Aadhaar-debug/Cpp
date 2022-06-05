#include<iostream>
using namespace std;

class books
{
    public:
        string title;
        int copies_available = 5;
        string a,b;
        string author;
        string publisher;
        int c,d,e,f;
        int price = 750;
        int stock_position = 120;

        books(){}

        //constructor for the book class

        books(string title , string author , string publisher , int price)
        {
            title = "harrypotter";
            author = "jkrowling";
            publisher = "Puffin";
            price = 750;
        }

        void input()
        {
            cout<<"Enter the book title and author "<<endl;
            cin>>a;
            cout<<endl;
            cin>>b;
        }
        void output()
        {
            if(a==title)
            {
                cout<<"Enter the author name"<<endl;
                cin>>b;
                if(b==author)
                {
                    cout<<"YAY !! THE BOOK IS IN THE STOCK"<<endl;
                    cout<<"How many copies do you want ?"<<endl;
                    cin>>c;
                    
                    if(c==copies_available)
                    {
                        cout<<"YAY ! YOUR ORDER HAS BEEN PLACED SUCCESSFULLY"<<endl<<endl;
                        cout<<"-------------------------------------";
                        cout<<"-----------ORDER SUMMARY-------------";
                        cout<<"-------------------------------------"<<endl;
                        cout<<" Book title - "<<title;
                        cout<<" Book author -"<<author;
                        cout<<" Book price - "<<price;
                        cout<<" Number of copies - "<<c<<endl;
                        cout<<"--------------------------------------";
                    }
                    else
                    {
                        cout<<"Aww ! Sorry we dont have that kind of stock right now "<<endl;
                        cout<<"Please come some time later "<<endl;
                    }

            }else
            {
                cout<<"Sorry !  we dont have the specified book right now "<<endl;
                cout<<"Please come some time else"<<endl;
            }
                
        }
};

int main()
{
    books B;
    B.input();
    B.output();
    return 0;
}
