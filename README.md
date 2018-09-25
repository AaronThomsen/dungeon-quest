![Main Title](https://image.prntscr.com/image/Gib_U5MeTA60LUOedYwjwA.png)
***
### Overview
The goal of Dungeon Quest is to travel through a dungeon consisting of 10 floors in order to reach the top floor, which contains a boss. If the player defeats the boss, then they win the game.

The player is given the option to choose between three classes, each with its own“quirk". By killing monsters and roaming around the dungeon, the user is able to power themselves up in order to prepare for the final boss

### Floors

Each floor consists of a 10x10 grid of tiles. Initially, all tiles (except the one the user is standing on) are“hidden". When the player moves onto a certain tile, the tile is revealed and an event may happen.

<center>
	<img src="https://image.prntscr.com/image/nFS0weLfTCOn6Jj2fzCaBw.png" alt="Initial floor layout" height="208">
	<br />
	<img src="https://image.prntscr.com/image/3A7E4XLyRSWWDoonBr-Agg.png" alt="Updated floor layout" height="200">
</center>  

The following is a list of possible events:

* No event: nothing happens, just an empty tile
* Ladder: a ladder that can take you to the next floor. Ladders are one-way, meaning once you go up, you cannot go back down
* Merchant: the merchant, Grendel, sells random items to the player
* Chest: chests contain goodies that help buff the player
* Battle: by far the most involved event, this triggers a battle between the player and a monster. More details appear later in the document

### Character

The character starts out with a simple armor and weapon that can be upgraded by finding weapon/armor upgrades in chests. Additionally, they can find ability scrolls in chests to unlock special abilities that cause status effects

<img src="https://image.prntscr.com/image/TkuTqQzxS5y7bufL9WbPNA.png" alt="Character stats" />

### The Merchant

<center>
<img src="https://image.prntscr.com/image/YEjwz8yKTpGJbzOi657X0Q.png" alt="The merchant, Grendel" height="300"/>
</center>
<br />

Grendel will sell the player various items for gold, which is earned either by killing monsters or by selling items. The price and potency of the items increases with the floor level. There are essentially three tier levels: *Small* (floors 1 - 4), *Medium* (5 - 7), and *Large / Full* (8 - 10). The items and number sold by Grendel are random, although he is more likely to sell health potions.

<img src="https://image.prntscr.com/image/45oA683kT6SYAlk3mlAQAA.png" alt="Table of Monsters" width="400"/>

### Chests

Chests contain items that help buff the user.

<img src="https://image.prntscr.com/image/YuJaDdGuQTK8b1XLK-f3UA.png" alt="Chest Items" width="400" />

### Abilities

Abilities do more damage than regular attacks, but need to be unlocked and cost mana to cast. Additionally, abilities cause status effects that weaken monsters.

<img src="https://image.prntscr.com/image/WZ6mJE0aTjqE5xdheNCRdw.png" alt="In-game Screenshot of Abilities" />

### Battles

Battles consist of the user and monster taking turns attacking each other. The user always goes first and is given four options:

1. Attack - performs a standard attack based on the character's ATK stat
2. Use special ability - casts one of the special abilities 
3. Open inventory - use a valid item in the user’s inventory
4. Run away - ends the battle

If the user performs a valid move, the monster will then attack. When attacking, the monster has a 33% chance to use its special move, which deals more damage than a regular attack. 

If the monster has a status effect, they may feel its effects. Once a monster has  a status effect, it cannot gain a new one

<img src="https://image.prntscr.com/image/ZaPTY_x7Sk2o0FTyWdFIzg.png" width="500" alt="Table of status effects" />

The Alcoholic's special ability, *Pain of a Thousand Hangovers*, makes him invulnerable to monster damage for two turns. 

### Monsters

There are 10 different monsters that are grouped into three tiers and spawn based on the floor level. Additionally, the gold dropped by the monsters increases with tier

<img src="https://image.prntscr.com/image/4KqW-x94SSW6-irxqKDgqQ.png" alt="List of monsters" />

### Final Battle

The final battle is a multi-stage battle.

* Stage 1: A mad doggo appears. This monster’s special ability recovers 20 of the doggo’s HP. Upon killing the mad doggo, the player enters stage 2

* Stage 2: Two pups appear, one at a time. The pups’ special ability grants them more DEF, HP, and ATK. The user has five turns to kill each pup. If they fail to do so, the pup runs off

* Stage 3: A scared doggo appears that has a lot of HP, but not so much attack. 
* Stage 4: A mad doggo appears. If any pups ran away from stage 2, the mad doggo will eat them and gain a defense boost. 

* Stage 5: The final doggo appears. The player has 3 turns to kill the doggo. If they fail to do so, the dog will unleash its final move and the player will lose. No status effects can stop the dogs special move. If the player does beat the final doggo, then they win the game!
