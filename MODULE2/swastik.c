#include<stdio.h>
main(){
	// make a swastik symbol
	printf("             ============");
	printf("||
			||
			||
			||
			||
			||
			||
			");
	printf("=========================");
	printf("||
			||
			||
			||
			||
			||
			||
			");
}
#include <stdio.h>


int main(){
    int n;

    cout << "Enter the size of Swastik (odd number >= 5): ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "Please enter an odd number greater than or equal to 5." << endl;
        return 0;
    }

    cout << endl;

    // Swastik pattern logic
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Top half and middle
            if (
                (i == 0 && j >= n / 2) ||                   // top horizontal line
                (j == 0 && i <= n / 2) ||                   // left vertical line
                (i == n / 2) ||                             // middle horizontal line
                (j == n - 1 && i >= n / 2) ||               // right vertical line
                (i == n - 1 && j <= n / 2)                  // bottom horizontal line
            ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

