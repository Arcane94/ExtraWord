// This file is part of GNOME Games. License: GPL-3.0+.

private class Games.Nintendo64Plugin : Object, Plugin {
	private const string FINGERPRINT_PREFIX = "ms-dos";
	private const string MIME_TYPE = "application/x-ms-dos-executable";
	private const string PLATFORM = "MSDOS";

	public UriGameFactory[] get_uri_game_factories () {
		var game_uri_adapter = new GenericGameUriAdapter (game_for_uri);
		var factory = new GenericUriGameFactory (game_uri_adapter);
		factory.add_mime_type (MIME_TYPE);

		return { factory };
	}

	private static Game game_for_uri (Uri uri) throws Error {
		var uid = new FingerprintUid (uri, FINGERPRINT_PREFIX);
		var title = new FilenameTitle (uri);
		var icon = new DummyIcon ();
		var media = new GriloMedia (title, MIME_TYPE);
		var cover = new CompositeCover ({
			new LocalCover (uri),
			new GriloCover (media, uid)});
		var core_source = new RetroCoreSource (PLATFORM, { MIME_TYPE });
		var runner = new RetroRunner (core_source, uri, uid, title);

		return new GenericGame (title, icon, cover, runner);
	}
}

[ModuleInit]
public Type register_games_plugin (TypeModule module) {
	return typeof(Games.Nintendo64Plugin);
}