module.exports = grammar({
  name: 'NAFT',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($.item),

    item: $ => seq($.node, optional($._attributes), optional($._block)),

    node: $ => seq('[', $.name, ']'),
    name: $ => /[^\]]*/,

    _attributes: $ => repeat1($.attribute),
    attribute: $ => choice($._attribute1, $._attribute2),

    _attribute1: $ => seq('(', $.key, ')'),
    _attribute2: $ => seq('(', $.key, ':', $.value, ')'),

    key: $ => /[^:)]*/,
    value: $ => /[^)]*/,

    _block: $ => seq('{', repeat($.item), '}'),
  }
});

