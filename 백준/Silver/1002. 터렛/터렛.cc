#include <stdio.h>
#include <math.h>

int main(){
    int T; // Task count
    int x1, y1, r1; // var for Ryu
    int x2, y2, r2; // var for Baek
    int result;

    scanf("%d", &T); // Get task count
    for (int i = 0; i < T; i++){ // for loop T times
        scanf("%d %d %d", &x1, &y1, &r1);
        scanf("%d %d %d", &x2, &y2, &r2);
        // Get info of Ryu & Baek

        double R = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        // Set R to distance of Ryu and Baek
        int S = r1 > r2 ? r1 - r2 : r2 - r1;
        // subtract radius

        if (R == 0 && r1 == r2){ // If infinity:
            result = -1;
        }
        else if (R < r1 + r2 && S < R){ // If 2 met:
            result = 2;
        }
        else if (R == r1 + r2 || S == R){ // If 1 met:
            result = 1;
        }
        else { // If none:
            result = 0;
        }
        printf("%d\n", result); // print the result
    }
    return 0;
}