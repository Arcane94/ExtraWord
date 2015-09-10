// This file is part of GNOME Games. License: GPLv3

private class Games.PcEngineGame : Object, Game {
	private const string FINGERPRINT_PREFIX = "pc-engine-";
	private const string MODULE_BASENAME = "libretro-pc-engine.so";

	private string _uid;
	public string uid {
		get {
			if (_uid != null)
				return _uid;

			var fingerprint = Fingerprint.get_for_file_uri (uri);
			_uid = FINGERPRINT_PREFIX + fingerprint;

			return _uid;
		}
	}

	private string _name;
	public string name {
		get { return _name; }
	}

	public Icon? icon {
		get { return null; }
	}

	public Gdk.Pixbuf? cover {
		get { return null; }
	}

	public Gdk.Pixbuf? screenshot {
		get { return null; }
	}

	public bool running {
		get { return false; }
	}

	private string uri;
	private string path;

	public PcEngineGame (string uri) throws Error {
		this.uri = uri;

		var file = File.new_for_uri (uri);
		path = file.get_path ();

		var name = file.get_basename ();
		name = /\.pce$/.replace (name, name.length, 0, "");
		name = name.split ("(")[0];
		_name = name.strip ();
	}

	public Runner get_runner () throws RunError {
		return new RetroRunner (MODULE_BASENAME, path, uid);
	}
}