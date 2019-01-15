# SuperMarioLANG

WIP

## Overview
 
SuperMarioLANG is a 2d language based on mariolang (https://esolangs.org/wiki/MarioLANG) that aim to add detailed specification as well as new functionalities

## functionnement


### tape :

SuperMarioLANG is, at his core, a turing machine, as such it work by unsing a tape

### level :
the level is the file

the level has a size, 
the length is defined as the lenght of the longest line 
the width is defined as the number of the last line containing non-whitespace characters

if mario goes to a coordinate beyond the size of the level he will be out of bound

### mario : 
mario walk around the level according to the *instructions* it recieve, the items it passe trough trigger *instructions*

if he goes out of bound, stop moving completely, is stuck in an endless jump(???), or take a poison mushroom while small, the program will end.

mario come in two size: small and tall, small is the default state and all explanations assume that mario in small state unless specified otherwise.

### phase of step :



## Instructions :


### parts


`=` ground : 

`#` pipe entrance :

`"` pipe exit :


### items:


`(` previous cell:

`)` next cell :

`+` increment cell :

`-` decrement cell :

`,` read imput as ascii character :

`;` read imput as number :

`.` print cell as ascii character :

`:` print cell as number :

`M` magic mushroom : 

`W` poison mushroom :

`?` syscall :


### instructions:


`>` go right :

`<` go left :

`^` jump :

`!` stop :

`@` change direction :

`J` jump :

`I` ignore next if cell =0 :

`[` ignore next if cell <0 :

`]` ignore next if cell >0 :


## specific behavior :


### pipes :

the exit pipe selected by an entry pipe is always the nearest reachable exit on the same x coordinate as the pipe entry,

a pipe is reachable if there is no `=` or `#` on the path from the entrance to the exit 

if no exit are reachable the program will end with an error


### tall mario :



### jump :



---

### Examples :





