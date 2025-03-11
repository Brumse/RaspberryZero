# Setting up Raspberry zero 2 W

### Installing Raspberry Pi OS
```bash
sudo apt install rpi-imager
```
### Open Imager and setup Raspberry Pi OS

1. pluggin SD card to computer
2. Open Raspberry Pi Imager
3. device ➡Raspbery Zero 2 W
4. Operation system ➡Raspberry Pi OS(other)➡Raspberry Pi OS(64 bit)
5. Storage ➡SD-card
6. Next
7. Edit settings
8. General  ➡ Setup hostname and passwords under General
9. Service  ➡enable SSH ➡use password authentication
10. save and flash the settings to the SD-card
11. Insert the SD-card in your Raspberry Zero and plugin the powercable.

### Log in to the Zero
```bash
ssh "Name of raspberry".local
```
### Configure git in your raspberry
##### change "yourname","your.email@example.com" and "your-github-username" in the script
```bash
git config --global init.defaultBranch main
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
git config --global github.user "your-github-username"
```
```bash
#Generate SSH key
ssh-keygen -t ed25519 -C "your-email@example.com" -f ~/.ssh/id_ed25519 -N "" 

#Print it on screen for copying and adding to github SSH keys.
cat ~/.ssh/id_ed25519.pub 

# Test git login
ssh -T git@github.com
```

### Install programs

```bash
sudo apt-get update && sudo apt-get install -y build-essential cmake gcc-arm-none-eabi libnewlib-arm-none-eabi gdb-multiarch openssh-server sudo vim nano gdb git && sudo mkdir -p /var/run/sshd
```

### Clone the repository
```bash 
git clone git@github.com:Brumse/RaspberryZero.git 
cd picozero

```
### Configure Vim 
```bash
echo 'set nocompatible' >> ~/.vimrc
```
### Build the program
```bash
cmake -S . -B build
make -C build
sudo make -C build install
```
### Run test
```bash
sudo blink
```
----------------------
