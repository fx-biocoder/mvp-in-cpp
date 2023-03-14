# Easy Model-View-Presenter implementation in C++ using Factory Method Design Pattern

This repo contains a project made with Visual Studio Community 2022, written in C++, which is basically a game about a soldier choosing between different weapons and doing different actions according to the options that the player chooses.

## Factory Method design pattern

The game has a `WeaponFactory` class which dynamically creates the `Weapon` that the soldier chooses. Otherwise one would have to instantiate all `Weapon` subclasses (`Rifle`, `Shotgun` and `Revolver`) before letting the soldier choose them. This design pattern avoids unnecessary dynamic memory allocation and improves efficiency.

## Contributing

Contributions are always welcome!
