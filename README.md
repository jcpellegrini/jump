# jump

jump is a multiplayer mud game. Each player has a server with a map.
Other players can connect to one server and walk through the map, and
maps have passages, through which users are sent to other servers.

# Roadmap

Currently only the map walking part os implemented. The next steps are:

* make jump work via `telnet` (read/write from/to TCP
  socket)
* implement curses interface
* implement graphical interface (Tk or GTK, maybe?)
* implement passages, so the user will be sent to different servers
* write history explaining plugins, so that the whole adventure of a user
  through a server is "told is natural language"
* expand the previous item so a user can also have his history told,
  in natural language, through different servers


