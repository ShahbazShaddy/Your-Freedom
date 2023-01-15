# include<iostream>
using namespace std;
#include<conio.h>

int findBorder(int, int, int);

int main()
{

    int height, xCor, yCor;
    cout <<"enter height: ";
    cin >> height;

    cout <<"enter x cordinate: ";
    cin >> xCor;

    cout <<"enter y cordinate: ";
    cin >> yCor;


    findBorder(height, xCor, yCor);

    getch();
}

int findBorder(int height,int xCor,int yCor)
{
    int x_boundary, y_boundary;
    int base = height * 3;
    int roof = height * 4;
    


    if ((xCor == 0 || xCor == base) && (yCor >= 0 && yCor <= height) )
    {
        cout << "border ";
        return 0;    
    }
    if ((yCor == 0 ) && (xCor >= 0 && xCor <= base ) )
    {
        cout << "border ";
        return 0;    
    }
    if ((yCor == height ) && ((xCor >= 0 && xCor <= height ) || (xCor >= height * 2 && xCor <= base)) )
    {
        cout << "border ";
        return 0;    
    }
    if ((xCor == height || xCor == height *2) && (yCor >= height ||  yCor <= height*2))
    {
        cout << "border ";
        return 0;    
    }
    if ((yCor == roof) && (xCor >= height &&  xCor <= height*2))
    {
        cout << "border ";
        return 0;    
    }



    if ((xCor > 0 && xCor < base) && (yCor > 0 && yCor <height ) )
    {
        cout << "inside ";
        return 0;    
    }
    if ((xCor > height && xCor < height *2) && (yCor > 0 &&  yCor < roof))
    {
        cout << "inside ";
        return 0;    
    }


    cout << "outside";
    return 0;




}
