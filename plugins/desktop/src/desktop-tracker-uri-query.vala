// This file is part of GNOME Games. License: GPL-3.0+.

private class Games.DesktopTrackerUriQuery : Object, TrackerUriQuery {

	private const uint HANDLED_GAMES_PER_CYCLE = 5;
	private const string MIME_TYPE = "application/x-desktop";
	private Game[] games;

	public GriloCover getCover(string path) {
		var app_info = new DesktopAppInfo.from_filename (path);
		var title = new DesktopTitle (app_info);
		var icon = new DesktopIcon (app_info);
		var uid = new DesktopUid (app_info);
		var media = new GriloMedia (title, this.MIME_TYPE);
		var cover = new GriloCover (media, uid);

		return cover;
		}

	public string get_query () {
		return "SELECT ?soft WHERE { ?soft nie:isLogicalPartOf 'urn:software-category:Game' . }";
	}
}
