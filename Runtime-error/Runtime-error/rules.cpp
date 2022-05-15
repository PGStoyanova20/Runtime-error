#include "rules.h"

//  Prints rules of booleO
void printRules()
{
	cout << R"( 
						RULES

		---------------------------------------------------------------------------------------------------------------------
		|
		|				GAME	
		|
		| The deck consists of 64 cards:
		|
		|	-> 48 "Gate" cards using three Boolean operators AND, OR, and XOR
		|	
		|		* 8 OR cards resolving to 1	
		|																													
		|		* 8 OR cards resolving to 0																					
		|																													
		|		* 8 AND cards resolving to 1
		|
		|	-> 8 NOT cards
		|
		|	-> 6 Initial Binary cards, each displaying a "0" and a "1"
		|
		|	-> 2 Truth Tables (used for reference, not in play)
		|
		|----------------------------------------------------------------------------------------------------------------------
		|
		|				PLAY
		|
		|	Starting with a line of Initial Binary cards laid perpendicular to two facing players, 
		| the object of the game is to be the first to complete a logical pyramid whose final output
		| equals that of the rightmost Initial Binary card facing that player. The game is played in 
		| "draw one play one" format. The pyramid consists of decreasing rows of gate cards, where the
		| outputs of any contiguous pair of cards comprise the input values to a card in the following row..
		|
		|	The pyramid, therefore, has Initial Binary values as its base and tapers to a single card closest
		| to the player. By tracing the “flow” of values through any series of gate, every card placed in the
		| pyramid must make “logical sense”, i.e. the inputs and output value of every gate card must conform
		| to the rule of that gate card.
		|
		|	The NOT cards are played against any of the Initial Binary cards in play, causing that card to be
		| rotated 180 degrees, literally "flipping" the value of that card from 0 to 1 or vice versa.
		|
		|	By changing the value of any Initial Binary, any and all gate cards which “flow” from it must be
		| re-evaluated to ensure its placement makes "logical sense". If it does not, that gate card is removed
		| from the player's pyramid.
		|
		|	Since both players' pyramids share the Initial Binary cards as a base, "flipping" an Initial Binary has
		| an effect on both players' pyramids. A principal strategy during game play is to invalidate gate cards
		| in the opponent's logic pyramid while rendering as little damage to one’s own pyramid in the process.
		|
		|	Some logic gates are more robust than others to a change to their inputs. Therefore, not all logic gate
		| cards have the same strategic value.
		|
		|	The standard edition of the game does not contain NAND, NOR, or XNOR gates. It is possible, therefore, 
		| for a player to arrive at an unresolvable pair of inputs.
		|
		|----------------------------------------------------------------------------------------------------------------------
		|				
		|				VARIATIONS
		|
		|	The number of cards in Booleo will comfortably support a match between two players whose logic pyramids are six
		| cards wide at their base. By combining decks, it is possible to construct larger pyramids or to have matches among
		| more than two players. For example:
		|
		|	-> Four players may play individually or as facing teams by arranging a cross of Initial Binary cards, 
		|			where four logic pyramids extend like compass points in four directions
		|
		|	-> Four or more players may build partially overlapping pyramids from a long base of Initial Binary cards
		|
		|----------------------------------------------------------------------------------------------------------------------
)";
}