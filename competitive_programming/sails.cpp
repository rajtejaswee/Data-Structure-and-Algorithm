#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    
    string wind;
    cin >> wind;

    // Calculate the distance we need to travel
    // Positive means we need to go East/North
    // Negative means we need to go West/South
    long long dx = ex - sx;
    long long dy = ey - sy;

    for (int i = 0; i < t; i++) {
        // Check if we are already there (Just in case, though usually checked after move)
        if (dx == 0 && dy == 0) {
            cout << i << endl; // Reached at start of second i (previous step)
            return 0;
        }

        char current_wind = wind[i];

        // Greedily reduce the distance
        if (current_wind == 'E' && dx > 0) {
            dx--;
        } 
        else if (current_wind == 'W' && dx < 0) {
            dx++; // Increasing negative number towards 0
        } 
        else if (current_wind == 'N' && dy > 0) {
            dy--;
        } 
        else if (current_wind == 'S' && dy < 0) {
            dy++; // Increasing negative number towards 0
        }

        // Check if we reached the target AFTER this step
        if (dx == 0 && dy == 0) {
            cout << i + 1 << endl; // +1 because time is 1-based index
            return 0;
        }
    }

    // If loop finishes and we still haven't reached
    cout << -1 << endl;

    return 0;
}