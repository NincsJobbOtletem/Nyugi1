#include "std_lib_facilities.h"

int main()
{

	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age = 0;

	cout << "Ird be a nevet annak akinek irnal" << endl;
	cin >> first_name;

	cout << "Kedves " << first_name << ", hogy vagy?" << endl;
	cout << "Kosz jol :D" << endl;

	cout << "Ird be egy baratod nevet" << endl;
	cin >> friend_name;
	cout << "Lattad mar  " << friend_name << "-t regebben?" << endl;

	cout << "ird be a baratod nemet! irj f -et ha fiu es l ha lany" << endl;
	cin >> friend_sex;

	if (friend_sex == 'f')
	{
		cout << "Ha igen mond meg hogy hivjon fel (f)" << friend_name << endl;

	}
	else if (friend_sex == 'l')
	{
		cout << "Ha igen mond meg hogy hivjon fel (l)" << friend_name << endl;
	}
    cout <<"Ird be a korod!: \n";
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("Troll");

	cout << "Hallottam most van a " << age << "-dik szulinap " << endl;

	if (age < 12)
		cout << " Jovora " << age + 1 << " leszel" << endl;
	else if (age == 17)
		cout << "Jovore mar szavaszhatsz" << endl;
	else if (age > 70)
		cout << "szep kor." << endl;

	cout<<"Udvozlettel: \nPatrik";

	return 0;
}
