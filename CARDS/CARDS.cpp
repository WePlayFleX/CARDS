//#include <iostream>
//
//using namespace std;
//
//enum Suit { clubs, diamonds, hearts, spades };
//
//const int jack = 11;
//const int queen = 12;
//const int king = 13;
//const int ace = 14;
//
//struct Card
//{
//	int number;
//	int suit;
//};
//
//int main()
//{
//	Card temp, chosen, prize;
//	int position;
//
//	Card card1 = { 7, clubs };
//	cout << "Card 1: 7 clubs\n";
//	Card card2 = { jack, hearts };
//	cout << "Card 2: jack hearts\n";
//	Card card3 = { ace, spades };
//	cout << "Card 3: ace spades\n";
//
//	prize = card3;
//
//	cout << "Swap card 1 and card 3...\n";
//	temp = card3;
//	card3 = card1;
//	card1 = temp;
//
//	cout << "Swap card 2 and card 3...\n";
//	temp = card3;
//	card3 = card2;
//	card2 = temp;
//
//	cout << "Swap card 1 and card 2...\n";
//	temp = card2;
//	card2 = card1;
//	card1 = temp;
//
//	cout << "What position (1,2 or 3) is the ace of spades in? ";
//	cin >> position;
//
//	switch (position)
//	{
//	case 1:
//	{
//		chosen = card1;
//		break;
//	}
//	case 2:
//	{
//		chosen = card2;
//		break;
//	}
//	case 3:
//	{
//		chosen = card3;
//		break;
//	}
//	}
//
//	if (chosen.number == prize.number &&
//		chosen.suit == prize.suit)
//	{
//		cout << "Right! You won!\n";
//	}
//	else
//	{
//		cout << "Wrong! You lost(\n";
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>

using namespace std;

enum Suit { clubs, diamonds, hearts, spades };

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
public:
	Card()
	{

	}

	Card(int n, Suit s) : number(n), suit(s)
	{

	}

	void display();
	bool isEqual(Card);

private:
	int number;
	Suit suit;
};

int main()
{
	Card temp, chosen, prize;
	int position;

	Card card1 = { 7, clubs };
	cout << "Card 1: ";
	card1.display();
	Card card2 = { jack, hearts };
	cout << "\nCard 2: ";
	card2.display();
	Card card3 = { ace, spades };
	cout << "\nCard 3: ";
	card3.display();

	prize = card3;

	cout << "\nSwap card 1 and card 3...";
	temp = card3;
	card3 = card1;
	card1 = temp;

	cout << "\nSwap card 2 and card 3...";
	temp = card3;
	card3 = card2;
	card2 = temp;

	cout << "\nSwap card 1 and card 2...";
	temp = card2;
	card2 = card1;
	card1 = temp;

	cout << "\nWhat position (1,2 or 3) is ";
	prize.display();
	cout << "?";
	cin >> position;

	switch (position)
	{
	case 1:
	{
		chosen = card1;
		break;
	}
	case 2:
	{
		chosen = card2;
		break;
	}
	case 3:
	{
		chosen = card3;
		break;
	}
	}

	if (chosen.isEqual(prize))
	{
		cout << "Right! You won!\n";
	}
	else
	{
		cout << "Wrong! You lost(\n";
	}

	cout << "You have chosen a card ";
	chosen.display();
	cout << endl;

	system("pause");
	return 0;
}

void Card::display()
{
	if (number >= 2 && number <= 10)
	{
		cout << number;
	}
	else
	{
		switch (number)
		{
		case jack:
			cout << "Jack ";
			break;
		case queen:
			cout << "Queen ";
			break;
		case king:
			cout << "King ";
			break;
		case ace:
			cout << "Ace ";
			break;
		}
	}

	switch (suit)
	{
	case clubs:
		cout << " clubs ";
		break;
	case diamonds:
		cout << " diamonds ";
		break;
	case hearts:
		cout << " hearts ";
		break;
	case spades:
		cout << " spades ";
		break;
	}
}

bool Card::isEqual(Card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}