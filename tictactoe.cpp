#include <iostream>
using namespace std;
char turn ='X';

class tictactoe
{
public:
    int num;
    bool draw = false;
    int row =0, column =0 ;
    char T[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    void display()
    {
        cout << "player 1 [x]" << endl;
        cout << "player 2 [0]" << endl;
        cout << endl;
        cout << "\t\t      |      |      " << endl;
        cout << "\t\t " << T[0][0] << "    |  " << T[0][1] << "   |  " << T[0][2] << endl;
        cout << "\t\t______|______|______" << endl;
        cout << "\t\t      |      |      " << endl;
        cout << "\t\t " << T[1][0] << "    |  " << T[1][1] << "   |  " << T[1][2] << endl;
        cout << "\t\t______|______|______" << endl;
        cout << "\t\t      |      |      " << endl;
        cout << "\t\t " << T[2][0] << "    |  " << T[2][1] << "   |  " << T[2][2] << endl;
        cout << "\t\t      |      |      " << endl;
    }
    void getdata()
    {
        if (turn == 'X')
        {
            cout << "player 1 turn:[x]" << endl;
            cout << "choose the place" << endl;
            cin >> num;
        }
        else if (turn == 'O')
        {
            cout << "player 2 turn:[O]" << endl;
            cout << "choose the place" << endl;
            cin >> num;
        }
        switch (num)
        {
        case 1:
            row = 0;
            column = 0;
            break;
        case 2:
            row = 0;
            column = 1;
            break;
        case 3:
            row = 0;
            column = 2;
            break;
        case 4:
            row = 1;
            column = 0;
            break;
        case 5:
            row = 1;
            column = 1;
            break;
        case 6:
            row = 1;
            column = 2;
            break;
        case 7:
            row = 2;
            column = 0;
            break;
        case 8:
            row = 2;
            column = 1;
            break;
        case 9:
            row = 2;
            column = 2;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
        if (turn == 'X' && T[row][column] != 'X' && T[row][column] != 'O')
        {
            T[row][column] = 'X';
            turn ='O';
        }
        else if (turn == 'O' && T[row][column] != 'X' && T[row][column] != 'O')
        {
            T[row][column] = 'O';
            turn = 'X';
        }
        else
        {
            cout << "this spot is already been taken please try again!" << endl;
            getdata();
        }
        display();
    }
    bool checkresult()
    {
        for (int i = 0; i < 3; i++)
        {
            if ((T[i][0] == T[i][1] && T[i][0] == T[i][2]) || (T[0][i] == T[1][i] && T[0][i] == T[2][i]))
            {
                return false;
                
            }
        }
        if (T[0][0] == T[1][1] && T[1][1] == T[2][2] || T[2][0] == T[1][1] && T[1][1] == T[0][2])
        {
            return false;
            
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                if (T[i][j] != 'X' && T[i][j] != 'O')
                {

                    return true;
                    
                    
                }
        }
        draw = true;

        return false;
    }
};
int main()
{
    tictactoe t1;
    while (t1.checkresult())
    {
        t1.display();
        t1.getdata();
        t1.checkresult();
    }
    
    if (turn == 'X' && t1.draw == false)
    {
        cout << ("player 2[O] wins") << endl;
    }
    else if (turn == 'O' && t1.draw == false)
    {
        cout << ("player 1[x] wins") << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }
    return 0;
}
