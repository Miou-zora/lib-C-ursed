{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
    buildInputs = [
        pkgs.gcc
        pkgs.criterion
        pkgs.gcovr
    ];

    shellHook = ''
        export CC=gcc
    '';
}