#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool D0_FF(bool D)
{
    static bool Q0 = 0;
    Q0 = D;
    return Q0;
}

bool D1_FF(bool D)
{
    static bool Q1 = 0;
    Q1 = D;
    return Q1;
}

bool D2_FF(bool D)
{
    static bool Q2 = 0;
    Q2 = D;
    return Q2;
}

bool D3_FF(bool D)
{
    static bool Q3 = 0;
    Q3 = D;
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

    // wait loop this loop delay for half time period 0->1->0->1...
    do
    {
        current = clock();
    } while ((double)(current - start) / CLOCKS_PER_SEC < (clock_period / 2));

    // printf("clock\n");

    // Return true only if a positive edge is detected (rising edge)
    return (prev_signal == 0 && signal == 1);
}

int main()
{
    double clock_period; // Clock period in seconds
    int cycles;          // Number of cycles

    printf("Enter the clock cycle period (in seconds): ");
    scanf("%lf", &clock_period);

    printf("Enter the number of cycles the counter will run: ");
    scanf("%d", &cycles);

    bool Q3 = 0, Q2 = 0, Q1 = 0, Q0 = 0;

    printf("\nQ3 Q2 Q1 Q0\n");

    int cycle_count = 0; // Counter for the number of clock cycles

    printf(" %d  %d  %d  %d\n", Q3, Q2, Q1, Q0);
    do
    {
        // Check for clock signal rising edge
        if (clock_signal(clock_period))
        {
            Q3 = D3_FF(Q3 ^ (Q2 && Q1 && Q0));
            Q2 = D2_FF(Q2 ^ (Q1 && Q0));
            Q1 = D1_FF(Q1 ^ Q0);
            Q0 = D0_FF(!Q0);
            // Print current state of the counter
            printf(" %d  %d  %d  %d\n", Q3, Q2, Q1, Q0);
            // Increment cycle count
            cycle_count++;
        }

    } while (cycle_count < cycles - 1);

    return 0;
}
