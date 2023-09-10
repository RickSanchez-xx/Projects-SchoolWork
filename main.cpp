#include <iostream>
#include <cstdlib>
#include <iostream>
using namespace std;


int window[6];

void odometerReads(){
    for(int i : window){

        std::cout<< i <<endl;
    }
}

int main(){

    for(int j0 = 0; j0 <= 9; j0++){
        window[0]= j0;

        for(int j1 = 0; j1 <= 9; j1++){
            window[1] = j1;

            for(int j2 = 0; j2 <= 9; j2++){
                window[2] = j2;

                for(int j3 = 0; j3 <= 9; j3++){
                    window[3] = j3;

                    for(int j4 = 0; j4 <= 9; j4++){
                         window[4] = j4;

                         for(int j5 = 0; j5 <= 9; j5++){
                             window[5] = j5;

                             odometerReads();#include <iostream>
#include <cstdlib>
#include <iostream>
                             using namespace std;


                             int window[6];

                             void odometerReads(){
                                 for(int i : window){

                                     std::cout<< i <<endl;
                                 }
                             }

                             int main(){

                                 for(int j0 = 0; j0 <= 9; j0++){
                                     window[0]= j0;

                                     for(int j1 = 0; j1 <= 9; j1++){
                                         window[1] = j1;

                                         for(int j2 = 0; j2 <= 9; j2++){
                                             window[2] = j2;

                                             for(int j3 = 0; j3 <= 9; j3++){
                                                 window[3] = j3;

                                                 for(int j4 = 0; j4 <= 9; j4++){
                                                     window[4] = j4;

                                                     for(int j5 = 0; j5 <= 9; j5++){
                                                         window[5] = j5;

                                                         odometerReads();
                                                     }
                                                 }
                                             }
                                         }
                                     }
                                 }

                                 return 0;
                             }
                         }
                    }
                }
            }
        }
    }


    return 0;
}