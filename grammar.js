function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}
module.exports = grammar({
  name: 'fourd',
  rules: {
    source_code: $ => repeat($._token),
    _token: $ => choice($.c_declaration, $.array_declaration, $.comment),
    array_declaration: $ => seq($.array_type, optional($.command_suffix), $.array_declaration_arguments),
    c_declaration: $ => seq($.c_type, optional($.command_suffix), $.c_declaration_arguments),
    array_type: $ => choice(
      caseInsensitive('array object'),
      caseInsensitive('array pointer'),
      caseInsensitive('array picture'),
      caseInsensitive('array boolean'),
      caseInsensitive('array longint'),
      caseInsensitive('array integer'),
      caseInsensitive('array blob'),
      caseInsensitive('array date'),
      caseInsensitive('array time'),
      caseInsensitive('array real'),
      caseInsensitive('array text'),
      caseInsensitive('tableau objet'),
      caseInsensitive('tableau pointeur'),
      caseInsensitive('tableau image'),
      caseInsensitive('tableau booleen'),
      caseInsensitive('tableau entier long'),
      caseInsensitive('tableau reel'),
      caseInsensitive('tableau blob'),
      caseInsensitive('tableau date'),
      caseInsensitive('tableau texte'),
      caseInsensitive('tableau entier'),
      caseInsensitive('tableau heure'),
      caseInsensitive('_o_tableau alpha'),
      caseInsensitive('_o_array string')
    ),
    c_type: $ => choice(
      caseInsensitive('c_variant'),
      caseInsensitive('c_object'),
      caseInsensitive('c_collection'),
      caseInsensitive('c_pointer'),
      caseInsensitive('c_picture'),
      caseInsensitive('c_boolean'),
      caseInsensitive('c_longint'),
      caseInsensitive('c_blob'),
      caseInsensitive('c_date'),
      caseInsensitive('c_real'),
      caseInsensitive('c_text'),
      caseInsensitive('c_time'),
      caseInsensitive('c_objet'),
      caseInsensitive('c_pointeur'),
      caseInsensitive('c_image'),
      caseInsensitive('c_booleen'),
      caseInsensitive('c_entier_long'),
      caseInsensitive('c_reel'),
      caseInsensitive('c_texte'),
      caseInsensitive('c_heure'),
      caseInsensitive('_o_c_graph'),
      caseInsensitive('_o_c_string'),
      caseInsensitive('_o_c_integer'),
      caseInsensitive('_o_c_graphe'),
      caseInsensitive('_o_c_alpha'),
      caseInsensitive('_o_c_entier')
    ),
    array_declaration_arguments: $ => seq(
      '(',
        $.declaration_argument,
        $.argument_separator,
        choice($.integer_constant, $.declaration_argument),
      ')'
    ),
    c_declaration_arguments: $ => seq(
      '(',
        optional($.declaration_argument_list),
      ')'
    ),
    argument_separator: $ => ';',
    declaration_argument_list: $ => seq($.declaration_argument, repeat(seq($.argument_separator, $.declaration_argument))),
    declaration_argument: $ => seq(choice($.interprocess_variable, $.parameter, $.local_variable, $.identifier)),
    identifier: $ => seq(/[A-Za-z_]/, repeat(choice(/[A-Za-z_ 0-9]/))),
    interprocess_variable: $ => seq('<>', $.identifier),
    local_variable: $ => seq('$', $.identifier),
    parameter: $ => seq('$', /\d+/),
    command_suffix: $ => /:C\d+/,
    integer_constant: $ => /\d+/,
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});
