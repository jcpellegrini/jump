
all:
	gcc -Wall kbd_interaction.c readmap.c main.c -o jump

install:
	cp jump /usr/local/bin
	cp po/es/jump.mo /usr/share/locale/es/LC_MESSAGES
	cp po/pt/jump.mo /usr/share/locale/pt/LC_MESSAGES
	cp po/fr/jump.mo /usr/share/locale/fr/LC_MESSAGES

clean:
	rm -f /usr/local/bin/jump
	rm -f /usr/share/locale/pt/LC_MESSAGES/jump.mo
	rm -f /usr/share/locale/es/LC_MESSAGES/jump.mo
	rm -f /usr/share/locale/fr/LC_MESSAGES/jump.mo
 

