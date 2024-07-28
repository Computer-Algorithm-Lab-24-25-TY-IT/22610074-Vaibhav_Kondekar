#include <iostream>

void tower_of_hanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        std::cout << "Move disk 1 from peg " << from_peg << " to peg " << to_peg << std::endl;
        return;
    }
    tower_of_hanoi(n - 1, from_peg, aux_peg, to_peg);
    std::cout << "Move disk " << n << " from peg " << from_peg << " to peg " << to_peg << std::endl;
    tower_of_hanoi(n - 1, aux_peg, to_peg, from_peg);
}


int main() {
    int n; 
    std::cout << "Enter the number of disks: ";
    std::cin >> n;

    std::cout << "The sequence of moves involved in the Tower of Hanoi are:" << std::endl;
    tower_of_hanoi(n, 'A', 'C', 'B'); 
    return 0;
}
