
all:
	gcc -Wall kbd_interaction.c readmap.c main.c -o jump

install:
	cp jump /usr/local/bin
	cp po/es/jump.mo /usr/share/locale/es/LC_MESSAGES
	cp po/pt/jump.mo /usr/share/locale/pt/LC_MESSAGES

