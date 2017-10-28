// This file is part of GNOME Games. License: GPLv3

public class Games.DesktopUid : Object, Uid {
	private DesktopAppInfo app_info;
	private string uid;

	public DesktopUid (DesktopAppInfo app_info) {
		this.app_info = app_info;
	}

	public string get_uid () throws Error {
		uid = Checksum.compute_for_string (ChecksumType.SHA256, app_info.get_id());

		return @"desktop-$uid";
	}
}
