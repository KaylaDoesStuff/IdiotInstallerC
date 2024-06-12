const char aptFilePlacement[13] = "/usr/bin/apt";
const char pacmanFilePlacement[16] = "/usr/bin/pacman";
const char yumFilePlacement[13] = "/usr/bin/yum";
const char pkgFilePlacement[13] = "/usr/bin/pkg";
const char rpmFilePlacement[13] = "/usr/bin/rpm";
const char xbpsFilePlacement[22] = "/usr/bin/xbps-install";

const char* pManagersPlacement[] = {
    "/usr/bin/apt",
    "/usr/bin/pacman",
    "/usr/bin/yum",
    "/usr/bin/pkg",
    "/usr/bin/rpm",
    "/usr/bin/xbps-install"
};

const char* pManagers[] = {
    "Debian",
    "Arch",
    "RHEL",
    "BSD",
    "Fedora",
    "Void"
};

const char* installType[] = {
    "File Managers",
    "Browsers",
    "Terminals",
    "Media", 
    "Gaming", 
    "Connection Utilities", 
    "Desktop Environments", 
    "Extras", 
    "Games", 
    "Emulators"
};

const char* fileManagers[] = {
    "Caja", 
    "Thunar", 
    "Dolphin", 
    "Nautilus"
};

const char* browsers[] = {
    "Chrome", 
    "Chromium", 
    "Opera", 
    "Firefox", 
    "LibreWolf", 
    "Edge"
};

const char* terminal[] = {
    "Alacritty", 
    "Kitty", 
    "XTerm",
    "Konsole", 
    "GNOME"
};

const char* gaming[] = {
    "Steam", 
    "Discord", 
    "Prism Launcher", 
    "ATLauncher", 
    "Heroic Launcher", 
    "Lutris", 
    "ProtonUp-QT"
};

const char* media[] = {
    "Spotify", 
    "VLC", 
    "ThunderBird", 
    "OBS Studio", 
    "KdenLive", 
    "DaVinci Resolve", 
    "Rhythm Box"
};

const char* desktop[] = {
    "KDE Plasma", 
    "GNOME", 
    "Xfce4", 
    "LXQT", 
    "MATE", 
    "i3", 
    "Bspwm", 
    "Sway"
};

const char* connection[] = {
    "Moonlight", 
    "Sunshine", 
    "Haguichi(Hamachi)", 
    "ZeroTier", 
    "WireGuard", 
    "OpenSSH", 
    "Anydesk", 
    "TeamViewer"
};

const char* games[] = {
    "Xonotic", 
    "Sauerbraten", 
    "MineTEST", 
    "Open Doom", 
    "Open Arena", 
    "OsuLAZER"
};

const char* emulators[] = {
    "RetroArch", 
    "OpenEmu", 
    "PCSX2", 
    "Citris", 
    "Duck Station", 
    "Dolphin EMU", 
    "PPSSPP", 
    "Ryujinx"
};

const char* extra[] = {
    "Paru", 
    "Yay", 
    "Pamac", 
    "Connman", 
    "Blueman", 
    "NetworkManager", 
    "Hyfetch", 
    "Htop", 
    "Cmatrix", 
    "Papirus Icons"
};