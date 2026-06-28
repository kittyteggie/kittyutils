# Kittyutils
Kittyutils is a project for recreating coreutils but making them into the Unlicense (public domain) and making them extremely simple, just some lines of code that are made for being easy to fork.  

# Current programs
* [Conkitenate](https://github.com/kittyteggie/kittyutils/tree/main/kit) (Kit): Inspired by the Unix's cat command
* [Kittylist](https://github.com/kittyteggie/kittyutils/tree/main/kls) (Kls): Inspired by the Unix's ls command
* [Meow](https://github.com/kittyteggie/kittyutils/tree/main/meow): Inspired by the Unix's echo command

# Compiling
You can compile all files with the Bash script `COMPILE.sh`, something like this:  
```bash
bash COMPILE.sh
```
Or:
```bash
chmod +x COMPILE.sh
./COMPILE.sh
```
All the files should end in the `bin/` directory.  
  
## Installing
If you already compiled the programs and if **you are in the `kittyutils` directory and not in other**. You can use the Bash script `INSTALL.sh`, something like this:  
```bash
bash INSTALL.sh
```
Or:
```bash
chmod +x INSTALL.sh
./INSTALL.sh
```
All the files should be in the `~/.local/bin` directory.  
  
## Uninstall
If the files were already installed, you can use the Bash script ```UNINSTALL.sh```, something like this:  
```bash
bash UNINSTALL.sh
```
Or:
```bash
chmod +x UNINSTALL.sh
./UNINSTALL
```
All the files should be removed from the `~/.local/bin` directory.  
