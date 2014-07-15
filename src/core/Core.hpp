#pragma once

#include "libtorrent.hpp"
#include "Torrent.hpp"

class Core
{
private:
	bool m_running;

	libtorrent::session m_session;
	vector<Torrent*> m_torrents;

public:
	Core();

	static bool isMagnetLink(string link);
	
	vector<Torrent> &getTorrents();
	Torrent *addTorrent(string path);
	
	bool isRunning();
	void shutdown();
	void update();	
};