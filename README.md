# Midterm IoT Project

Will Ye

10/11/2017

## Light Switch Light Sensor

The Light Switch Light Sensor, or LSLS for short, is designed to work with a Light Switch Activator to automatically turn on your lights depending on how bright or dim it currently is. I designed it to be simple and intuitive, with its main function being an additional interface or sensor to the Light Switch Activator. However, it works as a standalone by sending you an email when it reaches a specific point in brightness.

This project engages the data security topics we discussed in class by collecting and sending sensitive data. If hackers manage to access this data and the device is placed indoors, they can easily tell when the house's occupants are asleep or away if the light sensor records dim brightness. This can lead to malicious activity such as physical burglary, creepy tracking or unethical selling of data to companies.

## Form

I decided to 3D print my enclosure to ensure durability as well as to give it a polished look. I really like the look of the two colors from the two different prints, although that was an unintended aesthetic. Overall, I wanted a minimalist/clean look, and 3D printing was quite easy to do since all I had to model was a simple box and lid.

## Technical details

The code is very simple. On a loop, it checks the light levels and publishes the information so that the Light Switch Activator can receive it. If the Light Switch Activator is activated, the Light Sensor will blink an LED 3 times to indicate it has been triggered.

If the light levels are above a certain value, it will also send an email using IFTTT. I added a `delay` to prevent duplicate emails.

Here is what the Fritzing diagram looks like:

![fritzing](https://github.com/williamyeny/physical-computing-midterm/blob/master/lsls-fritzing.PNG?raw=true)

