src_lib_sdl = files(['sdl_core.cpp', 'sdl_window.cpp', 'sdl_exception.cpp'])

sdl_dep = dependency('sdl2')  # Meson trouvera SDL2 via pkg-config

# Créer la bibliothèque


inc_src = include_directories('.')

mylib = library('mylib', src_lib_sdl, dependencies: [sdl_dep], install: true)

# Créer un objet declare_dependency pour les sous-répertoires
mylib_dep = declare_dependency(
  link_with: mylib
)


