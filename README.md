# CMP105 Alternative Project

_NOTE: This is an example based on the alternative project as if submitted for the Trunk assignment_

## Game 

**Dino Hanyman: The Crown Thief** 

A two-level platformer prototype developed as an alternative trunk project to extend for CMP105 students from 2026 onwards. This project has most of the base requirements for a group submission. In the first level, the player has to navigate to the far right-side of the screen, avoiding pitfalls, and activate a lever before returning to the start. In the second level the player must investigate the high wall, backtrack to a box and jump into it from below to reveal a coin, colliding with the coin grants the ability to double-jump, using which they can navigate to the end of the level.

The engineering for this game is restricted to solely using the framework with few additions. 

**Controls:** 

WASD to move,
Spacebar to jump,
F to interact (prompts will appear when possible),
R to reset (if you get stuck or fall down)
ESC to pause,
left mouseclick in the menu.

***Extension suggestions***

In addition to the proposal laid out below, there are several features which could usefully be added to this game as part of a branch project, here are a few:

* The game cannot be paused
* Entirely rework the player controller for precise teleportation-based movement rather than acceleration (which is odd in a platformer)
* Write a textureLoader or textureManager class
* Write a levelLoader that reads the tilemaps in from a file rather than them being hardcoded
* Create a level editor where players can use the full tileset to create their own levels
* Add more player actions -- the main character has a kick as part of their spritesheet
* Add enemies with platform-restricted pathing 
* Gravity manipulation 
* Create a platforming setpiece to act as the final mechanical challenge

## Student Details

**Student Name:** Pawel Zybura

**Student Number:** 2501632

**Course:** CGAD

---
---

# Proposal

## Brief Overview of game 

Dino Handyman: The Crown Thief, will be a two maybe three level metroidvania platformer where the player controls a small dinosaur with the goal of stealing the king's crown. For each checkpoint the player reaches they will get a coin they can use in the shop to buy an ability between Double Jump, Fireball, or Tailwhip, in order to complete the game. The level will be setup so that progress is possible with any ability which is why they can buy whichever one they want, e.g., a wall in the way can be double jumped over, destroyed with a fireball or grappled on top with the tail. The player will be timed while completing the level and at the end of the game, they will be shown their time and death count alongside the best time achieved.

## Must Have Features

* Abilities: These abilities will help the progress the game and reach the end.

* Shop System: to buy the abilities so that the player doesn't have access to all of the right away.

* Enemies: Knights will be in certain parts of the level and will side to side On collision with the player the level will be reset on collision with an ability they will despawn.

## Should Have Features

* Data-driven Level Loading: To create a level large enough to introduce the new mechanics without making the code a mess. 

* Pausing: The game will be able to be paused with a simple transparent overlay. Shop will preferably be available from here.

* Score: showing this attempts score and highscore at the end of the game.

## Could Have Features

* Checkpoints: Not just a place to get coins but actually respawn too.

* A Heads-up Display: Showing the time taken so far, ability cooldowns and the number of deaths will be shown fixed to the screen.

## Wish to Have Features

* Different Level types: diferent tile sets to show different environments.

* Coyote Time: The platforming will be enhanced by coyote time, a grace period during which the player can still jump even if they are not on a platform. 
