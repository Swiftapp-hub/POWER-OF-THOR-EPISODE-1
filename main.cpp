#include <iostream>
#include <string>

using namespace std;

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        string direction = "";

        if (light_y == initial_ty) {
            if (light_x > initial_tx) { direction = "E"; initial_tx++; }
            else { direction = "W"; initial_tx--; }
        }
        else if (light_y < initial_ty) {
            if (light_x < initial_tx) { direction = "NW"; initial_tx--; initial_ty--; }
            else if (light_x > initial_tx) { direction = "NE"; initial_tx++; initial_ty--; }
            else { direction = "N"; initial_ty--; }
        }
        else if (light_y > initial_ty) {
            if (light_x < initial_tx) { direction = "SW"; initial_tx--; initial_ty++; }
            else if (light_x > initial_tx) { direction = "SE"; initial_tx++; initial_ty++; }
            else { direction = "S"; initial_ty++; }
        }


        cout << direction << endl;
    }
}
