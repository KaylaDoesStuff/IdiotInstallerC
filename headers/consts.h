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