//
//  main.cpp
//  Lab 6
//
//  Created by Aim Kim on 2022-07-06.
//

#include <iostream>


using namespace std;

void display();

int main() {
    // insert code here...
   // int x;
    const int ROWS = 4;
    int COLUMNS_PER_ROW_ARR [ROWS] = {5,6,4,3};
    int **arr = new int *[ROWS];
    
    arr[0] = new int [5];
    arr[1] = new int [6];
    arr[2] = new int [4];
    arr[3] = new int [3];
    // initialize everthng to -1 or 0
    
    
    for (int i = 0; i <ROWS; i++)
    {
        for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
        {
             arr[i][j] = 0 ;
                 }
             }

//
//    int user_id ;
//    int machine ;
//    int lab ;
    
    //somulate login operation
   
    
    int selection = -7;
    
   

    do{
        cout << "choose one of the following" << endl;
                cout << "1 - Login " << endl;
                cout << "2- Log off " << endl;
                cout << "3- Search" << endl;
                cout << "4- Exit" << endl;
        
        cin >> selection;
                switch (selection)
                {
                case 1:
                {

                    int user_id = 49193;
                    int machine = 2;
                    int lab = 3;
                    cout << "enter id, lab, & machine " << endl;
                    cin >> user_id >> lab >> machine;
                    // simulate a login operation
                    arr[lab - 1][machine - 1] = user_id;
                   // display(ROWS, COLUMNS_PER_ROW_ARR,**arr );
                    for (int i = 0; i <ROWS; i++)
                    {
                        for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
                        {
                            if ( arr[i][j] == 0)
                            {
                                cout << "empty " ;
                            }
                            else{
                                cout << arr[i][j] << " ";

                            }
                                                      }
                                 cout << endl;
                             }
                    
                    break;
                }
                    case 2:
                    {
                        int machine = 0;
                        int lab = 0;
                        cout << "enter lab, & machine " << endl;
                        cin >> lab >> machine;
                        arr[lab - 1][machine - 1] = 0;
                        
                        for (int i = 0; i <ROWS; i++)
                        {
                            for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
                            {
                                if ( arr[i][j] == 0)
                                {
                                    cout << "empty " ;
                                }
                                else{
                                    cout << arr[i][j] << " ";

                                }
                                                          }
                                     cout << endl;
                                 }
                    }
                    case 3:
                        {
                            int user_id = 49193;
                            int machine = 2;
                            int lab = 3;
                            bool user_found = false;
                            cout << "enter id " << endl;
                            cin >> user_id;
                            for (int i = 0; i <ROWS; i++)
                            {
                                for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
                                {
                                    if ( arr[i][j] == user_id)
                                    {
                                        cout << "lab: " << i +1 << endl << "computer station #" << j+1 <<endl;
                                        lab = i + 1;
                                        machine = j + 1;
                                        user_found = true;
                                        
                                    }
                                   

                                    
                                }
                                         cout << endl;
                                     }
                            if (!user_found)
                            {
                                cout << "None" << endl;
                            }
                            
                        }
                        
                default:
                break;
                        
    }
    }while (selection != 4);
    
    
//    int *p = new int;
//    *p = 5;
//
    delete arr[0];
    delete arr[1];
    delete arr[2];
    delete arr[3];
    delete *arr;
   
    
    //check memory leak
    //12:50-57

}

void display(int ROWS, int COLUMNS_PER_ROW_ARR[], int **arr  )
{
    for (int i = 0; i <ROWS; i++)
    {
        for (int j = 0; j < COLUMNS_PER_ROW_ARR[i]; j++)
        {
            if ( arr[i][j] == 0)
            {
                cout << "empty " ;
            }
            else{
                cout << arr[i][j] << " ";

            }
                                      }
                 cout << endl;
             }
}
