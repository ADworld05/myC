#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// JK Flip-flop implementation
bool JK0(bool J, bool K) {
    static bool Q0 = 0;
    if (J == 0 && K == 0)
        Q0 = Q0; // No change
    else if (J == 0 && K == 1)
        Q0 = 0; // Reset
    else if (J == 1 && K == 0)
        Q0 = 1; // Set
    else
        Q0 = !Q0; // Toggle
    return Q0;
}

bool JK1(bool J, bool K) {
    static bool Q1 = 0;
    if (J == 0 && K == 0)
        Q1 = Q1; // No change
    else if (J == 0 && K == 1)
        Q1 = 0; // Reset
    else if (J == 1 && K == 0)
        Q1 = 1; // Set
    else
        Q1 = !Q1; // Toggle
    return Q1;
}

bool JK2(bool J, bool K) {
    static bool Q2 = 0;
    if (J == 0 && K == 0)
        Q2 = Q2; // No change
    else if (J == 0 && K == 1)
        Q2 = 0; // Reset
    else if (J == 1 && K == 0)
        Q2 = 1; // Set
    else
        Q2 = !Q2; // Toggle
    return Q2;
}

bool JK3(bool J, bool K) {
    static bool Q3 = 0;
    if (J == 0 && K == 0)
        Q3 = Q3; // No change
    else if (J == 0 && K == 1)
        Q3 = 0; // Reset
    else if (J == 1 && K == 0)
        Q3 = 1; // Set
    else
        Q3 = !Q3; // Toggle
    return Q3;
}

// this function returns true on +ve edge (0->1)
bool clock_signal(double clock_period)
{
    clock_t start, current;          
    static bool signal = false;      // Current state of clock signal
    static bool prev_signal = false; // Previous state of clock signal

    start = clock(); 

    prev_signal = signal; // Store the previous signal state
    signal = !signal;     // Toggle the signal (create the clock pulse)
    
    //wait loop this loop delay for half time period 0->1->0->1...
    do
    {
        current = clock();
    } while ((double)(current - start) / CLOCKS_PER_SEC < (clock_period/2));

    //printf("clock\n");

    // Return true only if a positive edge is detected (rising edge)
    return (prev_signal == 0 && signal == 1);
}

int main() {
    double clock_period; // Clock period in seconds
    int cycles;          // Number of cycles to run

    // Get clock cycle period and number of cycles
    printf("Enter the clock cycle period (in seconds): ");
    scanf("%lf", &clock_period);
    printf("Enter the number of cycles the counter will run: ");
    scanf("%d", &cycles);

    // Initialize the states of Q3, Q2, Q1, Q0
    bool Q3 = 0, Q2 = 0, Q1 = 0, Q0 = 0;

    printf("\nQ3 Q2 Q1 Q0\n");
    printf("%d  %d  %d  %d\n", Q3, Q2, Q1, Q0);

    int cycle_count = 0; // Counter for clock cycles

    do{
        // Check for clock signal rising edge
        if (clock_signal(clock_period)) {
            // Calculate JK inputs and update flip-flops
            
            // JK inputs for Q0, Q1, Q2, Q3
            bool J0 = 1, K0 = 1;           // Toggle Q0
            bool J1 = Q0, K1 = Q0;         // Q1 toggles based on Q0
            bool J2 = Q1 && Q0, K2 = Q1 && Q0; // Q2 toggles based on Q1 and Q0
            bool J3 = Q2 && Q1 && Q0, K3 = Q2 && Q1 && Q0; // Q3 toggles based on Q2, Q1, and Q0

            // Update the flip-flops using JK logic
            Q0 = JK0(J0, K0);
            Q1 = JK1(J1, K1);
            Q2 = JK2(J2, K2);
            Q3 = JK3(J3, K3);

            // Print current state of the counter
            printf("%d  %d  %d  %d\n", Q3, Q2, Q1, Q0);

            // Increment the cycle count
            cycle_count++;
        }
    }while (cycle_count < cycles-1);

    return 0;
}



