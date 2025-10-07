#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Welcome to the APUSH Important Figures Randomizer!" << endl;
    cout << "This program will randomly select an important figure from US history." << endl;
    cout << "When it lands on a figure, the student has to explain their significance in US history." << endl;

    srand(time(0));
    string figures[] = {
        "George Washington",
        "Thomas Jefferson",
        "Abraham Lincoln",
        "Theodore Roosevelt",
        "Franklin D. Roosevelt",
        "John F. Kennedy",
        "Martin Luther King Jr.",
        "Alexander Hamilton",
        "Benjamin Franklin",
        "Thomas Paine",
        "Loyalists",
        "Pocahontas",
        "Powhatan",
        "John Smith",
        "John Rolfe",
        "Patrick Henry",
        "John Adams",
        "James Madison",
        "Andrew Jackson",
        "Ulysses S. Grant",
    };

    cout << "Press Enter to get a random important figure...";
    cin.ignore();
    cin.get();

    int randomIndex = rand() % (sizeof(figures) / sizeof(figures[0]));
    cout << "Your random important figure is: " << figures[randomIndex] << endl;
    cout << "Explantion: " << endl;
    if (figures[randomIndex] == "George Washington") {
        cout << "First President of the United States and commander-in-chief of the Continental Army during the American Revolutionary War." << endl;
    } else if (figures[randomIndex] == "Thomas Jefferson") {
        cout << "Principal author of the Declaration of Independence and third President of the United States." << endl;
    } else if (figures[randomIndex] == "Abraham Lincoln") {
        cout << "16th President of the United States who led the nation through the Civil War." << endl;
    } else if (figures[randomIndex] == "Theodore Roosevelt") {
        cout << "26th President of the United States, known for his progressive policies and conservation efforts." << endl;
    } else if (figures[randomIndex] == "Franklin D. Roosevelt") {
        cout << "32nd President of the United States who led the country during the Great Depression and World War II." << endl;
    } else if (figures[randomIndex] == "John F. Kennedy") {
        cout << "35th President of the United States, known for his inspirational speeches and handling of the Cuban Missile Crisis." << endl;
    } else if (figures[randomIndex] == "Martin Luther King Jr.") {
        cout << "Civil rights leader who advocated for nonviolent resistance to achieve racial equality." << endl;
    } else if (figures[randomIndex] == "Alexander Hamilton") {
        cout << "Founding Father, first Secretary of the Treasury, and author of the Federalist Papers." << endl;
    } else if (figures[randomIndex] == "Benjamin Franklin") {
        cout << "Founding Father, inventor, and diplomat who played a key role in the American Enlightenment." << endl;
    }
    else if (figures[randomIndex] == "Thomas Paine") {
        cout << "Author of 'Common Sense' and 'The American Crisis,' which inspired American independence." << endl;
    } else if (figures[randomIndex] == "Loyalists") {
        cout << "Colonists who remained loyal to the British Crown during the American Revolutionary War." << endl;
    } else if (figures[randomIndex] == "Pocahontas") {
        cout << "Native American woman who played a key role in the early years of the Jamestown colony." << endl;
    } else if (figures[randomIndex] == "Powhatan") {
        cout << "Leader of the Powhatan Confederacy and father of Pocahontas." << endl;
    } else if (figures[randomIndex] == "John Smith") {
        cout << "English explorer and leader of the Jamestown colony." << endl;
    } else if (figures[randomIndex] == "John Rolfe") {
        cout << "English settler who married Pocahontas and introduced tobacco cultivation to Virginia." << endl;
    } else if (figures[randomIndex] == "Patrick Henry") {
        cout << "Prominent orator and leader in the American Revolution, known for his 'Give me liberty, or give me death!' speech." << endl;
    } else if (figures[randomIndex] == "John Adams") {
        cout << "Second President of the United States and a key advocate for independence." << endl;
    } else if (figures[randomIndex] == "James Madison") {
        cout << "Fourth President of the United States and 'Father of the Constitution.'" << endl;
    } else if (figures[randomIndex] == "Andrew Jackson") {
        cout << "Seventh President of the United States, known for his populist approach and the Indian Removal Act." << endl;
    } else if (figures[randomIndex] == "Ulysses S. Grant") {
        cout << "18th President of the United States and commanding general of the Union Army during the Civil War." << endl;
    }
    cout << endl;
    return 0;
}
