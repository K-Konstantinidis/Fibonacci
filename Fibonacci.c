/*************************************************************************
        Copyright © 2021 Konstantinidis Konstantinos

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*************************************************************************/
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main(){
    int number1, number2, n, no;

    number1 = 0;
    number2 = 1;
    printf("Insert how many numbers of the Fibonacci sequence you want to see: ");
    n = GetInteger();
    while(n<=1){
        printf("Number must be > 1\n");
        printf("Insert how many numbers of the Fibonacci sequence you want to see: ");
        n = GetInteger();
    }
    for(int i=1; i<=n; i++){
        printf(" %d \n", number1);
        no = number1 + number2;
        number1 = number2;
        number2 = no;
    }

    system("PAUSE");
}
