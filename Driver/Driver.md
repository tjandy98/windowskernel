# Driver

Every driver has an entry point `DriverEntry`, akin to `main` in user-mode applications.

Warnings are treated as errors by the compiler. Since the arguments are not used in this basic driver (hence the compiler throwing warnings), the macro `UNREFERENCED_PARAMETER` is used.

`extern "C"` is prepended to `DriverEntry` to include C-linkage.

Every driver should also have an unload routine to clean up and prevent memory leak (kernel will not clean up). 