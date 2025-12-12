doxygen = find_program('doxygen')

doxygen_target = custom_target(
  'doxygen',
  input: ['Doxyfile'],
  output: ['html/index.html'],
  command: [doxygen, 'Doxyfile'],
  capture: true
)
