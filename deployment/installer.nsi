!include MUI2.nsh
!include FontReg.nsh
!include FontName.nsh
!include WinMessages.nsh

; The name of the installer
Name "BlueSystem::Deployment v0.9"

;The file to write
OutFile "BlueSystemInstaller.exe"

;The default installation directory
InstallDir "$PROGRAMFILES\BlueSystem"

;Request application privileges for Windows Vista
RequestExecutionLevel admin

;Interface Settings
!define MUI_ABORTWARNING

;Pages
;!insertmacro MUI_PAGE_COMPONENTS

!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES
  
;Languages
!insertmacro MUI_LANGUAGE "Spanish"


Section "Fonts"
; Alternate for older versions of NSIS: pre NSIS v2.0rc1
;  push $1
;  System::Call "Shell32::SHGetSpecialFolderLocation(i $HWNDPARENT, i ${CSIDL_FONTS}|${CSIDL_FLAG_CREATE}, *i .r0)"
;  System::Call "Shell32::SHGetPathFromIDList(i r0, t .r1)"
;  System::Call 'shell32::SHGetMalloc(*i . r2)' ; IMalloc
;  System::Call '$2->5(i r0)' ; ->Free
;  System::Call '$2->2()' ; ->Release
;  StrCpy $FONT_DIR $1
;  pop $1
 
  StrCpy $FONT_DIR $FONTS
 
  !insertmacro InstallTTFFont 'code128.ttf'
 
  SendMessage ${HWND_BROADCAST} ${WM_FONTCHANGE} 0 0 /TIMEOUT=5000
SectionEnd

; The stuff to install
Section "BlueSystem::Base" ;No components page, name is not important

  ; Set output path to the installation directory.
  SetOutPath $INSTDIR
  
  ; Put file there
  File libgcc_s_dw2-1.dll
  File libmysql.dll
  File mingwm10.dll
  File QtCore4.dll
  File QtGui4.dll
  File QtSql4.dll
  File QtNetwork4.dll
  File qjson0.dll
  File nd.dll
  File qt_es.qm
  File BlueSystem.exe
  File BlueSystemManager.exe
  File BlueUpdater.exe
  File 7za.exe
  File config.ini
; File code128.ttf
  File /r sqldrivers
  File /r tmp
;  File /r image
  
   ; Write the installation path into the registry
  WriteRegStr HKLM "SOFTWARE\BlueSystem\Base"  "Install_Dir" "$INSTDIR"
  
  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\BlueSystem\Base" "DisplayName" "BlueSystem::Base"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\BlueSystem\Base" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\BlueSystem\Base" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\BlueSystem\Base" "NoRepair" 1
  WriteUninstaller "uninstall.exe"
  
SectionEnd ; end the section

Section "Start Menu Shortcuts"

  CreateDirectory "$SMPROGRAMS\BlueSystem"
  CreateShortCut "$SMPROGRAMS\BlueSystem\Desinstalar.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  CreateShortCut "$SMPROGRAMS\BlueSystem\Terminal.lnk" "$INSTDIR\BlueSystem.exe" "" "$INSTDIR\BlueSystem.exe" 0
  CreateShortCut "$SMPROGRAMS\BlueSystem\Manager.lnk" "$INSTDIR\BlueSystemManager.exe" "" "$INSTDIR\BlueSystemManager.exe" 0
  CreateShortCut "$SMPROGRAMS\BlueSystem\Actualizador.lnk" "$INSTDIR\updater\BlueUpdater.exe" "" "$INSTDIR\updater\BlueUpdater.exe" 0
  CreateShortCut "$DESKTOP\BlueSystem.Terminal.lnk" "$INSTDIR\BlueSystem.exe" "" "$INSTDIR\BlueSystem.exe" 0
  
SectionEnd

Section "Uninstall"
  
  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\BlueSystem\Base"
  DeleteRegKey HKLM "SOFTWARE\BlueSystem\Base"

  ; Remove files and uninstaller
  Delete $INSTDIR\*.*
  Delete $INSTDIR\sqldrivers\*.*
  Delete $INSTDIR\tmp\*.*
  Delete $INSTDIR\sqldrivers
  Delete $INSTDIR\tmp

  ; Remove shortcuts, if any
  Delete "$SMPROGRAMS\BlueSystem\*.*"
  Delete "$DESKTOP\BlueSystem.Terminal.lnk"

  ; Remove directories used
  RMDir "$SMPROGRAMS\BlueSystem"
  RMDir "$INSTDIR"

SectionEnd
