{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
    buildInputs = [
        pkgs.gcc
        pkgs.criterion
        pkgs.gcovr
    ];

    shellHook = ''
        export CC=gcc
        echo "alias 'c'='clear ; ls'" >> ~/.zshrc
        echo "alias 'mlt'='make lib_tests_run'" >> ~/.zshrc
    '';
}