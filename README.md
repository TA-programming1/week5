* Create a Character struct. It should at least have a health and a name property. It should also  have a function to check if the Character is alive.
* * Create a loop that has Sleep(1000) at the end. (You must #include <windows.h>
* * Every time the loop runs, the Character loses 1 health.
* * If the Character is not alive, print “characterName died” and exit the loop.


* Create a struct that can represent a position in 2D space
* * In the struct: Make a function that takes in another struct of the same type and adds its position to the struct that owns it


* Create a “Player” struct that inherits from the Character struct. It should have an initial of its name as a char and a position struct.


* Create a grid in the console. Print the Character’s initial at its position (The grid can be of any char. Just space is fine as well)
* * Make it so that the Character can move using W, A, S and D
* * Bonus: Make treasure the Character can find. If the character shares position with a treasure, the treasure is removed and the character gains a point.