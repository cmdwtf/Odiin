# Odiin Prototype

The Odiin Prototype is a hand assembled & soldered device, incorporating many off the shelf parts, a few components from Digi-Key, and a custom-designed PCB to bridge the development board to the screen assembly, as well as an optional 3D printed case.

Ideally if the interest is great enough, I'll be designing a standalone design, rather than the "taped together" version that is the prototype, but that remains to be seen.

The information that follows here is information about building one of your own, if you were so inclined. The Amazon links are affiliate links, as that helps me make a few bucks should you decide to build one! I'm also currently sourcing many of my parts from there for now, too. The information offered here is, as usual, covered under the license of this repository as a whole.

## Image

<img src="https://raw.githubusercontent.com/cmdwtf/Odiin/main/.hardware/Prototype/prototype.jpg" alt="Odiin Prototype without case" width="300" />
* Odiin Prototype, sans case. *

## Bill of Materials

The BoM is in a bit of flux as I tinker and add/remove/change things, but the things here will definitely get you going. Some of these are slightly different from what I ordered (as I ordered a few things in bulk, like SD cards), but this list should get you close enough.

|Part|Source|Number Required|Note|
|:---|:-----|:--------------|:---|
|[Pitaya Go][pitayago]|makerdiary|1|Main development board. This is the nRF52840 brains of the operation, and includes the NFC antenna.|
|[Pitaya-Link][pitayalink]|makerdiary|*0-1*|Optional: This is the tool that I use to program the boards. If you've got another way of programming it, then you don't need this. If you aren't sure: you need this.|
|[Biifröst Bridge][biifrost]|oshpark|1|The bridge PCB that binds the dev board to the screen. Oshpark prints custom PCBs fairly cheaply and ships free. The downside is that you have to order in quantities of 3.|
|[LCD Assembly][lcd]|Amazon|1|The display, a driver chip. Also has the SD Card slot used by the application.
|[SD Card][sdc]|Amazon|1|Any SD card should work, but I've been using PNY or similar ones.
|[Lipo Battery][lipo]|Amazon|1|A 500 mAh battery that was just tiny enough for me to wedge between the dev board and bridge. I had to swap the polarity of the pins with this particular one though!|
|[Breakaway Headers][headers]|Digi-Key/Adafruit|32 pins worth|Used to bind the bridge to the LCD, as well as to the development board. You need two sets of 14 pins for the dev board, plus 5 pins for the SD to LCD. The Digi-Key link is just what I bought, you don't need that many.|
|[JS1400AFQ Switch][navswitch]|Digi-Key|1|The 5-way navigation switch I use for the majority of input. SMD solders to the bridge.|
|[TL9100AF200Q Switch][redswitch]|Digi-Key|2|Though currently unused, these are the two other switches on the board. I have plans for them, they just aren't hooked up in the firmware at the moment.|
|[SK9822 RGB LED][led]|Digi-Key|1|A RGB LED used for visual feedback from the device.

[pitayago]: https://makerdiary.com/products/pitaya-go
[pitayalink]: https://makerdiary.com/products/pitaya-link
[biifrost]: https://oshpark.com/shared_projects/q2DxBpPQ
[lcd]: https://amzn.to/31OYVAU
[sdc]: https://amzn.to/2Qq6etQ
[lipo]: https://amzn.to/34tjTsf
[headers]: https://www.digikey.com/products/en?mpart=4154&v=1528
[navswitch]: https://www.digikey.com/product-detail/en/e-switch/JS1400AFQ/EG5857-ND/4028188
[redswitch]: https://www.digikey.com/product-detail/en/e-switch/TL9100AF200Q/EG5501CT-ND/7087454
[led]: https://www.digikey.com/product-detail/en/adafruit-industries-llc/2343/1528-1436-ND/5761204

## Assembly Instructions

*Coming soon*! It's mostly just soldering the SMD components & pins to the bridge, the LCD to the bridge, and then pressing the bridge into the dev board!
