# FMTribe #

OPL3 synth/drum machine/thingie focused on live jamming for DOS.

Tested only with DJGPP and a PC with a Sound Blaster-compatible soundcard.

## Usage ##

* `Esc`: Exit
* `F5`: Play / pause
* `F7`: Stop after bar (2 times, stop immeadiately)
* `F9`: Tap tempo
* `Shift` + `F9`: Toggle metronome
* `Left`: Move left in the channel selector
* `Right`: Move right in the channel selector
* `Del`: Clear pattern for current channel
* `Ctrl` + `Del`: Clear pattern for all channels
* `Tab`: Switch instrument editor for the current channel

### Step Sequencer ###

To toggle a step in the pattern of the 16-step sequencer, use the keys:

    Q W E R T Y U I
    A S D F G H J K

To select one of the eight channels, use keys 1 through 8.

### Instrument Editor ###

To customize the parameters of an instrument, press the Tab key, select a field
and change its value. The parameters will update automatically if the step
sequencer is playing.

* `Left`/`Right`: Increase/decrease value for the current field
* `Up`/`Down`: Move between parameter fields

Also, you can still change channels with the numbers from the instrument
editor.
