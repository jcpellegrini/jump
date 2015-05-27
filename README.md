# jump

jump is a multiplayer mud game. Each player has a server with a map.
Other players can connect to one server and walk through the map, and
maps have passages, through which users are sent to other servers.

Since jump will run in different servers, we don't expect to
make a highly competitive game (the server owner could easily cheat).
However, we can:
* implement non-competitive games
* implement a history-checking engine that allows anyone to
  check if a server has cheated (maybe using cryptographic 
  commitment techniques)

# Roadmap

Currently only the map walking part is implemented. The next steps are:

* make jump work via `telnet` (read/write from/to TCP
  socket)
* implement curses interface
* implement graphical interface (Tk or GTK, maybe?)
* implement passages, so the user will be sent to different servers
* write history explaining plugins, so that the whole adventure of a user
  through a server is "told in natural language"
* expand the previous item so a user can also have his history told,
  in natural language, through different servers


