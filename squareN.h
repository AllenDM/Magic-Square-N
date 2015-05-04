#ifndef SQUAREN_INCLUDED
#define SQUAREN_INCLUDED

//
//  squareN.h
//  Magic Square N
//
//  Created by Allen Moody on 9/16/14.
//  Copyright (c) 2014 FAMU. All rights reserved.
//


// Allen Moody
// Prog 2 Magic Square N

  template <int sz>
  class square{



  private:
        int k;
        int r;
        int i;
        int j;
        int squareArray[sz][sz];
        int index;
        int rows;
        int cols;
        int d1;
        int d2;
        int squareTotal;
        int M;
      public:

      square(int vals[]){
             index =0;
          for (i=0;i<sz;i++)
        {
            for (j=0; j<sz; j++) {
                squareArray[i][j]=vals[index];
                index++;
            }
        }
        M =0;
        M=(sz*(sz*sz+1))/2;
      }





    bool isMagic()
      {
          rows =0;
          // Row adder
        for (k=0;k<sz;k++)
        {
            for (r=0;r<sz;r++)
            {


                    rows += squareArray[k][r];
                }

           }

             cols =0;
            // Column checker
          for (r=0; r<sz; r++) {

              for (k=0; k<sz; k++){


                      cols += squareArray[k][r];

              }

          }
              d1=0;
          // Major Diagonal checker
          for (r=0; r<sz; r++) {

              for (k=0; k<sz; k++){


                  if (k==r)
                      d1 += squareArray[k][r];

              }

          }

          // Minor Diagonal checker

          k=0; d2 =0;
              for (r=sz-1; r>=0; r--){

                  d2 += squareArray[k][r];
                  k++;
              }


          squareTotal =0;
          squareTotal = rows+cols+d1+d2;
          if(M == squareTotal/4){
              return true;}


        return false;
    }





};












#endif // SQUAREN_INCLUDED
