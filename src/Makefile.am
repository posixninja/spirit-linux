## Process this file with automake to produce Makefile.in

## Created by Anjuta

uidir = $(datadir)/spirit_linux_gtk/ui
ui_DATA = spirit_linux_gtk.ui

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(SPIRIT_LINUX_GTK_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = spirit_linux_gtk

spirit_linux_gtk_SOURCES = \
	callbacks.c \
	callbacks.h \
	main.c \
	../ \
	../ \
	../ \
	spirit.c \
	afc.h \
	afc.c \
	spirit.h

spirit_linux_gtk_LDFLAGS = \
	-Wl,--export-dynamic

spirit_linux_gtk_LDADD = $(SPIRIT_LINUX_GTK_LIBS)

EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(datadir)/spirit_linux_gtk
