{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
    buildInputs = [
        pkgs.gcc
        pkgs.criterion
        pkgs.gcovr
    ];

    shellHook = ''
        export CC=gcc
        alias c='clear ; ls'
        alias mlt='make lib_tests_run'
    '';
}