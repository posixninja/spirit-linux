## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

spirit_linux_gtkdocdir = ${prefix}/doc/spirit_linux_gtk
spirit_linux_gtkdoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(spirit_linux_gtkdoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(spirit_linux_gtkdocdir)
