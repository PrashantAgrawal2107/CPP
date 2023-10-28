#include <iostream>

using namespace std;

class tictactoe
{
    char l;
    char num[9] = {'1','2','3','4','5','6','7','8','9'};
    char newnum[9] = {'1','2','3','4','5','6','7','8','9'};
    char newx[9], newy[9];
    char x[9], y[9];
    int px = 0, py = 0, choose;
    int val = -1;
    char choice;

    public:
    void main_screen()
    {
        cout<<"TIC - TAC - TOE !!!"<<endl<<"----------------------------------"<<endl<<endl;
        cout<<"PLAYER 1 (X)   "<<"VS"<<"\tPLAYER 2 (O) : "<<endl<<endl<<"**********************************"<<endl<<endl;
        
        cout<<"Menu : \n"<<endl;
        cout<<"1. Play Game."<<endl;
        cout<<"2. View scoreboard."<<endl;
        cout<<"3. Exit."<<endl;
        cout<<"Choose your option :\t";
        cin>>choose;
        cout<<endl<<endl<<"**********************************"<<endl<<endl;
        
        if(choose == 1)
        {
            display();
            cout<<endl<<endl<<endl;
            accept_values();
        }
        else if(choose == 2)
        {
            points();
        }
        else if(choose == 3)
        {
            cout<<"Thank you !"<<endl;
            exit(0);
        }
        else
        {
            cout<<"Invalid option choosed."<<endl<<endl<<"**********************************"<<endl<<endl;
            main_screen();
        }
    }

    public:
    void points()
    {
        cout<<"Points of Player 1 (X) :\t"<<px<<endl;
        cout<<"Points of Player 2 (O) :\t"<<py<<endl;
        main_menu();
    }

    public:
    void display()
    {
        for(char i=0; i<9; i++)
        {
            if(i == 3 || i == 6 || i == 9)
            {
                cout<<endl;
                cout<<"---------------------------------";
                cout<<endl;
            }
            if(i == 2 || i == 5 || i == 8)
            {
                l = ' ';
            }
            else
            {
                l = '|';
            }
            cout<<num[i]<<"\t"<<l<<"\t";
        }
    }

    public:
    int check_win()
    {
        if(num[0] == 'X' && num[3] == 'X' && num[6] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[0] == 'X' && num[1] == 'X' && num[2] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[1] == 'X' && num[4] == 'X' && num[7] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[3] == 'X' && num[4] == 'X' && num[5] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[2] == 'X' && num[5] == 'X' && num[8] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[6] == 'X' && num[7] == 'X' && num[8] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[0] == 'X' && num[4] == 'X' && num[8] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        else if (num[6] == 'X' && num[4] == 'X' && num[2] == 'X')
        {
            px++;
            cout<<"X wins !"<<endl;
            cout<<"Points of X : "<<px<<endl;
            val = 1;
            return val;
        }
        

        else if(num[0] == 'O' && num[3] == 'O' && num[6] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[0] == 'O' && num[1] == 'O' && num[2] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[1] == 'O' && num[4] == 'O' && num[7] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[3] == 'O' && num[4] == 'O' && num[5] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[2] == 'O' && num[5] == 'O' && num[8] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[6] == 'O' && num[7] == 'O' && num[8] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[0] == 'O' && num[2] == 'O' && num[8] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if (num[6] == 'O' && num[4] == 'O' && num[2] == 'O')
        {
            py++;
            cout<<"O wins !"<<endl;
            cout<<"Points of O : "<<py<<endl;
            val = 1;
            return val;
        }
        else if(num[0] == '1' || num[1] == '2' || num[2] == '3' || num[3] == '4' || num[4] == '5' || num[5] == '6' || num[6] == '7' || num[7] == '8' || num[8] == '9')
        {
            val = -1;
            return  val;
        }
        else
        {
            val = 0;
            return val;
        }
    }

    public:
    void main_menu()
    {
        cout<<"Do you want to go to the main menu ? (y/n) :\t";
        cin>>choice;
        
        if(choice == 'y')
        {
            for(int i=0; i<num[i]; i++)
            {
                if(num[i] == 'X' || num[i] == 'O')
                {
                    num[i] = newnum[i];
                    x[i] = newx[i];
                    y[i] = newy[i];
                }
            }
            cout<<endl<<endl<<"**********************************"<<endl<<endl;
            main_screen();
        }
        else if(choice == 'n')
        {
            cout<<"Thanks for playing."<<endl;
            exit(0);
        }
        else
        {
            cout<<"Invalid option entered."<<endl;
            main_menu();
        }
    }

    public:
    void accept_values()
    {
        do
        {
            for(char i=0; i<num[i]; i++)
            {
                cout<<"Enter for X :\t";
                cin>>x[i];
                cout<<endl;
                for(char j = 0; j<9; j++)
                {
                    if(x[i] == y[j])
                    {
                        cout<<"This spot is already taken."<<endl<<endl;
                        main_menu();
                    }
                    if(x[i] == num[j])
                    {
                        num[j] = 'X';
                    }
                }
                check_win();
                if(val == 0)
                {
                    cout<<"Match tied."<<endl<<endl;
                    main_menu();
                }
                else if(val == 1)
                {
                    main_menu();
                }
                cout <<endl<<endl<<endl;
                display();
                cout <<endl<<endl<<endl;

                cout<<"Enter for O :\t";
                cin>>y[i];
                cout<<endl;
                for(char j = 0; j<9; j++)
                {
                    if(y[i] == x[j])
                    {
                        cout<<"This spot is already taken."<<endl<<endl;
                        main_menu();
                    }
                    if(y[i] == num[j])
                    {
                        num[j] = 'O';
                    }
                }
                check_win();
                if(val == 0)
                {
                    cout<<"Match tied."<<endl<<endl;
                    main_menu();
                }
                else if(val == 1)
                {
                    main_menu();
                }
                cout <<endl<<endl<<endl;
                display();
                cout <<endl<<endl<<endl;
            }
        }while(val == -1);
    }
};

int main()
{
    tictactoe t;
    t.main_screen();
    return 0;
}