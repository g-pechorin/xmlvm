package org.xmlvm.demo.xokoban;

/**
 * As long as we don't support reading and writing of files, we store the
 * string-representations of the levels in this class.
 *
 * The following characters are valid to define a board:
 * ' ': A floor tile
 * '#': A wall piece
 * '@': The man
 * '+': Man on goal
 * '$': A ball
 * '*': A ball in goal
 * '.': A goal tile
 * '_': Empty tile outside the game board
 *
 * Except for the first level, all other are taken from: http://users.bentonrea.com/~sasquatch/sokoban/
 */
public class Levels {
    private static final String[] levels = {
            // Demo level to explain the principle of Sokoban
            "__###___\n__#.#___\n__# ####\n###$ $.#\n#. $@###\n####$#__\n___#.#__\n___###__",

            // First 10 levels are re-ordered to have some simpler levels at the beginning
            "#######\n#     #\n# .$. #\n# $.$ #\n# .$. #\n# $.$ #\n#  @  #\n#######",
            "####__\n# .#__\n#  ###\n#*@  #\n#  $ #\n#  ###\n####__",
            "######\n#    #\n# #@ #\n# $* #\n# .* #\n#    #\n######",
            "__####___\n###  ####\n#     $ #\n# #  #$ #\n# . .#@ #\n#########",
            "########\n#      #\n# .**$@#\n#      #\n#####  #\n____####",
            "_#######\n_#     #\n_# .$. #\n## $@$ #\n#  .$. #\n#      #\n########",
            "######_#####\n#    ###   #\n# $$     #@#\n# $ #...   #\n#   ########\n#####_______",
            "__######\n__# ..@#\n__# $$ #\n__## ###\n___# #__\n___# #__\n#### #__\n#    ##_\n# #   #_\n#   # #_\n###   #_\n__#####_",
            "#####_\n#.  ##\n#@$$ #\n##   #\n_##  #\n__##.#\n___###",
            "______#####\n______#.  #\n______#.# #\n#######.# #\n# @ $ $ $ #\n# # # # ###\n#       #__\n#########__",
            
            "####_____\n#  ######\n#       #\n# ..# $ #\n### # $ #\n__# ##@##\n__#    #_\n__######_",
            "__#######\n__#     #\n__#  .# #\n_###@.  #\n## $ ####\n# $  #___\n#   ##___\n#####____",
            "____#####\n#####...#\n#   $ @ #\n#  $ $ ##\n##  ####_\n_#  #____\n_####____",
            "#####__\n#   ###\n#. $*@#\n# # # #\n#     #\n#######",
            "____#####\n____#   #\n#####$# #\n#   #   #\n#    .* #\n######@##\n_____###_",
            "##########\n#  .#    #\n#   # $$ #\n#. .# @$##\n## ##   #_\n_#     ##_\n_#  ####__\n_####_____",
            "#######\n#  $. #\n#  $.@#\n#  $. #\n#  ####\n####___",
            "___######\n___#  . #\n#### #  #\n# @$$#. #\n#       #\n######  #\n_____####",
            "___####_\n___#  #_\n___#  #_\n___#  #_\n##### ##\n#  @$$ #\n#   .. #\n########",
            "__####___\n__#  #___\n__#  ####\n__#     #\n#### ## #\n#  @$$..#\n#     ###\n#######__",
            "_######\n##    #\n# $$#@#\n# . . #\n#  ####\n####___",
            "____#####\n##### . #\n#  @    #\n#  $# . #\n## $ # ##\n_#     #_\n_#######_",
            "_#####_\n_#   #_\n_#$@.#_\n## # ##\n#     #\n#  *  #\n#######",
            "#######\n# . . #\n#     #\n#   ###\n###$$@#\n__#   #\n__#####",
            "#####__\n#   ###\n#  @$ #\n##... #\n_# $$ #\n_#  ###\n_####__",
            "_####___\n_#  ####\n##$.#  #\n# $.$ @#\n#  .   #\n########",
            "#####__\n#.  ###\n# #   #\n#  $$@#\n# ## ##\n#   .#_\n######_",
            "_######\n_#    #\n##. . #\n# $$###\n# @ #__\n#   #__\n#####__",
            "##########_\n#        #_\n# ######.#_\n# $ $ @  ##\n##     #. #\n_######   #\n_____#    #\n_____#   ##\n_____#####_",
            "#######\n#  .  #\n# @.$ #\n# $.$##\n##   #_\n_#####_",
            "__#####\n###   #\n# . . #\n# $$  #\n##@$.##\n_##  #_\n__####_",
            "_####__\n##  #__\n#   ###\n#.**$@#\n#     #\n##  ###\n_####__",
            "#######\n#. #  #\n#  $  #\n#. $#@#\n#  $  #\n#. #  #\n#######",
            "#########\n#       #\n#@$***. #\n#       #\n###  ####\n__####___",
            "__________\n_########_\n## .....##\n#   $$$  #\n#  $   $ #\n# @#######\n####______",
            "###############\n# .....       #\n# $ $ $ $ $ @ #\n#  ############\n####___________",
            "____#####\n____#   #\n#####@# #\n# $  $  #\n#   $ #.#\n#   ###.#\n#####_#.#\n______###",
            "____######\n#####    #\n# . @$## #\n# # $$ . #\n# ##.### #\n#        #\n##########",
            "#####_____\n#   #_____\n# # ######\n#   #@   #\n### #$.  #\n#    $ ###\n# # # .#__\n#   ####__\n#####_____",
            "#######\n# .+. #\n# $$$ #\n##   ##\n_#   #_\n_#####_",
            "_######_\n##    ##\n#  #...#\n#@$$$ ##\n#     #_\n#######_",
            "#####___\n#   #___\n# # #___\n#   ####\n# $$$@ #\n##...  #\n_#######",
            "__####___\n###  #___\n#    ####\n#  $$# .#\n#   $  .#\n###### .#\n_____#  #\n_____# @#\n_____####",
            "#######\n#    .#\n#  # .#\n#@$$$.#\n#  #  #\n#######",
            "__#####_\n###   ##\n#   #  #\n# #* # #\n# @ $# #\n###.   #\n__######",
            "#####_#####\n#   ###   #\n# @ . .   #\n# ### #####\n# $ $   #__\n###     #__\n__#######__",
            "___#####\n####   #\n# .#   #\n# .$$$ #\n# .#  ##\n#  # ##_\n#  @ #__\n######__",
            "____######\n#####    #\n# . #$$$@#\n# .    # #\n# .###   #\n#   ######\n#   #_____\n#####_____",
            "__########\n__#      #\n### #### #\n# $    # #\n#  $  @..#\n###  #####\n__####____",
            "__######\n__#    #\n### .# #\n#  $*@ #\n#    ###\n#  ###__\n####____",
            "_######_\n_#    #_\n##    ##\n# $**$ #\n#  .. @#\n########",
            "_#####_\n## @ ##\n# $ $ #\n#  #  #\n# * * #\n##. .##\n_#####_",
            "_######_____\n##    #####_\n# @$$ # . #_\n# $  $  . ##\n###  ###.  #\n__##### .  #\n______#    #\n______######",
            "____####__\n____#  ###\n____#$ ..#\n____#  ###\n#####$ #__\n#      #__\n# @ #  #__\n########__",
            "_######\n_#   @#\n##* . #\n#  $  #\n#   ###\n#####__",
            "_####____\n_#  #____\n_#  #####\n_#$   @ #\n##  #   #\n#. *#####\n#   #____\n#####____",
            "_#####_\n_#   ##\n## @  #\n# .$# #\n#.*$  #\n#  ####\n####___",
            "_______######\n__####_#    #\n###  #_# ...#\n# $$ #####  #\n# #  $   #  #\n# #         #\n# ####### @##\n#          #_\n############_",
            "########__\n#   #  ###\n#   $  #.#\n##$##  #.#\n#  ##$##.#\n#  #   $.#\n#  #   # #\n##@##### #\n_#       #\n_#########",
            "__########\n__#      #\n__# #### #\n###$ #.# #\n#. $ #.# #\n##   $.# #\n_# $ #@  #\n_##  #####\n__####____",
            "#####________\n#   ####_####\n#      ###  #\n#  $$$....$@#\n####    ##  #\n___##########",
            "__####__####__#####\n__#  #__#  ####   #\n###  #### .$    @ #\n#       $  ########\n#   ##### .#_______\n#####___####_______",
            "___####___\n___#. ####\n___#.  $ #\n__##.# @ #\n### .#####\n#  $$ #___\n#   $ #___\n##    #___\n_######___",
            "_########\n##  #   #\n#     @ #\n#....# ##\n## $ $ #_\n_####$ #_\n__#  $ #_\n__#    #_\n__######_",
            "____#######___\n___##     ##__\n####  ###  #__\n#  .$#   # ###\n#         .$@#\n#  .$#   # ###\n####  ###  #__\n___##     ##__\n____#######___",
            "___#####\n_###@  #\n##  $# #\n# $ *  #\n# #.. ##\n#   ###_\n#####___",
            "######____\n# .@ #____\n# .#$#####\n# .# $   #\n##    $  #\n_#  ######\n_####_____",
            "###########\n#   . #   #\n#@ ## # $ #\n#  . .#$  #\n#  #    $##\n#  #  #  #_\n#  ####  #_\n####__####_",
            "__########\n_##  #   #\n_#.. $$ @#\n##.. #   #\n#   ##$ ##\n#   # $ #_\n#####   #_\n____#####_",
            "#############\n#           #\n# ######### #\n# #   #   # #\n# #       # #\n# ## ### ## #\n# $@$ # .  .#\n#     #   ###\n###########__",
            "#######____\n#     ####_\n#  .  #  ##\n##.. ##   #\n_###   $$ #\n__# $ ## ##\n__#   #  #_\n__##### @#_\n______#  #_\n______####_",
            "##########\n#   .#   #\n#  #.  $ #\n## #.# $##\n#  ###  #_\n#   @  $#_\n#  ###  #_\n####_####_",
            "__#####____\n###   #____\n#   # #####\n#  $  ##..#\n## #$$   .#\n_#$ @#   .#\n_#  #######\n_####______",
            "____######\n__###    #\n###  $ $ #\n#   $ $ @#\n#   ######\n## ....##_\n_#######__",
            "___#######_\n__##  @  ##\n###       #\n#    ###  #\n#  # ...  #\n## ########\n_# $    #__\n_# $  $ #__\n_#####  #__\n_____####__",
            "_#####_____\n_#   ######\n_# $      #\n## #  $ $ #\n#   ####$##\n# @ .... #_\n##########_",
            "__#######__\n_##     ###\n_#@  .....#\n## ### ####\n# $ $ $ #__\n#  $ $  #__\n##     ##__\n_#######___",
            "##########\n#  .#    #\n#  .$.@  #\n## $#$#  #\n_#    #  #\n_#########",
            "______#####\n____###   #\n#####  $  #\n#   # ##.##\n# $@# #  #_\n# $$    ##_\n#   ### ##_\n####     #_\n___#  ...#_\n___#######_",
            "__####___\n###  ####\n#       #\n# $@**. #\n#  ##   #\n#########",
            "#######_\n#     #_\n# @## ##\n# .# $ #\n##*#$  #\n# .   ##\n#   ###_\n#####___",
            "______####\n#######  #\n#      $ #\n# @ ##$  #\n##..# $$ #\n_#      ##\n_#..#  ##_\n_#######__",
            "_#####_#####\n_#   ###   #\n_#         #\n_# ### #####\n_# # $  #___\n## #@$  #___\n#  # $  #___\n#  ### ##___\n#  ... #____\n########____",
            "_#######___\n_#   . #___\n## # # #___\n#  @ . ##__\n#  # #  #__\n## # .  #__\n_# ########\n_#   $ $  #\n_# $      #\n_#######  #\n_______####",
            "#####____\n# ..###__\n# ..  ###\n# @#$$  #\n## $  # #\n_## $   #\n__###  ##\n____####_",
            "__#######_\n_##  #  #_\n##  $$  #_\n#    #. #_\n#@$$ #. #_\n#  ###. ##\n#  #_#   #\n####_#.  #\n_____#####",
            "####________\n#  #________\n# @#________\n#  ########_\n## $ $ $  #_\n#         ##\n#  ######  #\n## . . .   #\n_###########",
            "___######_\n___#.   #_\n___#.   #_\n___#.# $#_\n___#.#  ##\n#### # $ #\n# $  $@# #\n#   ##   #\n##########",
            "##########\n#   ..   #\n#  $..$  #\n### ## ###\n_# $  $ #_\n_#  @   #_\n_########_",
            "###########\n#   ##.   #\n# $$@..$$ #\n#    .##  #\n###########",
            "__________####_\n__________#  #_\n#########_#@ ##\n#   #   #_#   #\n#   $$# ###.# #\n####  $    .  #\n__#  ######.# #\n__#  #____#   #\n__#  #____#####\n__####_________",
            "_#########_\n##   #   ##\n#    #    #\n#  $ # $  #\n#   *.*   #\n####.@.####\n#   *.*   #\n#  $ # $  #\n#    #    #\n##   #   ##\n_#########_",
            "_____####\n######  #\n#   #   #\n#  ...  #\n##$### ##\n# $ $   #\n# @ #   #\n#########",
            "########\n#      #\n# .$$. #\n# $..$ #\n# $..$ #\n# .$$. #\n#@     #\n########",
            "___#####___\n___#   ###_\n___#   $.#_\n___## ## ##\n#####.#   #\n#   $@$   #\n#   #.#####\n#####  #___\n__#    #___\n__#    #___\n__######___",
            "_######_______\n_#    #_______\n## #  #_______\n# $ # #_______\n#  $  #_______\n#@### ###_____\n#   $   ######\n#### $ $.....#\n___#  ########\n___####_______",
            "________#######_\n__####_##     ##\n###  #_#       #\n#    #_# .#  @ #\n# $  #_# .###  #\n## $#####.#_####\n# $   $  .#_____\n#  $ ### .#_____\n#   ##_####_____\n#####___________",
            "_________####_________\n_________#  ##########\n######___#           #\n#    ##### ## $$ $ $ #\n#  #    ....## ####  #\n#  @  ####  #     ####\n#     #__#  #      #__\n#######__####### # #__\n_______________#   #__\n_______________#####__",
            "########\n#  #   #\n#. # $ #\n#.$#   #\n#. # $##\n#.$   #_\n# @#  #_\n#######_",

            // These are the original 50 Sokoban Levels
            /*
            "____#######________\n____#     #########\n##### ### #@##  ..#\n# $  $          ..#\n#   # ## #####  ..#\n### # ## #___######\n__#  $ $ #_________\n__###  $##_________\n____#$  #__________\n____#   #__________\n____#####__________\n",
            "__############\n__#    #     #\n__# $  $ $ $ #\n###### ##$ $ #\n#..  # #  $ ##\n#..    @ ##  #\n#..  #$####  #\n#..  # $  $  #\n#..  #     ###\n############__\n",
            "########_________\n#....  ##########\n##...    $  $   #\n#....  ## $  $  #\n######### $ # ###\n________##$ $ #__\n________# $  $#__\n________# $#$ ##_\n________#     @#_\n________########_\n",
            "###########________\n#    #    ##_______\n#  $$#$$  @#_______\n#     $   ##_______\n#    #    ##_______\n## #########_______\n#  $ #     #_______\n# $$ #$ $ $########\n#  $     $ #  ....#\n# $$$#$  $ #  ....#\n#    #  $ $   ....#\n############  ....#\n___________#  ....#\n___________########\n",
            "__________######_\n__________#    #_\n________### ## #_\n________# $ $  #_\n#########  $  ##_\n#....  ##$  $ @#_\n#....    $ $$ ##_\n#....  ## $  $###\n######### ###   #\n________#     $ #\n________# #$##  #\n________#   #####\n________#####____\n",
            "___#########\n___#  ##   #\n___# $  $  #\n___#  $# $ #\n#### $ #$  #\n#..### # $ #\n#..  # # $ #\n#..     $$ #\n#..  ###   #\n#..  #_##@##\n######__###_\n",
            "####_________\n#  ###_#####_\n# $$ #_#...#_\n#    ###...#_\n# $ $ $ ...#_\n# $  ### ..#_\n### #####$###\n#  $  ###   #\n#    $      #\n## # @## $$ #\n_#######   ##\n_______#####_\n",
            "__########______\n__#......#______\n__#......#______\n__#......#______\n__#      #______\n__#      #______\n#####  #########\n#   $    $ $ $ #\n#    $ #$#   # #\n#@#$ $ $  ##   #\n### $# #  #### #\n__#  $ $  #    #\n__# $# $ #  $  #\n__#    $   $ $ #\n__#  ###########\n__####__________\n",
            "_____########____\n_____#      #____\n###### $$ $ #####\n#@ $  $    $  $ #\n##   #$ $   #   #\n_#####  $ $ #####\n_____# $$$ ##____\n_____### ########\n______## ##  ...#\n______#  ##  ...#\n______#      . .#\n______#####  ...#\n__________#  ...#\n__________#######\n",
            "____###############\n____#           #.#\n____# ######### #.#\n##### #       # #.#\n# ..# # $$$ $$$ #.#\n# ..# #  $      #.#\n#  ## # $$ $ $##..#\n## #  #  $ $  #...#\n#    ###### ###...#\n#     # $ $ $ #...#\n###   #  $    #...#\n# $   # $$ $$ #...#\n#  $$$#    $  #...#\n# $$   $$  $ $ ...#\n##@####       #   #\n_###__#############\n",
            "#######____________\n#.....#____________\n#...#.#____________\n#.. ..#_####_______\n#.    ###  ########\n#### ## $         #\n####    #  $$ #   #\n_#   $ #  # $ #####\n_# # $ $$ # ###____\n_#  #$##     #_____\n_##  $ $$## ##_____\n__##      $  #_____\n___### @###$ #_____\n_____####_#  #_____\n__________####_____\n",
            "________#######__\n________#     #__\n____#####     ###\n#####   ## ##...#\n#     # ## ##...#\n# ###$$$ $ ##...#\n# #   $ $  ##...#\n# #  $ $ $###...#\n# #   $@$   ## ##\n# #  $ $ $ $#  #_\n# # ######     #_\n#              #_\n################_\n",
            "_####______________\n_#  #____##########\n_#$ ######    ##  #\n## $  $   $  $... #\n# $ #   #  #$#.#. #\n#   ##  ##$ $ . . #\n# $    $ # # #.#. #\n#  # #$  #    . . #\n# # $#@$## # #.#. #\n#  $ #$ #  #  ... #\n###     #  #    ###\n__##   ##  #####___\n___#########_______\n",
            "_____________####_\n______########  #_\n______#     #   #_\n____### ###   # #_\n#####     $   # #_\n#   $ $ ###$$ # #_\n#  $ $$$  # $## #_\n#  #$   #  $  # #_\n##   #### ### #$##\n_# ###......     #\n_#   $......## # #\n_# ###......##   #\n_#$$ #   #########\n_#     # $@$ #____\n_#######     #____\n_______#######____\n",
            "_____#####_______\n######   #_______\n#  #     #_______\n# $$  #  #_______\n#   ### #######__\n##  #.....#   #__\n_#  $..  . $# ###\n_# $#.....# #   #\n_## ####$##     #\n_#  #      $ ####\n_#  # @ $ # $#___\n_#  $  ##$   #___\n_### #$   ####___\n___#  $   #______\n___#   #  #______\n___########______\n",
            "_________######\n_____#####    #\n######   # $  #\n#    # $ @$   #\n#  $  # # $  ##\n###$  $ ## ###_\n__#   ## $$#___\n__###$##   #___\n__#...$ $  ##__\n__#. . #    #__\n__#..# #$ $ #__\n__#..##  ####__\n__#.....##_____\n__#######______\n",
            "___######_______\n___#    #_______\n#### ## #######_\n# @$  $   #   ##\n# # $  $  # $  #\n#  $  ##### #  #\n#### ##  #### ##\n__#  #  ##  #  #\n__#            #\n__#######  #  ##\n___#..  #  ####_\n___#..      #___\n___#..  #   #___\n___##########___\n",
            "__####_________####\n__#  ###########  #\n__#               #\n__#  $ # #  # $## #\n__## #    #$ $$ # #\n####$##$# $ #   # #\n#    .. ##  ## ## #\n# $ #...   $ #  $ #\n##  # ..###     ###\n_##### ##..# ####__\n_____# #.    @ #___\n_____#  .  #   #___\n_____###########___\n",
            "###################\n#       #  ## ....#\n####$  $# $   ....#\n#    $    $   ..#.#\n#  $  #### # #....#\n## ###   # # ######\n## # #$#   # #_____\n## #  $  # # #_____\n## $ $ ### # #_____\n## $  $    # #_____\n# $ #  ##### #_____\n# $ #  ##    #_____\n#   ##    ####_____\n##### $   #________\n__#   @####________\n__######___________\n",
            "___########________\n___#      ##_######\n___#    $$ ###....#\n#### $###    #$ ..#\n#    $ # $ $ #  #.#\n# #$   $  $  #$ ..#\n# #    #  ####  #.#\n# ###  #  #  #$ ..#\n# #  ### ##     #.#\n# # $  #     #$ ..#\n# # $     #  #  #.#\n# #    ## #  #$ ..#\n# #######$####  ###\n#     #   $  #@ #__\n#####        ####__\n____##########_____\n",
            "______#####____\n_____##   #####\n_##### $  #...#\n_#   # # ##...#\n_# #   # #.. .#\n_#   ##   ....#\n####  $$$ $#  #\n#  # ##  $ ####\n#  # ## $  #___\n# $$$ $  $$#___\n## #@##    #___\n## #### #  #___\n#       ####___\n#       #______\n#########______\n",
            "###################\n#         #       #\n## ###### $ ##### #\n# $     $ $  $    #\n# $   ### $   $  ##\n#  $ $####$#### $#_\n# # $ #.... ..#  #_\n# #   $........$ #_\n# ##  # ......#  #_\n# #   #.......# $#_\n#  $ ########### ##\n##$ $   # @# $    #\n#  $  $  $ # $ $  #\n#   $#  #  $  #   #\n#    #######  #####\n######_____####____\n",
            "_####__####___#####\n##. ####  #####   #\n#.. #  #  #   #   #\n#.. # $#  #  $#$  #\n#.. #  #$$#$  #  ##\n#.. # $#     $#  #_\n#..@#  #$ #$  #  #_\n#..   $#  # $    #_\n#.  #     #$  #  #_\n#.. # $#$ #  $####_\n#.. #  #  #   #____\n##### $#$ #  ##____\n____#  #  ####_____\n____#######________\n",
            "_##############____\n_# @##  #  #  #____\n_#  #  $      #####\n_#  $  $#$$$  #   #\n_# $  #  $  $ $   #\n###    $ ## #  # ##\n###  $ #  #  ### ##\n# $ #$###    ### ##\n#  $#  # ##  ### ##\n#      #   ##  # ##\n## ####   #  $ #  #\n#      $  $     $ #\n###########$ #   ##\n#..........$$.#  #_\n#..........  .####_\n###############____\n",
            "##########____#####\n#        #____#   #\n# ######$###### $ #\n# #   ##        ###\n# #    $     #   #_\n# #### #$$$$$    #_\n#      #    #$#$###\n#  $ #$$$##       #\n##$ # $   ######  #\n# $ #     ######@ #\n#   ##$######  ####\n##$#    ........#__\n#  # # ##### ...#__\n#  #   ..#......#__\n#  ##############__\n####_______________\n",
            "______########_\n______#      ##\n_######  ##$$@#\n##  #  $$ #   #\n##$       $ $ #\n#   # $########\n#  $#  #... .#_\n# $ #$$ ...  #_\n#  $#  #...  #_\n##  #  #...###_\n_#  #  #####___\n_#######_______\n",
            "_______######______\n_#######  @ ##_____\n_# $    $##$ ######\n_# $ $$     $  $  #\n_#  ## ### #  ##$ #\n_##   $    # $    #\n__#     #$##$ ##$##\n######### $  $ $  #\n#......#  #  # #  #\n#......#  $  #    #\n##.....  $## # #$ #\n_#...   #    #   ##\n_#################_\n",
            "_________#####___\n____######   #___\n____#   $ $  ####\n____# $$  $ #  .#\n___##  $ $  $...#\n####  $ $$  ##..#\n#@ #$ ## ####...#\n# $   #    #... #\n## #  #    #... #\n#  ###### ###.. #\n#       $$  ##..#\n##### $  $ $ ##.#\n____## $  $  ####\n_____#####   #___\n_________#####___\n",
            "###################\n#  #   #   #   #  #\n#  $   $  $    $  #\n# $########## ##$ #\n## ##  . .. .  # ##\n#  ## .. ..... # ##\n#  ### ######### ##\n#  #      $ #   $ #\n## #   $#$#@  #   #\n## # #       ######\n# $  #########_____\n#   ##_____________\n#####______________\n",
            "____#####____#####_\n#####   ######...##\n#  ## $ #  ##.... #\n# $   $ #   #..$. #\n#  ### ## $ #....##\n## #     $  #....#_\n## #   ### #####$#_\n## ###   # ##    #_\n# $  @$$ # ##$$$ #_\n# $ ##   # ## $  #_\n#   ##### $## # ##_\n#####__#     $ $ #_\n_______#   #     #_\n_______###########_\n",
            "___#####__________\n___#...#__________\n___#...##_________\n___#....####______\n_####......####___\n_#  #....     #___\n##  ###  ###$ #___\n# $ $ #$#  #  #___\n# $    $  $## ####\n#  #  # #   $$$  #\n##  $## #$ $     #\n_#$  $  # $ $#  ##\n_#  $# $@$   ####_\n_##  ##  #   #____\n__#  #########____\n__####____________\n",
            "_________###___\n____######@##__\n____#....#$ ##_\n____#....# $ #_\n____#.... $  #_\n____# ...#   #_\n###### ##### ##\n# $ $   $  #  #\n#    $$   $ $ #\n### $ $ $  ####\n__##   $ $ #___\n__##  ######___\n___####________\n",
            "###############\n###.#      ####\n##..# $  $ #  #\n#...# ## $ #  #\n#.....  #$$   #\n##....$    #$ #\n#### #######  #\n#   $        ##\n#  $ #  $# $ ##\n# $### $ # $$ #\n#   @#  ##    #\n###############\n",
            "________####___\n__#######  ####\n__#    $  ....#\n###   # # ..#.#\n# $$ #  # ....#\n#    # $# ..#.#\n##$###$  ###  #\n_#  #  $ $    #\n_#    $ $  #$ #\n_# $## $ ##  ##\n_## #### # @##_\n__#   #  $ ##__\n__###     ##___\n____#######____\n",
            "_######_######_____\n_#    #_#    #_____\n## ## ### $  #_____\n# $$     $$  #_____\n#  $ ## ## # #####_\n# # $ $    # #   #_\n# $  $  # ## #   ##\n#  # #$   ## #    #\n#### #  #### # ## #\n_#  $ $##  #      #\n_# $ $     # # ####\n## ## ###  #  ....#\n#   # ###   # ....#\n#   $$#   @  .....#\n#   #    # ###....#\n############_######\n",
            "____###########____\n____#.........#____\n____#.........#____\n_#######.. .###____\n_#     #   ##  #___\n_# $$ $ #   $$ #___\n_# $  #   ###  ###_\n_# $  ###$### $  ##\n_##$##### @##     #\n__# ##### #####$$ #\n### $  ## ##     ##\n#   $ $     $  $ #_\n# $   ## ## ##  ##_\n#   ####  $ $ $ #__\n#####__######   #__\n____________#####__\n",
            "________###________\n____#####@#####____\n___##   # #   #____\n___#    $  $  #____\n___#  $ $ ## ######\n__### ## #    ##  #\n__#  $   #$#$ ##$ #\n__#  $$ $ $  $##  #\n###    #   #$  #$ #\n#...#$#####    #  #\n#... $ $ #   ##   #\n#..### $    $     #\n#......   #  ##   #\n#......   #########\n###########________\n",
            "_####______\n_#  #######\n_#$  $    #\n_#   # #$ #\n_# #. .# ##\n_# $...  #_\n##$#...# #_\n#   $## $#_\n#     $  #_\n####### @#_\n______####_\n",
            "_____#####_________\n######   ###_______\n#    #  $$ #_______\n# $$$# $   #_####__\n#  $ #$ $ $###  #__\n#   $   #       #__\n# $###  # ##### ###\n##   $  $ ##   .  #\n## ##### ### ##.###\n#  $ ## $  #  ....#\n#  $ ## $$ # # ...#\n#      $$ $#  ....#\n#  $$##  $ @##....#\n##   ##     ##....#\n_#############....#\n_____________######\n",
            "#########________\n#....   #________\n#....   #________\n#.#... ##________\n#....#  ########_\n######$$   #   #_\n___#    ## $$# #_\n___#  #  ##  $ #_\n___## $ $   ## #_\n___#   # $   # #_\n___#   $ #$  # #_\n___## ## # $ # ##\n____#$ #$#  ## @#\n____#  # #$$ $  #\n____#          ##\n____############_\n",
            "______________####_\n_____________##  ##\n##############  $ #\n#........... #    #\n#.# #######. #$ $##\n#.# ####### ##   ##\n#.            $$$@#\n#  ######## ##    #\n####___#   $$ #####\n_______# $    $ #__\n_______## $$  $ #__\n________##  $$  #__\n_________##     #__\n__________##   ##__\n___________#####___\n",
            "_______#####______\n__######   ######_\n__#  $  $  $  $ #_\n###  $  $  $  $ #_\n#   ### ###$  $ ##\n# #$...... $$# $ #\n# # ......#$  $  #\n#   ......#  #   #\n### ......#  $$ ##\n__# ## ##$#$ $ $##\n__#    ## $ $   @#\n__####      ######\n_____########_____\n",
            "__________#########\n########_##   #   #\n#...#  ###  $  $  #\n#...#    @ # ### ##\n#...    # ##  #   #\n#  ### $#$  $  $  #\n##      # #  ## ###\n_#### #$$ ## ##  #_\n____#   #   $    #_\n____#####  #  ####_\n________#######____\n",
            "__________#########\n__________#       #\n__________# ### # #\n_____####_# #...# #\n######  ###  ...  #\n#         # #...# #\n#  $#  $  # ## ## #\n##  #### ##$      #\n_# ##### #  #$ ####\n_# #### $    $ #___\n_# $ ##$ ###   #___\n_#      $@######___\n_# # #######_______\n_#   #_____________\n_#####_____________\n",
            "###_____________\n# ##____####____\n#  ######  ###__\n#   # $ $$ $ ###\n#  $ @ $    $  #\n# $ # #$  $    #\n#  ## # ### ####\n# ##    #  $  #_\n###... ## $ $ #_\n##....##   $  #_\n#....## $  $###_\n#...###  $  #___\n#...#_#  ####___\n#####_####______\n",
            "__________######\n__________#    #\n#####___### ## #\n#.. ##### $  # #\n#..     $   $# #\n#..  ## ##   # #\n#.. ## $ #$ $# #\n#.. #     $  # #\n#.. #  $ ###$  #\n#.. # $ $  $ ###\n### ## # $    #_\n__#    #@## $ #_\n__#########  ##_\n__________####__\n",
            "__####____________\n__#  #######______\n###$       #######\n# $  $$  $ ##....#\n#  $# ###$$   ...#\n# #   @   #   ...#\n# #$$ $ $$#$##...#\n#   ## ##   ##...#\n##  $      $ #####\n_#########  ##____\n_________####_____\n",
            "____####________\n#####  #________\n#  $ $ #_#######\n#   $  #_# . . #\n## $ $ ###. . .#\n_#$ $  #   . . #\n_#@$ $    . . ##\n_#$ $  #   . . #\n## $ $ ###. . .#\n#   $  #_# . . #\n#  $ $ #_#######\n#####  #________\n____####________\n",
            "_______#########\n_______#  ##   #\n_____### $     #\n__#### @$  ##$##\n###  #### ### #_\n#  $ # #. ..# #_\n# #   $ ....# #_\n#    # #....$ #_\n###  # #####  #_\n__####    $   #_\n_____###$  $ ##_\n_______# $$ ##__\n_______#   ##___\n_______#  ##____\n_______####_____\n",
            "__####______######_\n__#  #______#    ##\n__#  ###___##     #\n__#$   #___#    # #\n__# $# #####      #\n__#   $   # # #####\n###$$   # # # # #__\n# $   $   # #   #__\n# @$ $ ###  #   ##_\n#  ## #          #_\n####...#  #    # #_\n___#.. .# # # $  #_\n___##.. .# # # $##_\n____##..  $    $ #_\n_____##..    #   #_\n______############_\n"
            */
            };

    /**
     * Returns the given level encoded as a string.
     * 
     * @param level
     *            Which level to return.
     * @return The string-representation of the level.
     */
    public static String getLevel(int level) {
        return levels[level];
    }

    /**
     * Returns the number of levels available.
     * 
     * @return The number of levels.
     */
    public static int getSize() {
        return levels.length;
    }
}
