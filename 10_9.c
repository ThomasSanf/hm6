#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card
{
 const char face;
 const charsuit;
};

typedef struct card Card;
void fillDeck(Card const wDeck, const charwFace[], const char wSuit[]);
void shuffle(Cardconst wDeck);
void deal(const Card const wDeck);

int main()
{
 Card deck[52];
 const charface[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
 const char suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

 srand(time(NULL));
 fillDeck(deck, face, suit);
 shuffle(deck);
 deal(deck);

 return 0;
}
void fillDeck(Cardconst wDeck, const char wFace[], const charwSuit[])
{
 int i;
 for (i = 0; i <= 51; i++)
 {
  wDeck[i].face = wFace[i % 13];
  wDeck[i].suit = wSuit[i % 4];
 }
}
void shuffle(Card const wDeck)
{
 int i, j;
 Card temp;

 for (i = 0; i <= 51; i++)
 {
  j = rand() % 52;
  temp = wDeck[i];
  wDeck[i] = wDeck[j];
  wDeck[j] = temp;
 }
}

void deal(const Cardconst wDeck)
{
 int i;
 for (i = 0; i <= 51; i++)
 {
  printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
 }
}
