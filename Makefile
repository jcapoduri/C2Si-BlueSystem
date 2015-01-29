#############################################################################
# Makefile for building: BlueSystem
# Generated by qmake (3.0) (Qt 5.4.0)
# Project:  BlueSystem.pro
# Template: subdirs
# Command: D:\Qt\Qt5.4.0\5.4\mingw491_32\bin\qmake.exe -spec win32-g++ CONFIG+=debug -o Makefile BlueSystem.pro
#############################################################################

MAKEFILE      = Makefile

first: make_first
QMAKE         = D:\Qt\Qt5.4.0\5.4\mingw491_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = del
SYMLINK       = copy /y
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		sub-terminal \
		sub----Neodymium \
		sub-manager


sub-terminal-qmake_all:  FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile
	cd terminal\ && $(MAKE) -f Makefile qmake_all
sub-terminal: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile
sub-terminal-make_first-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub-terminal-make_first: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub-terminal-all-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub-terminal-all: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub-terminal-clean-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-terminal-clean: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-terminal-distclean-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-terminal-distclean: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-terminal-install_subtargets-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub-terminal-install_subtargets: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub-terminal-uninstall_subtargets-ordered: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-terminal-uninstall_subtargets: FORCE
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub----Neodymium-qmake_all: sub-terminal-qmake_all FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile
	cd ..\Neodymium\ && $(MAKE) -f Makefile qmake_all
sub----Neodymium: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile
sub----Neodymium-make_first-ordered: sub-terminal-make_first-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub----Neodymium-make_first: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub----Neodymium-all-ordered: sub-terminal-all-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub----Neodymium-all: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub----Neodymium-clean-ordered: sub-terminal-clean-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub----Neodymium-clean: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub----Neodymium-distclean-ordered: sub-terminal-distclean-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub----Neodymium-distclean: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub----Neodymium-install_subtargets-ordered: sub-terminal-install_subtargets-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub----Neodymium-install_subtargets: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub----Neodymium-uninstall_subtargets-ordered: sub-terminal-uninstall_subtargets-ordered  FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub----Neodymium-uninstall_subtargets: FORCE
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-manager-qmake_all: sub----Neodymium-qmake_all FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile
	cd manager\ && $(MAKE) -f Makefile qmake_all
sub-manager: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile
sub-manager-make_first-ordered: sub----Neodymium-make_first-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub-manager-make_first: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile 
sub-manager-all-ordered: sub----Neodymium-all-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub-manager-all: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile all
sub-manager-clean-ordered: sub----Neodymium-clean-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-manager-clean: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile clean
sub-manager-distclean-ordered: sub----Neodymium-distclean-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-manager-distclean: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile distclean
sub-manager-install_subtargets-ordered: sub----Neodymium-install_subtargets-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub-manager-install_subtargets: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile install
sub-manager-uninstall_subtargets-ordered: sub----Neodymium-uninstall_subtargets-ordered  FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall
sub-manager-uninstall_subtargets: FORCE
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile uninstall

Makefile: BlueSystem.pro ../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf ../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/spec_pre.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/qdevice.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/device_config.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/common/shell-win32.conf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/qconfig.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_clucene_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_core.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_core_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_designer.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_gui.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_help.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_help_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_location.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_location_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_network.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_network_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qml.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_quick.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_script.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_script_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_sql.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_svg.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webview.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_webview_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_xml.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/qt_functions.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/qt_config.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/win32/qt_config.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/spec_post.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/exclusive_builds.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/default_pre.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/win32/default_pre.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/resolve_config.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/exclusive_builds_post.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/default_post.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/win32/rtti.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/precompile_header.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/warn_on.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/win32/windows.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/testcase_targets.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/exceptions.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/yacc.prf \
		../../Qt/Qt5.4.0/5.4/mingw491_32/mkspecs/features/lex.prf \
		BlueSystem.pro
	$(QMAKE) -spec win32-g++ CONFIG+=debug -o Makefile BlueSystem.pro
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\spec_pre.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\qdevice.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\device_config.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\common\shell-win32.conf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\qconfig.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axbase.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axbase_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axcontainer.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axcontainer_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axserver.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_axserver_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_bluetooth.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_bluetooth_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_bootstrap_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_clucene_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_concurrent.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_concurrent_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_core.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_core_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_declarative.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_declarative_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_designer.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_designer_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_designercomponents_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_enginio.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_enginio_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_gui.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_gui_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_help.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_help_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_location.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_location_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_multimedia.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_multimedia_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_multimediawidgets.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_multimediawidgets_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_network.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_network_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_nfc.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_nfc_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_opengl.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_opengl_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_openglextensions.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_openglextensions_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_platformsupport_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_positioning.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_positioning_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_printsupport.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_printsupport_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qml.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qml_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qmldevtools_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qmltest.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qmltest_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_qtmultimediaquicktools_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_quick.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_quick_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_quickparticles_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_quickwidgets.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_quickwidgets_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_script.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_script_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_scripttools.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_scripttools_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_sensors.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_sensors_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_serialport.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_serialport_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_sql.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_sql_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_svg.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_svg_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_testlib.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_testlib_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_uitools.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_uitools_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webchannel.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webchannel_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webkit.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webkit_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webkitwidgets.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webkitwidgets_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_websockets.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_websockets_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webview.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_webview_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_widgets.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_widgets_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_winextras.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_winextras_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_xml.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_xml_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_xmlpatterns.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\modules\qt_lib_xmlpatterns_private.pri:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\qt_functions.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\qt_config.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\win32\qt_config.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\win32-g++\qmake.conf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\spec_post.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\exclusive_builds.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\default_pre.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\win32\default_pre.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\resolve_config.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\exclusive_builds_post.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\default_post.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\win32\rtti.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\precompile_header.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\warn_on.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\win32\windows.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\testcase_targets.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\exceptions.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\yacc.prf:
..\..\Qt\Qt5.4.0\5.4\mingw491_32\mkspecs\features\lex.prf:
BlueSystem.pro:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ CONFIG+=debug -o Makefile BlueSystem.pro

qmake_all: sub-terminal-qmake_all sub----Neodymium-qmake_all sub-manager-qmake_all FORCE

make_first: sub-terminal-make_first-ordered sub----Neodymium-make_first-ordered sub-manager-make_first-ordered FORCE
all: sub-terminal-all-ordered sub----Neodymium-all-ordered sub-manager-all-ordered FORCE
clean: sub-terminal-clean-ordered sub----Neodymium-clean-ordered sub-manager-clean-ordered FORCE
distclean: sub-terminal-distclean-ordered sub----Neodymium-distclean-ordered sub-manager-distclean-ordered FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-terminal-install_subtargets-ordered sub----Neodymium-install_subtargets-ordered sub-manager-install_subtargets-ordered FORCE
uninstall_subtargets: sub-terminal-uninstall_subtargets-ordered sub----Neodymium-uninstall_subtargets-ordered sub-manager-uninstall_subtargets-ordered FORCE

sub-terminal-debug_ordered:
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile debug
sub----Neodymium-debug_ordered: sub-terminal-debug_ordered 
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile debug
sub-manager-debug_ordered: sub----Neodymium-debug_ordered 
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile debug
debug: sub-terminal-debug_ordered sub----Neodymium-debug_ordered sub-manager-debug_ordered

sub-terminal-release_ordered:
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile release
sub----Neodymium-release_ordered: sub-terminal-release_ordered 
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile release
sub-manager-release_ordered: sub----Neodymium-release_ordered 
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile release
release: sub-terminal-release_ordered sub----Neodymium-release_ordered sub-manager-release_ordered

sub-terminal-check_ordered:
	@if not exist terminal\ mkdir terminal\ & if not exist terminal\ exit 1
	cd terminal\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\terminal\terminal.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile check
sub----Neodymium-check_ordered: sub-terminal-check_ordered 
	@if not exist ..\Neodymium\ mkdir ..\Neodymium\ & if not exist ..\Neodymium\ exit 1
	cd ..\Neodymium\ && ( if not exist Makefile $(QMAKE) D:\dev\Neodymium\Neodymium.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile check
sub-manager-check_ordered: sub----Neodymium-check_ordered 
	@if not exist manager\ mkdir manager\ & if not exist manager\ exit 1
	cd manager\ && ( if not exist Makefile $(QMAKE) D:\dev\C2Si-BlueSystem\manager\manager.pro -spec win32-g++ CONFIG+=debug -o Makefile ) && $(MAKE) -f Makefile check
check: sub-terminal-check_ordered sub----Neodymium-check_ordered sub-manager-check_ordered
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

