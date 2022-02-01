#include <iostream>
#include <string>

using namespace std;

int main()
{
    int light_x, light_y, initial_tx, initial_ty;
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    while (1) {
        int remaining_turns;
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
