plugindir = $(libdir)/gnome-games/plugins
plugin_LTLIBRARIES = libgames-love-plugin.la

libgames_love_plugin_la_DEPENDENCIES = \
	$(top_builddir)/src/gnome-games.vapi \
	$(NULL)

libgames_love_plugin_la_SOURCES = \
	love-error.vala \
	love-icon.vala \
	love-package.vala \
	love-plugin.vala \
	love-title.vala \
	$(NULL)

libgames_love_plugin_la_VALAFLAGS = \
	--target-glib=@GLIB_MIN_VERSION@ \
	--pkg gnome-games \
	--pkg libarchive \
	--vapidir $(top_builddir)/src \
	$(NULL)

libgames_love_plugin_la_CFLAGS = \
	$(LOVE_PLUGIN_CFLAGS) \
	$(GNOME_GAMES_CFLAGS) \
	-DRETRO_GTK_USE_UNSTABLE_API \
	-DG_LOG_DOMAIN=\"GamesLove\" \
	-DLOCALEDIR=\"$(localedir)\" \
	$(NULL)

libgames_love_plugin_la_CPPFLAGS = \
	-I$(top_srcdir) \
	-I$(top_srcdir)/src \
	$(NULL)

libgames_love_plugin_la_LIBADD = \
	$(LOVE_PLUGIN_LIBS) \
	$(GNOME_GAMES_LIBS) \
	$(NULL)

libgames_love_plugin_la_LDFLAGS = \
	-no-undefined \
	-module \
	-avoid-version \
	$(NULL)

EXTRA_DIST = \
	$(plugin_DATA) \
	$(NULL)

MAINTAINERCLEANFILES = \
	$(BUILT_SOURCES) \
	$(NULL)

-include $(top_srcdir)/git.mk
