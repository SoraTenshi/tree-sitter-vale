#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 483
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 2
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 22
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

enum {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  anon_sym_DeriveStructDrop = 3,
  anon_sym_DeriveInterfaceDrop = 4,
  anon_sym_DeriveAnonymousSubstruct = 5,
  anon_sym_POUND = 6,
  anon_sym_BANG = 7,
  anon_sym_DOT = 8,
  anon_sym_STAR = 9,
  anon_sym_extern = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_pure = 13,
  anon_sym_export = 14,
  anon_sym_exported = 15,
  anon_sym_func = 16,
  anon_sym_PLUS = 17,
  anon_sym_SLASH = 18,
  anon_sym_DASH = 19,
  anon_sym_LT_EQ_GT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_EQ_EQ_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_COMMA = 28,
  anon_sym_Int = 29,
  anon_sym_Ref = 30,
  anon_sym_Kind = 31,
  anon_sym_Region = 32,
  anon_sym_Prot = 33,
  anon_sym_RefList = 34,
  anon_sym_Ownership = 35,
  anon_sym_Variability = 36,
  anon_sym_Mutability = 37,
  anon_sym_Location = 38,
  anon_sym_SQUOTE = 39,
  anon_sym_ro = 40,
  anon_sym_struct = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_mut = 44,
  anon_sym_imm = 45,
  anon_sym_AMP = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  anon_sym_i32 = 49,
  anon_sym_i64 = 50,
  anon_sym_i16 = 51,
  anon_sym_i8 = 52,
  anon_sym_u32 = 53,
  anon_sym_u64 = 54,
  anon_sym_u16 = 55,
  anon_sym_u8 = 56,
  anon_sym_bool = 57,
  anon_sym_float = 58,
  anon_sym_str = 59,
  anon_sym_void = 60,
  anon_sym_set = 61,
  anon_sym_EQ = 62,
  anon_sym_return = 63,
  anon_sym_EQ_GT = 64,
  anon_sym_not = 65,
  anon_sym_AMP_AMP = 66,
  anon_sym_CARET = 67,
  anon_sym_true = 68,
  anon_sym_false = 69,
  anon_sym_while = 70,
  anon_sym_foreach = 71,
  anon_sym_in = 72,
  anon_sym_if = 73,
  anon_sym_else = 74,
  anon_sym_and = 75,
  anon_sym_or = 76,
  anon_sym_lshift = 77,
  anon_sym_rshift = 78,
  anon_sym_xor = 79,
  anon_sym_mod = 80,
  sym_line_comment = 81,
  aux_sym_int_lit_token1 = 82,
  sym_float_lit = 83,
  sym__escape_sequence = 84,
  anon_sym_DQUOTE = 85,
  aux_sym__string_literal_token1 = 86,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 87,
  aux_sym__long_string_literal_token1 = 88,
  sym_identifier = 89,
  sym_source_file = 90,
  sym__top_level = 91,
  sym_import = 92,
  sym_import_path = 93,
  sym_attribute_name = 94,
  sym_attribute = 95,
  sym_scoped_identifier = 96,
  sym_scoped_type_identifier = 97,
  sym_import_wildcard = 98,
  sym_extern = 99,
  sym_func_header = 100,
  sym_func_proto = 101,
  sym_function_definition = 102,
  sym_generic_parameters = 103,
  sym_rune = 104,
  sym_generic_parameter = 105,
  sym_region_parameter = 106,
  sym_region_specifier = 107,
  sym_parameters = 108,
  sym_parameter = 109,
  sym_struct_definition = 110,
  sym_struct_field = 111,
  sym_mutability = 112,
  sym_type = 113,
  sym_reference_type = 114,
  sym_array_access = 115,
  sym_array_type = 116,
  sym_dynamic_array_type = 117,
  sym_static_array_type = 118,
  sym_generic_type = 119,
  sym_int_type = 120,
  sym_block = 121,
  sym_expr_statement = 122,
  sym__statement = 123,
  sym_pattern = 124,
  sym_destruct = 125,
  sym_variable_definition = 126,
  sym_return_expr = 127,
  sym__expr = 128,
  sym_parenthesized_expr = 129,
  sym__expr_ending_with_block = 130,
  sym_lambda = 131,
  sym_not = 132,
  sym_augment = 133,
  sym_field_expr = 134,
  sym_assignment_expr = 135,
  sym_literal = 136,
  sym_bool_lit = 137,
  sym_call_expr = 138,
  sym_generic_function = 139,
  sym_type_parameters = 140,
  sym_type_parameter = 141,
  sym_while_expr = 142,
  sym_foreach = 143,
  sym_if_expr = 144,
  sym_else_if_expr = 145,
  sym_else_expr = 146,
  sym_binary_expr = 147,
  sym_int_lit = 148,
  sym_string_literal = 149,
  sym_escape_sequence = 150,
  sym__string_interpolation = 151,
  sym__string_literal = 152,
  sym__long_string_literal = 153,
  sym__type_identifier = 154,
  sym__path = 155,
  sym__field_identifier = 156,
  aux_sym_source_file_repeat1 = 157,
  aux_sym_generic_parameters_repeat1 = 158,
  aux_sym_parameters_repeat1 = 159,
  aux_sym_struct_definition_repeat1 = 160,
  aux_sym_array_access_repeat1 = 161,
  aux_sym_array_type_repeat1 = 162,
  aux_sym_array_type_repeat2 = 163,
  aux_sym_block_repeat1 = 164,
  aux_sym_destruct_repeat1 = 165,
  aux_sym_lambda_repeat1 = 166,
  aux_sym_call_expr_repeat1 = 167,
  aux_sym_type_parameters_repeat1 = 168,
  aux_sym_if_expr_repeat1 = 169,
  aux_sym__string_literal_repeat1 = 170,
  aux_sym__long_string_literal_repeat1 = 171,
  alias_sym_field_identifier = 172,
  alias_sym_type_identifier = 173,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [anon_sym_DeriveStructDrop] = "DeriveStructDrop",
  [anon_sym_DeriveInterfaceDrop] = "DeriveInterfaceDrop",
  [anon_sym_DeriveAnonymousSubstruct] = "DeriveAnonymousSubstruct",
  [anon_sym_POUND] = "#",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_extern] = "extern",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_pure] = "pure",
  [anon_sym_export] = "export",
  [anon_sym_exported] = "exported",
  [anon_sym_func] = "func",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_COMMA] = ",",
  [anon_sym_Int] = "Int",
  [anon_sym_Ref] = "Ref",
  [anon_sym_Kind] = "Kind",
  [anon_sym_Region] = "Region",
  [anon_sym_Prot] = "Prot",
  [anon_sym_RefList] = "RefList",
  [anon_sym_Ownership] = "Ownership",
  [anon_sym_Variability] = "Variability",
  [anon_sym_Mutability] = "Mutability",
  [anon_sym_Location] = "Location",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_ro] = "ro",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_mut] = "mut",
  [anon_sym_imm] = "imm",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i16] = "i16",
  [anon_sym_i8] = "i8",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u16] = "u16",
  [anon_sym_u8] = "u8",
  [anon_sym_bool] = "bool",
  [anon_sym_float] = "float",
  [anon_sym_str] = "str",
  [anon_sym_void] = "void",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_not] = "not",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_CARET] = "^",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_while] = "while",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_lshift] = "lshift",
  [anon_sym_rshift] = "rshift",
  [anon_sym_xor] = "xor",
  [anon_sym_mod] = "mod",
  [sym_line_comment] = "line_comment",
  [aux_sym_int_lit_token1] = "int_lit_token1",
  [sym_float_lit] = "float_lit",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__long_string_literal_token1] = "_long_string_literal_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_import] = "import",
  [sym_import_path] = "import_path",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute] = "attribute",
  [sym_scoped_identifier] = "scoped_identifier",
  [sym_scoped_type_identifier] = "scoped_type_identifier",
  [sym_import_wildcard] = "import_wildcard",
  [sym_extern] = "extern",
  [sym_func_header] = "func_header",
  [sym_func_proto] = "func_proto",
  [sym_function_definition] = "function_definition",
  [sym_generic_parameters] = "generic_parameters",
  [sym_rune] = "rune",
  [sym_generic_parameter] = "generic_parameter",
  [sym_region_parameter] = "region_parameter",
  [sym_region_specifier] = "region_specifier",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_struct_definition] = "struct_definition",
  [sym_struct_field] = "struct_field",
  [sym_mutability] = "mutability",
  [sym_type] = "type",
  [sym_reference_type] = "reference_type",
  [sym_array_access] = "array_access",
  [sym_array_type] = "array_type",
  [sym_dynamic_array_type] = "dynamic_array_type",
  [sym_static_array_type] = "static_array_type",
  [sym_generic_type] = "generic_type",
  [sym_int_type] = "int_type",
  [sym_block] = "block",
  [sym_expr_statement] = "expr_statement",
  [sym__statement] = "_statement",
  [sym_pattern] = "pattern",
  [sym_destruct] = "destruct",
  [sym_variable_definition] = "variable_definition",
  [sym_return_expr] = "return_expr",
  [sym__expr] = "_expr",
  [sym_parenthesized_expr] = "parenthesized_expr",
  [sym__expr_ending_with_block] = "_expr_ending_with_block",
  [sym_lambda] = "lambda",
  [sym_not] = "not",
  [sym_augment] = "augment",
  [sym_field_expr] = "field_expr",
  [sym_assignment_expr] = "assignment_expr",
  [sym_literal] = "literal",
  [sym_bool_lit] = "bool_lit",
  [sym_call_expr] = "call_expr",
  [sym_generic_function] = "generic_function",
  [sym_type_parameters] = "type_parameters",
  [sym_type_parameter] = "type_parameter",
  [sym_while_expr] = "while_expr",
  [sym_foreach] = "foreach",
  [sym_if_expr] = "if_expr",
  [sym_else_if_expr] = "else_if_expr",
  [sym_else_expr] = "else_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_int_lit] = "int_lit",
  [sym_string_literal] = "string_literal",
  [sym_escape_sequence] = "escape_sequence",
  [sym__string_interpolation] = "_string_interpolation",
  [sym__string_literal] = "_string_literal",
  [sym__long_string_literal] = "_long_string_literal",
  [sym__type_identifier] = "_type_identifier",
  [sym__path] = "_path",
  [sym__field_identifier] = "_field_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_generic_parameters_repeat1] = "generic_parameters_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_array_access_repeat1] = "array_access_repeat1",
  [aux_sym_array_type_repeat1] = "array_type_repeat1",
  [aux_sym_array_type_repeat2] = "array_type_repeat2",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_destruct_repeat1] = "destruct_repeat1",
  [aux_sym_lambda_repeat1] = "lambda_repeat1",
  [aux_sym_call_expr_repeat1] = "call_expr_repeat1",
  [aux_sym_type_parameters_repeat1] = "type_parameters_repeat1",
  [aux_sym_if_expr_repeat1] = "if_expr_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym__long_string_literal_repeat1] = "_long_string_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DeriveStructDrop] = anon_sym_DeriveStructDrop,
  [anon_sym_DeriveInterfaceDrop] = anon_sym_DeriveInterfaceDrop,
  [anon_sym_DeriveAnonymousSubstruct] = anon_sym_DeriveAnonymousSubstruct,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_exported] = anon_sym_exported,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Int] = anon_sym_Int,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_Kind] = anon_sym_Kind,
  [anon_sym_Region] = anon_sym_Region,
  [anon_sym_Prot] = anon_sym_Prot,
  [anon_sym_RefList] = anon_sym_RefList,
  [anon_sym_Ownership] = anon_sym_Ownership,
  [anon_sym_Variability] = anon_sym_Variability,
  [anon_sym_Mutability] = anon_sym_Mutability,
  [anon_sym_Location] = anon_sym_Location,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_ro] = anon_sym_ro,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_imm] = anon_sym_imm,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_lshift] = anon_sym_lshift,
  [anon_sym_rshift] = anon_sym_rshift,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_mod] = anon_sym_mod,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_int_lit_token1] = aux_sym_int_lit_token1,
  [sym_float_lit] = sym_float_lit,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__long_string_literal_token1] = aux_sym__long_string_literal_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_import] = sym_import,
  [sym_import_path] = sym_import_path,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute] = sym_attribute,
  [sym_scoped_identifier] = sym_scoped_identifier,
  [sym_scoped_type_identifier] = sym_scoped_type_identifier,
  [sym_import_wildcard] = sym_import_wildcard,
  [sym_extern] = sym_extern,
  [sym_func_header] = sym_func_header,
  [sym_func_proto] = sym_func_proto,
  [sym_function_definition] = sym_function_definition,
  [sym_generic_parameters] = sym_generic_parameters,
  [sym_rune] = sym_rune,
  [sym_generic_parameter] = sym_generic_parameter,
  [sym_region_parameter] = sym_region_parameter,
  [sym_region_specifier] = sym_region_specifier,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_struct_definition] = sym_struct_definition,
  [sym_struct_field] = sym_struct_field,
  [sym_mutability] = sym_mutability,
  [sym_type] = sym_type,
  [sym_reference_type] = sym_reference_type,
  [sym_array_access] = sym_array_access,
  [sym_array_type] = sym_array_type,
  [sym_dynamic_array_type] = sym_dynamic_array_type,
  [sym_static_array_type] = sym_static_array_type,
  [sym_generic_type] = sym_generic_type,
  [sym_int_type] = sym_int_type,
  [sym_block] = sym_block,
  [sym_expr_statement] = sym_expr_statement,
  [sym__statement] = sym__statement,
  [sym_pattern] = sym_pattern,
  [sym_destruct] = sym_destruct,
  [sym_variable_definition] = sym_variable_definition,
  [sym_return_expr] = sym_return_expr,
  [sym__expr] = sym__expr,
  [sym_parenthesized_expr] = sym_parenthesized_expr,
  [sym__expr_ending_with_block] = sym__expr_ending_with_block,
  [sym_lambda] = sym_lambda,
  [sym_not] = sym_not,
  [sym_augment] = sym_augment,
  [sym_field_expr] = sym_field_expr,
  [sym_assignment_expr] = sym_assignment_expr,
  [sym_literal] = sym_literal,
  [sym_bool_lit] = sym_bool_lit,
  [sym_call_expr] = sym_call_expr,
  [sym_generic_function] = sym_generic_function,
  [sym_type_parameters] = sym_type_parameters,
  [sym_type_parameter] = sym_type_parameter,
  [sym_while_expr] = sym_while_expr,
  [sym_foreach] = sym_foreach,
  [sym_if_expr] = sym_if_expr,
  [sym_else_if_expr] = sym_else_if_expr,
  [sym_else_expr] = sym_else_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_int_lit] = sym_int_lit,
  [sym_string_literal] = sym_string_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__string_interpolation] = sym__string_interpolation,
  [sym__string_literal] = sym__string_literal,
  [sym__long_string_literal] = sym__long_string_literal,
  [sym__type_identifier] = sym__type_identifier,
  [sym__path] = sym__path,
  [sym__field_identifier] = sym__field_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_generic_parameters_repeat1] = aux_sym_generic_parameters_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_struct_definition_repeat1] = aux_sym_struct_definition_repeat1,
  [aux_sym_array_access_repeat1] = aux_sym_array_access_repeat1,
  [aux_sym_array_type_repeat1] = aux_sym_array_type_repeat1,
  [aux_sym_array_type_repeat2] = aux_sym_array_type_repeat2,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_destruct_repeat1] = aux_sym_destruct_repeat1,
  [aux_sym_lambda_repeat1] = aux_sym_lambda_repeat1,
  [aux_sym_call_expr_repeat1] = aux_sym_call_expr_repeat1,
  [aux_sym_type_parameters_repeat1] = aux_sym_type_parameters_repeat1,
  [aux_sym_if_expr_repeat1] = aux_sym_if_expr_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym__long_string_literal_repeat1] = aux_sym__long_string_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveStructDrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveInterfaceDrop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveAnonymousSubstruct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exported] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Region] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Prot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RefList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ownership] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Variability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mutability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rshift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_int_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__long_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_path] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_import_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_func_header] = {
    .visible = true,
    .named = true,
  },
  [sym_func_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_rune] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_region_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_region_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_mutability] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_static_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_int_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_destruct] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr_ending_with_block] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_augment] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__string_interpolation] = {
    .visible = false,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__long_string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_destruct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lambda_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__long_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_block = 1,
  field_body = 2,
  field_condition = 3,
  field_else_block = 4,
  field_else_if = 5,
  field_else_if_block = 6,
  field_else_if_condition = 7,
  field_field = 8,
  field_function = 9,
  field_generic_parameters = 10,
  field_left = 11,
  field_name = 12,
  field_operator = 13,
  field_parameters = 14,
  field_path = 15,
  field_return_type = 16,
  field_right = 17,
  field_rune = 18,
  field_then_block = 19,
  field_type = 20,
  field_type_parameters = 21,
  field_value = 22,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_else_block] = "else_block",
  [field_else_if] = "else_if",
  [field_else_if_block] = "else_if_block",
  [field_else_if_condition] = "else_if_condition",
  [field_field] = "field",
  [field_function] = "function",
  [field_generic_parameters] = "generic_parameters",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_rune] = "rune",
  [field_then_block] = "then_block",
  [field_type] = "type",
  [field_type_parameters] = "type_parameters",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 2},
  [16] = {.index = 27, .length = 2},
  [17] = {.index = 29, .length = 3},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 3},
  [21] = {.index = 41, .length = 2},
  [22] = {.index = 43, .length = 2},
  [23] = {.index = 45, .length = 4},
  [24] = {.index = 49, .length = 4},
  [25] = {.index = 53, .length = 2},
  [26] = {.index = 55, .length = 2},
  [27] = {.index = 57, .length = 3},
  [28] = {.index = 60, .length = 2},
  [29] = {.index = 62, .length = 3},
  [30] = {.index = 65, .length = 4},
  [31] = {.index = 69, .length = 4},
  [32] = {.index = 73, .length = 3},
  [33] = {.index = 76, .length = 3},
  [34] = {.index = 79, .length = 4},
  [35] = {.index = 83, .length = 4},
  [36] = {.index = 87, .length = 5},
  [37] = {.index = 92, .length = 6},
  [38] = {.index = 98, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_operator, 1},
    {field_parameters, 2},
  [4] =
    {field_name, 1},
    {field_parameters, 2},
  [6] =
    {field_name, 2},
    {field_path, 0},
  [8] =
    {field_operator, 2},
    {field_parameters, 3},
  [10] =
    {field_name, 2},
    {field_parameters, 3},
  [12] =
    {field_generic_parameters, 2},
    {field_operator, 1},
    {field_parameters, 3},
  [15] =
    {field_operator, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [18] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
  [21] =
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 3},
  [24] =
    {field_name, 0},
  [25] =
    {field_function, 0},
    {field_type_parameters, 1},
  [27] =
    {field_generic_parameters, 1},
    {field_type, 0},
  [29] =
    {field_generic_parameters, 3},
    {field_operator, 2},
    {field_parameters, 4},
  [32] =
    {field_operator, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [35] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
  [38] =
    {field_name, 2},
    {field_parameters, 3},
    {field_return_type, 4},
  [41] =
    {field_name, 0},
    {field_type, 1},
  [43] =
    {field_name, 0},
    {field_rune, 1},
  [45] =
    {field_generic_parameters, 2},
    {field_operator, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [49] =
    {field_generic_parameters, 2},
    {field_name, 1},
    {field_parameters, 3},
    {field_return_type, 4},
  [53] =
    {field_block, 2},
    {field_condition, 1},
  [55] =
    {field_condition, 1},
    {field_then_block, 2},
  [57] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [60] =
    {field_field, 2},
    {field_value, 0},
  [62] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [65] =
    {field_generic_parameters, 3},
    {field_operator, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [69] =
    {field_generic_parameters, 3},
    {field_name, 2},
    {field_parameters, 4},
    {field_return_type, 5},
  [73] =
    {field_condition, 1},
    {field_else_block, 3},
    {field_then_block, 2},
  [76] =
    {field_condition, 1},
    {field_else_if, 3},
    {field_then_block, 2},
  [79] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [83] =
    {field_condition, 1},
    {field_else_block, 4},
    {field_else_if, 3},
    {field_then_block, 2},
  [87] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
  [92] =
    {field_function, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
    {field_parameters, 4},
    {field_parameters, 5},
  [98] =
    {field_else_if_block, 3},
    {field_else_if_condition, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [13] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 19,
  [31] = 23,
  [32] = 32,
  [33] = 21,
  [34] = 17,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 45,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 46,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 46,
  [63] = 63,
  [64] = 47,
  [65] = 63,
  [66] = 66,
  [67] = 45,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 69,
  [73] = 71,
  [74] = 74,
  [75] = 43,
  [76] = 42,
  [77] = 77,
  [78] = 78,
  [79] = 44,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 78,
  [92] = 92,
  [93] = 93,
  [94] = 48,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 57,
  [100] = 52,
  [101] = 101,
  [102] = 102,
  [103] = 50,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 59,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 61,
  [113] = 113,
  [114] = 51,
  [115] = 115,
  [116] = 116,
  [117] = 54,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 55,
  [122] = 122,
  [123] = 60,
  [124] = 124,
  [125] = 125,
  [126] = 78,
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 127,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 140,
  [144] = 144,
  [145] = 144,
  [146] = 135,
  [147] = 139,
  [148] = 148,
  [149] = 140,
  [150] = 142,
  [151] = 135,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 153,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 138,
  [168] = 138,
  [169] = 169,
  [170] = 170,
  [171] = 162,
  [172] = 172,
  [173] = 165,
  [174] = 174,
  [175] = 170,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 178,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 182,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 179,
  [192] = 192,
  [193] = 193,
  [194] = 181,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 201,
  [203] = 203,
  [204] = 201,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 206,
  [209] = 201,
  [210] = 210,
  [211] = 201,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 213,
  [216] = 216,
  [217] = 213,
  [218] = 213,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 66,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 262,
  [268] = 268,
  [269] = 269,
  [270] = 269,
  [271] = 221,
  [272] = 272,
  [273] = 268,
  [274] = 261,
  [275] = 264,
  [276] = 276,
  [277] = 277,
  [278] = 263,
  [279] = 268,
  [280] = 266,
  [281] = 261,
  [282] = 276,
  [283] = 283,
  [284] = 268,
  [285] = 230,
  [286] = 224,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 261,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 124,
  [306] = 299,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 310,
  [313] = 313,
  [314] = 314,
  [315] = 80,
  [316] = 85,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 81,
  [322] = 322,
  [323] = 89,
  [324] = 318,
  [325] = 308,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 333,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 332,
  [348] = 342,
  [349] = 349,
  [350] = 350,
  [351] = 345,
  [352] = 330,
  [353] = 331,
  [354] = 335,
  [355] = 336,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 326,
  [360] = 360,
  [361] = 349,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 350,
  [369] = 338,
  [370] = 337,
  [371] = 371,
  [372] = 358,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 373,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 381,
  [400] = 400,
  [401] = 401,
  [402] = 105,
  [403] = 403,
  [404] = 104,
  [405] = 405,
  [406] = 96,
  [407] = 407,
  [408] = 403,
  [409] = 93,
  [410] = 410,
  [411] = 411,
  [412] = 375,
  [413] = 413,
  [414] = 414,
  [415] = 375,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 381,
  [422] = 101,
  [423] = 97,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 420,
  [429] = 382,
  [430] = 109,
  [431] = 431,
  [432] = 119,
  [433] = 122,
  [434] = 395,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 440,
  [450] = 255,
  [451] = 253,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 439,
  [456] = 456,
  [457] = 249,
  [458] = 458,
  [459] = 441,
  [460] = 445,
  [461] = 461,
  [462] = 436,
  [463] = 444,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 452,
  [469] = 469,
  [470] = 464,
  [471] = 471,
  [472] = 440,
  [473] = 454,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 252,
  [478] = 476,
  [479] = 467,
  [480] = 258,
  [481] = 481,
  [482] = 482,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'p'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'd' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'k')))
                : (c <= 'q' || (c < 170
                  ? (c < 'y'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'p'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'k')))
                : (c <= 'q' || (c < 170
                  ? (c < 'y'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 's'
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'k' || (c < 'p'
                    ? c == 'n'
                    : c <= 'q')))
                : (c <= 'w' || (c < 181
                  ? (c < 170
                    ? (c >= 'y' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))))))
            : (c <= 895 || (c < 1488
              ? (c < 1015
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 3024
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3024 || (c < 3133
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3762 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8126
        ? (c < 6103
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5743
              ? (c < 4888
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || (c < 6320
                    ? c == 6314
                    : c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42775
            ? (c < 12784
              ? (c < 12449
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))
                : (c <= 12538 || (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))))
              : (c <= 12799 || (c < 42512
                ? (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42623
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))))))
            : (c <= 42783 || (c < 43072
              ? (c < 42965
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43015
                  ? (c < 43011
                    ? (c >= 42994 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))))
              : (c <= 43123 || (c < 43274
                ? (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))))))))))))))
    : (c <= 43492 || (c < 70656
      ? (c < 66940
        ? (c < 64848
          ? (c < 43816
            ? (c < 43705
              ? (c < 43616
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)))
                : (c <= 43638 || (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))
              : (c <= 43709 || (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
            : (c <= 43822 || (c < 64285
              ? (c < 55243
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64285 || (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c >= 64612 && c <= 64829)))))))))
          : (c <= 64911 || (c < 65596
            ? (c < 65345
              ? (c < 65145
                ? (c < 65137
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65137 || (c < 65143
                    ? c == 65139
                    : c <= 65143)))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))))))))
        : (c <= 66954 || (c < 68800
          ? (c < 67808
            ? (c < 67463
              ? (c < 67003
                ? (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))
                : (c <= 67004 || (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))
              : (c <= 67504 || (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))))))
            : (c <= 67826 || (c < 68192
              ? (c < 68030
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'o'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'm')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 'n'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'l')))
                : (c <= 's' || (c < 181
                  ? (c < 170
                    ? (c >= 'u' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))))))
            : (c <= 895 || (c < 1488
              ? (c < 1015
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 3024
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3024 || (c < 3133
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3762 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8126
        ? (c < 6103
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5743
              ? (c < 4888
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || (c < 6320
                    ? c == 6314
                    : c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42775
            ? (c < 12784
              ? (c < 12449
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))
                : (c <= 12538 || (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))))
              : (c <= 12799 || (c < 42512
                ? (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42623
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))))))
            : (c <= 42783 || (c < 43072
              ? (c < 42965
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43015
                  ? (c < 43011
                    ? (c >= 42994 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))))
              : (c <= 43123 || (c < 43274
                ? (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))))))))))))))
    : (c <= 43492 || (c < 70656
      ? (c < 66940
        ? (c < 64848
          ? (c < 43816
            ? (c < 43705
              ? (c < 43616
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)))
                : (c <= 43638 || (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))
              : (c <= 43709 || (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
            : (c <= 43822 || (c < 64285
              ? (c < 55243
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64285 || (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c >= 64612 && c <= 64829)))))))))
          : (c <= 64911 || (c < 65596
            ? (c < 65345
              ? (c < 65145
                ? (c < 65137
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65137 || (c < 65143
                    ? c == 65139
                    : c <= 65143)))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))))))))
        : (c <= 66954 || (c < 68800
          ? (c < 67808
            ? (c < 67463
              ? (c < 67003
                ? (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))
                : (c <= 67004 || (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))
              : (c <= 67504 || (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))))))
            : (c <= 67826 || (c < 68192
              ? (c < 68030
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'r' || (c < 170
                    ? (c >= 't' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'q' || (c < 170
                    ? (c >= 's' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'h' || (c < 170
                    ? (c >= 'j' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(217);
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(37);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '^') ADVANCE(297);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '^') ADVANCE(297);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(395);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == 'w') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(376);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '^') ADVANCE(297);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(395);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == 'w') ADVANCE(358);
      if (lookahead == 'x') ADVANCE(376);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(272);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(395);
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == 'x') ADVANCE(376);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(245);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(395);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(273);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(395);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == '^') ADVANCE(297);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(395);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == 'w') ADVANCE(358);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(273);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(395);
      if (lookahead == 'f') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(334);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(333);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(273);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(395);
      if (lookahead == 's') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '[') ADVANCE(272);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(395);
      if (lookahead == 'r') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '[') ADVANCE(272);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(395);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(277);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(277);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 20:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(281);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(274);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(278);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(275);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(279);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(276);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(280);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'S') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(152);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(192);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(181);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(312);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 76:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 165:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 166:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 184:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 185:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 190:
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'x') ADVANCE(214);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 191:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 192:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 193:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 194:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 201:
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 202:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 203:
      if (lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 206:
      if (lookahead == '{') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 207:
      if (lookahead == '}') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 215:
      if (eof) ADVANCE(217);
      if (lookahead == '!') ADVANCE(225);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '&') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(104);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'M') ADVANCE(191);
      if (lookahead == 'O') ADVANCE(202);
      if (lookahead == 'P') ADVANCE(155);
      if (lookahead == 'R') ADVANCE(57);
      if (lookahead == 'V') ADVANCE(37);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '^') ADVANCE(297);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(215)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(230);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(249);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(128);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DeriveStructDrop);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DeriveInterfaceDrop);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DeriveAnonymousSubstruct);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_exported);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(324);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Int);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Ref);
      if (lookahead == 'L') ADVANCE(85);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_Kind);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_Region);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Prot);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_RefList);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Ownership);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Variability);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Mutability);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Location);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_ro);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ro);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_mut);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_imm);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_imm);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(296);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_set);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '>') ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_not);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_while);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_foreach);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_in);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_and);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_or);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_lshift);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_lshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_rshift);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_rshift);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_xor);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_mod);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead == '\n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'o') ADVANCE(381);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(395);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(365);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(395);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(395);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(359);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(313);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(323);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(311);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 's') ADVANCE(361);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(309);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(388);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(389);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(363);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(305);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(362);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(364);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(356);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(357);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(382);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(350);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(383);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(269);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(368);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(292);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(345);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(307);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(386);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(346);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(380);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(392);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(315);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(351);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(360);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(361);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(295);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(287);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(317);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(319);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(393);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(348);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(378);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(390);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(395);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 216},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 216},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 216},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 216},
  [67] = {.lex_state = 216},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 216},
  [76] = {.lex_state = 216},
  [77] = {.lex_state = 216},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 216},
  [80] = {.lex_state = 216},
  [81] = {.lex_state = 216},
  [82] = {.lex_state = 216},
  [83] = {.lex_state = 216},
  [84] = {.lex_state = 216},
  [85] = {.lex_state = 216},
  [86] = {.lex_state = 216},
  [87] = {.lex_state = 216},
  [88] = {.lex_state = 216},
  [89] = {.lex_state = 216},
  [90] = {.lex_state = 216},
  [91] = {.lex_state = 216},
  [92] = {.lex_state = 216},
  [93] = {.lex_state = 216},
  [94] = {.lex_state = 216},
  [95] = {.lex_state = 216},
  [96] = {.lex_state = 216},
  [97] = {.lex_state = 216},
  [98] = {.lex_state = 216},
  [99] = {.lex_state = 216},
  [100] = {.lex_state = 216},
  [101] = {.lex_state = 216},
  [102] = {.lex_state = 216},
  [103] = {.lex_state = 216},
  [104] = {.lex_state = 216},
  [105] = {.lex_state = 216},
  [106] = {.lex_state = 216},
  [107] = {.lex_state = 216},
  [108] = {.lex_state = 216},
  [109] = {.lex_state = 216},
  [110] = {.lex_state = 216},
  [111] = {.lex_state = 216},
  [112] = {.lex_state = 216},
  [113] = {.lex_state = 216},
  [114] = {.lex_state = 216},
  [115] = {.lex_state = 216},
  [116] = {.lex_state = 216},
  [117] = {.lex_state = 216},
  [118] = {.lex_state = 216},
  [119] = {.lex_state = 216},
  [120] = {.lex_state = 216},
  [121] = {.lex_state = 216},
  [122] = {.lex_state = 216},
  [123] = {.lex_state = 216},
  [124] = {.lex_state = 216},
  [125] = {.lex_state = 216},
  [126] = {.lex_state = 216},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 216},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 216},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 216},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 216},
  [136] = {.lex_state = 216},
  [137] = {.lex_state = 216},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 216},
  [140] = {.lex_state = 216},
  [141] = {.lex_state = 216},
  [142] = {.lex_state = 216},
  [143] = {.lex_state = 216},
  [144] = {.lex_state = 216},
  [145] = {.lex_state = 216},
  [146] = {.lex_state = 216},
  [147] = {.lex_state = 216},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 216},
  [150] = {.lex_state = 216},
  [151] = {.lex_state = 216},
  [152] = {.lex_state = 216},
  [153] = {.lex_state = 216},
  [154] = {.lex_state = 216},
  [155] = {.lex_state = 216},
  [156] = {.lex_state = 216},
  [157] = {.lex_state = 216},
  [158] = {.lex_state = 216},
  [159] = {.lex_state = 216},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 216},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 13},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 216},
  [199] = {.lex_state = 216},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 216},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 216},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 216},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 216},
  [237] = {.lex_state = 216},
  [238] = {.lex_state = 216},
  [239] = {.lex_state = 216},
  [240] = {.lex_state = 216},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 216},
  [243] = {.lex_state = 216},
  [244] = {.lex_state = 216},
  [245] = {.lex_state = 7},
  [246] = {.lex_state = 7},
  [247] = {.lex_state = 7},
  [248] = {.lex_state = 7},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 7},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 7},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 7},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 216},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 216},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 216},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 7},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 216},
  [274] = {.lex_state = 216},
  [275] = {.lex_state = 12},
  [276] = {.lex_state = 216},
  [277] = {.lex_state = 12},
  [278] = {.lex_state = 10},
  [279] = {.lex_state = 7},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 7},
  [282] = {.lex_state = 7},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 7},
  [285] = {.lex_state = 7},
  [286] = {.lex_state = 7},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 7},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 5},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 5},
  [308] = {.lex_state = 12},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 12},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 5},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 5},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 5},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 5},
  [324] = {.lex_state = 5},
  [325] = {.lex_state = 10},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 7},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 7},
  [331] = {.lex_state = 7},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 7},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 7},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 7},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 7},
  [357] = {.lex_state = 5},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 5},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 7},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 7},
  [367] = {.lex_state = 5},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 7},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 5},
  [376] = {.lex_state = 5},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 5},
  [380] = {.lex_state = 5},
  [381] = {.lex_state = 5},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 7},
  [386] = {.lex_state = 7},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 5},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 5},
  [400] = {.lex_state = 5},
  [401] = {.lex_state = 7},
  [402] = {.lex_state = 7},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 7},
  [405] = {.lex_state = 7},
  [406] = {.lex_state = 7},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 7},
  [410] = {.lex_state = 7},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 5},
  [413] = {.lex_state = 7},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 5},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 5},
  [422] = {.lex_state = 7},
  [423] = {.lex_state = 7},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 7},
  [431] = {.lex_state = 5},
  [432] = {.lex_state = 7},
  [433] = {.lex_state = 7},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 1},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 216},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 1},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 1},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 216},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 1},
  [461] = {.lex_state = 216},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 1},
  [468] = {.lex_state = 1},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 5},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 1},
  [474] = {.lex_state = 216},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 1},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 216},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DeriveStructDrop] = ACTIONS(1),
    [anon_sym_DeriveInterfaceDrop] = ACTIONS(1),
    [anon_sym_DeriveAnonymousSubstruct] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_exported] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Int] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_Kind] = ACTIONS(1),
    [anon_sym_Region] = ACTIONS(1),
    [anon_sym_Prot] = ACTIONS(1),
    [anon_sym_RefList] = ACTIONS(1),
    [anon_sym_Ownership] = ACTIONS(1),
    [anon_sym_Variability] = ACTIONS(1),
    [anon_sym_Mutability] = ACTIONS(1),
    [anon_sym_Location] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_ro] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_imm] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_lshift] = ACTIONS(1),
    [anon_sym_rshift] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [aux_sym_int_lit_token1] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(475),
    [sym__top_level] = STATE(199),
    [sym_import] = STATE(199),
    [sym_attribute] = STATE(474),
    [sym_extern] = STATE(481),
    [sym_func_header] = STATE(339),
    [sym_func_proto] = STATE(199),
    [sym_function_definition] = STATE(199),
    [sym_struct_definition] = STATE(199),
    [aux_sym_source_file_repeat1] = STATE(199),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_extern] = ACTIONS(11),
    [anon_sym_pure] = ACTIONS(13),
    [anon_sym_export] = ACTIONS(15),
    [anon_sym_exported] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_struct] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(149), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [135] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(5), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(151), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [270] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 1,
      anon_sym_DOT,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      anon_sym_AMP,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_set,
    ACTIONS(76), 1,
      anon_sym_return,
    ACTIONS(79), 1,
      anon_sym_not,
    ACTIONS(88), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_foreach,
    ACTIONS(94), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      aux_sym_int_lit_token1,
    ACTIONS(100), 1,
      sym_float_lit,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(82), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(157), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [405] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(140), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [540] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(4), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(143), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [675] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(2), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(146), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [810] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_foreach,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_pattern,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(306), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(6), 4,
      sym_expr_statement,
      sym__statement,
      sym_variable_definition,
      aux_sym_block_repeat1,
    STATE(56), 5,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
    STATE(135), 10,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_binary_expr,
  [945] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(369), 1,
      sym_pattern,
    STATE(370), 1,
      aux_sym_lambda_repeat1,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(154), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1078] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(255), 1,
      sym_destruct,
    STATE(337), 1,
      aux_sym_lambda_repeat1,
    STATE(338), 1,
      sym_pattern,
    STATE(419), 1,
      sym_array_type,
    STATE(439), 1,
      sym_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(154), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1211] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(259), 1,
      sym_type,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(125), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1329] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(251), 1,
      sym_reference_type,
    STATE(259), 1,
      sym_type,
    STATE(419), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(125), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1447] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(329), 1,
      aux_sym_call_expr_repeat1,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(131), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1551] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(136), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1649] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(136), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1747] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(136), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1845] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(144), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [1940] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(152), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2035] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(159), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2130] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(136), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2225] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(139), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2320] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(155), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2415] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(150), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2510] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(137), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2605] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(113), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2700] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(118), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2795] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(102), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2890] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(111), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [2985] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(141), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3080] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(153), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3175] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(142), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3270] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(106), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3365] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(147), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3460] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(145), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3555] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(108), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3650] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(125), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3745] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(98), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3840] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(115), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [3935] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(156), 1,
      sym_int_lit,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(119), 2,
      sym_bool_lit,
      sym_string_literal,
    STATE(133), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(163), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [4032] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(116), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [4127] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(47), 1,
      aux_sym_int_lit_token1,
    ACTIONS(49), 1,
      sym_float_lit,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_while,
    ACTIONS(134), 1,
      anon_sym_foreach,
    ACTIONS(136), 1,
      anon_sym_if,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(435), 1,
      sym_array_type,
    ACTIONS(37), 2,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(87), 2,
      sym_call_expr,
      sym_generic_function,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(119), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
    STATE(158), 15,
      sym_array_access,
      sym_return_expr,
      sym__expr,
      sym_parenthesized_expr,
      sym__expr_ending_with_block,
      sym_lambda,
      sym_not,
      sym_augment,
      sym_field_expr,
      sym_assignment_expr,
      sym_literal,
      sym_while_expr,
      sym_foreach,
      sym_if_expr,
      sym_binary_expr,
  [4222] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_else,
    STATE(52), 1,
      sym_else_expr,
    STATE(43), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(164), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(166), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4279] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(168), 1,
      anon_sym_else,
    STATE(54), 1,
      sym_else_expr,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(170), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(172), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(178), 1,
      anon_sym_else,
    STATE(44), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(174), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(176), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4390] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 25,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4438] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(187), 25,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(191), 25,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(193), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(195), 25,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(191), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(197), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(199), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(201), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(203), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(207), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4770] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4817] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(211), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(215), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4911] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 7,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(221), 12,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
    ACTIONS(223), 12,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(227), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [5009] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(187), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(231), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [5103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(235), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [5150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 15,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(239), 24,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(185), 29,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5241] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_GT,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(352), 1,
      aux_sym_type_parameters_repeat1,
    STATE(353), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5329] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(189), 29,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5373] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(263), 1,
      anon_sym_GT,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(330), 1,
      aux_sym_type_parameters_repeat1,
    STATE(331), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5461] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(96), 1,
      sym_int_type,
    ACTIONS(269), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(271), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
    ACTIONS(267), 21,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 7,
      anon_sym_export,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(181), 29,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_extern,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_struct,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [5553] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5635] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5717] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5799] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5881] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [5963] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [6045] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      aux_sym_int_lit_token1,
    ACTIONS(255), 1,
      sym_float_lit,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(385), 1,
      sym_type_parameter,
    ACTIONS(245), 2,
      anon_sym_mut,
      anon_sym_imm,
    ACTIONS(251), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(430), 2,
      sym__string_literal,
      sym__long_string_literal,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
    STATE(378), 3,
      sym_mutability,
      sym_type,
      sym_literal,
    STATE(432), 3,
      sym_bool_lit,
      sym_int_lit,
      sym_string_literal,
  [6124] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(117), 1,
      sym_else_expr,
    STATE(79), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(172), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(170), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6168] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_else,
    STATE(100), 1,
      sym_else_expr,
    STATE(75), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(166), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(164), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6212] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    STATE(86), 1,
      sym_type_parameters,
    ACTIONS(221), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(217), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6257] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_AMP,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    STATE(86), 1,
      sym_type_parameters,
    ACTIONS(303), 2,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(217), 10,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
    ACTIONS(221), 10,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6310] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(305), 1,
      anon_sym_else,
    STATE(79), 2,
      sym_else_if_expr,
      aux_sym_if_expr_repeat1,
    ACTIONS(176), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(174), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6351] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(308), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(314), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(312), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6423] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(318), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(316), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6463] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(322), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(320), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6499] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(326), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(324), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6535] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(330), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(328), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6571] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(334), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(332), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6607] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(221), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(217), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6647] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(338), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(336), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6687] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(343), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(347), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6759] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    STATE(86), 1,
      sym_type_parameters,
    ACTIONS(292), 2,
      anon_sym_DOT,
      anon_sym_RPAREN,
    ACTIONS(221), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(217), 16,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6809] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(351), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6845] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(355), 21,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6880] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(195), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(193), 21,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6915] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(359), 21,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6950] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(363), 21,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [6985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(367), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7019] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(371), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_or,
  [7071] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(225), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(205), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7139] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(395), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(393), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7173] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(397), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7227] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(199), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(197), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7261] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(405), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(403), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7295] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(407), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7329] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(371), 19,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7365] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(229), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7399] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(371), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [7449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(411), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7483] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(417), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(415), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7517] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(371), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [7563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(239), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(237), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7597] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 5,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(371), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
  [7641] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(203), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(201), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7675] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(421), 1,
      anon_sym_EQ,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(419), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7729] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(423), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [7783] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(211), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(209), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7817] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(387), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(371), 15,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_mod,
  [7857] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(427), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7891] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(433), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(431), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7925] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(213), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7959] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(437), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(435), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [7993] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(233), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 6,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_EQ,
    ACTIONS(439), 20,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8061] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(445), 1,
      anon_sym_EQ,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(443), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8115] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(292), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_LT,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    STATE(86), 1,
      sym_type_parameters,
    ACTIONS(221), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(217), 15,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8160] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    ACTIONS(455), 1,
      anon_sym_set,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(358), 1,
      aux_sym_destruct_repeat1,
    STATE(359), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [8226] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(326), 1,
      sym_pattern,
    STATE(372), 1,
      aux_sym_destruct_repeat1,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [8292] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 1,
      anon_sym_LT,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    STATE(86), 1,
      sym_type_parameters,
    ACTIONS(221), 4,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(217), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8334] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_set,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(326), 1,
      sym_pattern,
    STATE(372), 1,
      aux_sym_destruct_repeat1,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [8400] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_call_expr_repeat1,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8453] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    ACTIONS(471), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(335), 1,
      aux_sym_destruct_repeat1,
    STATE(336), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [8516] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_array_access_repeat1,
    ACTIONS(221), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(217), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [8553] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    ACTIONS(475), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(354), 1,
      aux_sym_destruct_repeat1,
    STATE(355), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [8616] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8666] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(479), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8714] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8764] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
    ACTIONS(483), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8820] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8870] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8920] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [8970] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9020] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9070] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9120] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9170] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9220] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9270] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(497), 1,
      anon_sym_GT,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(234), 1,
      sym_scoped_type_identifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(363), 1,
      sym_generic_parameter,
    STATE(366), 1,
      aux_sym_generic_parameters_repeat1,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [9330] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9380] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9430] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9480] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(505), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9527] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9574] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9621] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(511), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    ACTIONS(429), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(427), 15,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_and,
      anon_sym_or,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
      anon_sym_mod,
  [9699] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9746] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(513), 1,
      anon_sym_EQ,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9793] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(519), 12,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [9868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(523), 12,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [9896] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [9950] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    ACTIONS(389), 1,
      anon_sym_and,
    ACTIONS(401), 1,
      anon_sym_or,
    ACTIONS(375), 2,
      anon_sym_STAR,
      anon_sym_mod,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 3,
      anon_sym_lshift,
      anon_sym_rshift,
      anon_sym_xor,
    ACTIONS(383), 4,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 4,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [9994] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(527), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(234), 1,
      sym_scoped_type_identifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_generic_parameter,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10048] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10102] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(234), 1,
      sym_scoped_type_identifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_generic_parameter,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10156] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(533), 1,
      anon_sym_in,
    STATE(208), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [10210] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(535), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_AMP,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [10264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 8,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      sym_float_lit,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(549), 12,
      anon_sym_AMP,
      anon_sym_set,
      anon_sym_return,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      anon_sym_while,
      anon_sym_foreach,
      anon_sym_if,
      aux_sym_int_lit_token1,
      anon_sym_DQUOTE,
      sym_identifier,
  [10292] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10346] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10400] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(555), 1,
      anon_sym_set,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(427), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10454] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10508] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    ACTIONS(559), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(234), 1,
      sym_scoped_type_identifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_generic_parameter,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10562] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10616] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(416), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10667] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(397), 1,
      sym_type,
    ACTIONS(563), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10716] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(207), 1,
      sym_type_parameters,
    STATE(215), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(256), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [10767] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(450), 1,
      sym_destruct,
    STATE(455), 1,
      sym_type,
    STATE(478), 1,
      sym_pattern,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10818] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(426), 1,
      sym_type,
    ACTIONS(575), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [10867] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(348), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10918] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(355), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [10969] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(205), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(256), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11020] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(391), 1,
      sym_type,
    ACTIONS(577), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11069] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(394), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [11120] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(393), 1,
      sym_type,
    ACTIONS(579), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11169] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(336), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [11220] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(216), 1,
      sym__type_identifier,
    STATE(234), 1,
      sym_scoped_type_identifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(405), 1,
      sym_generic_parameter,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(401), 2,
      sym_region_parameter,
      sym_type,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11271] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(389), 1,
      sym_type,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11320] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(396), 1,
      sym_type,
    ACTIONS(583), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11369] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(450), 1,
      sym_destruct,
    STATE(455), 1,
      sym_type,
    STATE(476), 1,
      sym_pattern,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [11420] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(208), 1,
      sym_type_parameters,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11471] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(425), 1,
      sym_type,
    ACTIONS(585), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11520] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(255), 1,
      sym_destruct,
    STATE(342), 1,
      sym_pattern,
    STATE(439), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(299), 2,
      sym_scoped_identifier,
      sym__path,
  [11571] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(387), 1,
      sym_type,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11620] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_LT,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(206), 1,
      sym_type_parameters,
    STATE(215), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(254), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [11671] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(589), 1,
      anon_sym_AMP,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(217), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(482), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [11719] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      ts_builtin_sym_end,
    ACTIONS(595), 1,
      anon_sym_import,
    ACTIONS(598), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      anon_sym_extern,
    ACTIONS(607), 1,
      anon_sym_export,
    ACTIONS(610), 1,
      anon_sym_func,
    ACTIONS(613), 1,
      anon_sym_struct,
    STATE(339), 1,
      sym_func_header,
    STATE(474), 1,
      sym_attribute,
    STATE(481), 1,
      sym_extern,
    ACTIONS(604), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(198), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11765] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_extern,
    ACTIONS(15), 1,
      anon_sym_export,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_struct,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    STATE(339), 1,
      sym_func_header,
    STATE(474), 1,
      sym_attribute,
    STATE(481), 1,
      sym_extern,
    ACTIONS(13), 2,
      anon_sym_pure,
      anon_sym_exported,
    STATE(198), 6,
      sym__top_level,
      sym_import,
      sym_func_proto,
      sym_function_definition,
      sym_struct_definition,
      aux_sym_source_file_repeat1,
  [11811] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(618), 1,
      anon_sym_BANG,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(458), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11859] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11904] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(215), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [11949] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(392), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [11994] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(213), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12039] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(257), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12084] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(215), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [12129] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(215), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(257), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [12174] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(250), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12219] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(214), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12264] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(565), 1,
      anon_sym_AMP,
    STATE(218), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(443), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12309] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(589), 1,
      anon_sym_AMP,
    STATE(217), 1,
      sym_region_specifier,
    STATE(245), 1,
      sym_generic_type,
    STATE(259), 1,
      sym_type,
    STATE(234), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(251), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12354] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(622), 1,
      anon_sym_Ref,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    ACTIONS(620), 12,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [12381] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(246), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(248), 2,
      sym_reference_type,
      sym_array_type,
    STATE(281), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(284), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12420] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(451), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(246), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(248), 2,
      sym_reference_type,
      sym_array_type,
    STATE(261), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(273), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12459] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 1,
      anon_sym_DOT,
    ACTIONS(569), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(246), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(248), 2,
      sym_reference_type,
      sym_array_type,
    STATE(279), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(290), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(472), 2,
      sym_scoped_identifier,
      sym__path,
  [12498] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(634), 1,
      anon_sym_Ref,
    STATE(247), 1,
      sym_generic_parameters,
    STATE(413), 1,
      sym_rune,
    ACTIONS(630), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(632), 9,
      anon_sym_Int,
      anon_sym_Kind,
      anon_sym_Region,
      anon_sym_Prot,
      anon_sym_RefList,
      anon_sym_Ownership,
      anon_sym_Variability,
      anon_sym_Mutability,
      anon_sym_Location,
  [12529] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(246), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(248), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(440), 2,
      sym_scoped_identifier,
      sym__path,
  [12568] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(565), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      sym_identifier,
    STATE(246), 1,
      sym_generic_type,
    STATE(232), 2,
      sym_scoped_type_identifier,
      sym__type_identifier,
    STATE(248), 2,
      sym_reference_type,
      sym_array_type,
    STATE(268), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    STATE(274), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    STATE(449), 2,
      sym_scoped_identifier,
      sym__path,
  [12607] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(640), 1,
      sym_identifier,
    ACTIONS(638), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(636), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12630] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(646), 1,
      sym_identifier,
    ACTIONS(644), 5,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(642), 7,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ_GT,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_BANG_EQ,
  [12653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(620), 12,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [12693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(648), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12710] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12731] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12750] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12767] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(406), 1,
      sym_int_type,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(657), 8,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i16,
      anon_sym_i8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u16,
      anon_sym_u8,
  [12788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12805] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_mut,
      anon_sym_imm,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 5,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_EQ,
      sym_identifier,
    ACTIONS(620), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [12862] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    STATE(247), 1,
      sym_generic_parameters,
    ACTIONS(668), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(620), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12900] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    STATE(247), 1,
      sym_generic_parameters,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(670), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [12935] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(674), 1,
      anon_sym_export,
    ACTIONS(672), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(678), 1,
      anon_sym_export,
    ACTIONS(676), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12969] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(682), 1,
      anon_sym_export,
    ACTIONS(680), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [12986] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(686), 1,
      anon_sym_export,
    ACTIONS(684), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13003] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(690), 1,
      anon_sym_export,
    ACTIONS(688), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13020] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(692), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13035] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(696), 1,
      anon_sym_export,
    ACTIONS(694), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(700), 1,
      anon_sym_export,
    ACTIONS(698), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13069] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(704), 1,
      anon_sym_export,
    ACTIONS(702), 8,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_POUND,
      anon_sym_extern,
      anon_sym_pure,
      anon_sym_exported,
      anon_sym_func,
      anon_sym_struct,
  [13086] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      anon_sym_DOT,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(706), 1,
      anon_sym_DOT,
    ACTIONS(668), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(708), 9,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13135] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(668), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13149] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(710), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13163] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(712), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13177] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(630), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13191] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13205] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13219] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(718), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13233] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(722), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13261] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(724), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13275] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 8,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      sym_identifier,
  [13289] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(728), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13303] = 7,
    ACTIONS(730), 1,
      anon_sym_LBRACE,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      sym__escape_sequence,
    ACTIONS(738), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(740), 1,
      aux_sym__long_string_literal_token1,
    STATE(325), 1,
      sym__string_interpolation,
    STATE(260), 2,
      sym_escape_sequence,
      aux_sym__long_string_literal_repeat1,
  [13326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(266), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(743), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13341] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym__escape_sequence,
    ACTIONS(749), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(751), 1,
      aux_sym__long_string_literal_token1,
    STATE(325), 1,
      sym__string_interpolation,
    STATE(278), 2,
      sym_escape_sequence,
      aux_sym__long_string_literal_repeat1,
  [13364] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym__escape_sequence,
    ACTIONS(753), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(755), 1,
      aux_sym__long_string_literal_token1,
    STATE(325), 1,
      sym__string_interpolation,
    STATE(260), 2,
      sym_escape_sequence,
      aux_sym__long_string_literal_repeat1,
  [13387] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym__escape_sequence,
    ACTIONS(761), 1,
      anon_sym_DQUOTE,
    ACTIONS(763), 1,
      aux_sym__string_literal_token1,
    STATE(308), 1,
      sym__string_interpolation,
    STATE(269), 2,
      sym_escape_sequence,
      aux_sym__string_literal_repeat1,
  [13410] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_DOT,
    ACTIONS(767), 1,
      anon_sym_STAR,
    ACTIONS(769), 1,
      sym_identifier,
    STATE(465), 1,
      sym_import_wildcard,
    STATE(466), 1,
      sym_import_path,
    STATE(384), 2,
      sym_scoped_identifier,
      sym__path,
  [13433] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    STATE(266), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(771), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13450] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym__escape_sequence,
    ACTIONS(776), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(778), 1,
      aux_sym__long_string_literal_token1,
    STATE(325), 1,
      sym__string_interpolation,
    STATE(263), 2,
      sym_escape_sequence,
      aux_sym__long_string_literal_repeat1,
  [13473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(780), 1,
      anon_sym_LBRACK,
    STATE(276), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(743), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13490] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym__escape_sequence,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      aux_sym__string_literal_token1,
    STATE(308), 1,
      sym__string_interpolation,
    STATE(277), 2,
      sym_escape_sequence,
      aux_sym__string_literal_repeat1,
  [13513] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym__escape_sequence,
    ACTIONS(784), 1,
      aux_sym__string_literal_token1,
    ACTIONS(786), 1,
      anon_sym_DQUOTE,
    STATE(308), 1,
      sym__string_interpolation,
    STATE(277), 2,
      sym_escape_sequence,
      aux_sym__string_literal_repeat1,
  [13536] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(792), 1,
      anon_sym_ro,
    ACTIONS(794), 1,
      sym_identifier,
    ACTIONS(790), 2,
      anon_sym_GT,
      anon_sym_COMMA,
    ACTIONS(788), 3,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
  [13572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(276), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(743), 5,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_EQ,
  [13587] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(796), 1,
      anon_sym_LBRACK,
    STATE(266), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(743), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13604] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
    ACTIONS(759), 1,
      sym__escape_sequence,
    ACTIONS(798), 1,
      anon_sym_DQUOTE,
    ACTIONS(800), 1,
      aux_sym__string_literal_token1,
    STATE(308), 1,
      sym__string_interpolation,
    STATE(270), 2,
      sym_escape_sequence,
      aux_sym__string_literal_repeat1,
  [13627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(804), 1,
      anon_sym_LBRACK,
    STATE(276), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(802), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_EQ,
  [13644] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      sym__escape_sequence,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym__string_literal_token1,
    STATE(308), 1,
      sym__string_interpolation,
    STATE(277), 2,
      sym_escape_sequence,
      aux_sym__string_literal_repeat1,
  [13667] = 7,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    ACTIONS(747), 1,
      sym__escape_sequence,
    ACTIONS(755), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(818), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(325), 1,
      sym__string_interpolation,
    STATE(260), 2,
      sym_escape_sequence,
      aux_sym__long_string_literal_repeat1,
  [13690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(282), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(820), 1,
      anon_sym_LBRACK,
    STATE(280), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(771), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13720] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    STATE(280), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(743), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_LBRACK,
    STATE(282), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(802), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(828), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13764] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACK,
    STATE(282), 2,
      sym_dynamic_array_type,
      aux_sym_array_type_repeat2,
    ACTIONS(743), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
  [13780] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13794] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 1,
      anon_sym_DOT,
    ACTIONS(620), 5,
      anon_sym_RPAREN,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13808] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(832), 1,
      anon_sym_LBRACE,
    STATE(309), 1,
      sym_generic_parameters,
    STATE(437), 1,
      sym_mutability,
    ACTIONS(834), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13828] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(836), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13840] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    STATE(311), 1,
      sym_generic_parameters,
    STATE(453), 1,
      sym_mutability,
    ACTIONS(834), 2,
      anon_sym_mut,
      anon_sym_imm,
  [13860] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(280), 2,
      sym_static_array_type,
      aux_sym_array_type_repeat1,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACK,
  [13874] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(840), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [13898] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      sym_identifier,
    STATE(200), 1,
      sym__field_identifier,
    STATE(296), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13915] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      sym_identifier,
    STATE(200), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13932] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    ACTIONS(850), 1,
      sym_identifier,
    STATE(200), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13949] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [13966] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(446), 1,
      sym_string_literal,
    STATE(109), 2,
      sym__string_literal,
      sym__long_string_literal,
  [13983] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(301), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14000] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_DOT,
    ACTIONS(720), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_in,
  [14013] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(307), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14030] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14047] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    ACTIONS(861), 1,
      anon_sym_COMMA,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(327), 1,
      sym_parameter,
    STATE(362), 1,
      aux_sym_parameters_repeat1,
  [14066] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_BANG,
    STATE(456), 1,
      sym_attribute_name,
    ACTIONS(865), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [14081] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(294), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14098] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(439), 5,
      anon_sym_BANG,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14109] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_DOT,
    ACTIONS(720), 4,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_EQ,
      sym_identifier,
  [14122] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(846), 1,
      sym_identifier,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym__field_identifier,
    STATE(295), 2,
      sym_struct_field,
      aux_sym_struct_definition_repeat1,
  [14139] = 3,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(876), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(878), 2,
      sym__escape_sequence,
      aux_sym__string_literal_token1,
  [14151] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    STATE(453), 1,
      sym_mutability,
    ACTIONS(834), 2,
      anon_sym_mut,
      anon_sym_imm,
  [14165] = 3,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(880), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(882), 2,
      sym__escape_sequence,
      aux_sym__long_string_literal_token1,
  [14177] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(438), 1,
      sym_mutability,
    ACTIONS(834), 2,
      anon_sym_mut,
      anon_sym_imm,
  [14191] = 3,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(880), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
    ACTIONS(882), 2,
      sym__escape_sequence,
      aux_sym__string_literal_token1,
  [14203] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_parameters,
    STATE(407), 1,
      sym_generic_parameters,
  [14219] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym_parameters,
    STATE(411), 1,
      sym_generic_parameters,
  [14235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14245] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(328), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14265] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(888), 1,
      aux_sym_int_lit_token1,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(459), 2,
      sym_int_lit,
      sym__type_identifier,
  [14279] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_parameters,
    STATE(424), 1,
      sym_generic_parameters,
  [14295] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(628), 1,
      anon_sym_LT,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_parameters,
    STATE(417), 1,
      sym_generic_parameters,
  [14311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14321] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(448), 1,
      sym_attribute_name,
    ACTIONS(865), 3,
      anon_sym_DeriveStructDrop,
      anon_sym_DeriveInterfaceDrop,
      anon_sym_DeriveAnonymousSubstruct,
  [14333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 4,
      anon_sym_DOT,
      anon_sym_AMP,
      anon_sym_LBRACK,
      sym_identifier,
  [14343] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(888), 1,
      aux_sym_int_lit_token1,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(441), 2,
      sym_int_lit,
      sym__type_identifier,
  [14357] = 3,
    ACTIONS(733), 1,
      sym_line_comment,
    ACTIONS(876), 2,
      anon_sym_LBRACE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(878), 2,
      sym__escape_sequence,
      aux_sym__long_string_literal_token1,
  [14369] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(335), 1,
      aux_sym_destruct_repeat1,
  [14382] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_parameters_repeat1,
  [14395] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_GT,
    ACTIONS(896), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14408] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_call_expr_repeat1,
  [14421] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14434] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_GT,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_type_parameters_repeat1,
  [14447] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(900), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(904), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14499] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_RBRACK,
    STATE(345), 1,
      aux_sym_destruct_repeat1,
  [14512] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14525] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(911), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_lambda_repeat1,
  [14538] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(913), 1,
      anon_sym_SEMI,
    STATE(243), 1,
      sym_block,
  [14551] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14564] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(920), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14577] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(332), 1,
      aux_sym_destruct_repeat1,
  [14590] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_call_expr_repeat1,
  [14603] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(926), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_call_expr_repeat1,
  [14616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(922), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14629] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 3,
      anon_sym_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [14638] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14651] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(347), 1,
      aux_sym_destruct_repeat1,
  [14664] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_GT,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14677] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(937), 1,
      anon_sym_if,
    STATE(114), 1,
      sym_block,
  [14690] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14703] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14716] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(279), 1,
      anon_sym_GT,
    ACTIONS(939), 1,
      anon_sym_COMMA,
    STATE(349), 1,
      aux_sym_type_parameters_repeat1,
  [14729] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RBRACK,
    STATE(351), 1,
      aux_sym_destruct_repeat1,
  [14755] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 1,
      anon_sym_GT,
    ACTIONS(945), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14768] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      sym_identifier,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_parameter,
  [14781] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14794] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(354), 1,
      aux_sym_destruct_repeat1,
  [14807] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      sym_identifier,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_parameter,
  [14820] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(273), 1,
      anon_sym_GT,
    ACTIONS(950), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14833] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
    ACTIONS(894), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_GT,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_generic_parameters_repeat1,
  [14859] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_parameters_repeat1,
  [14885] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_GT,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_generic_parameters_repeat1,
  [14898] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      sym_identifier,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      sym_parameter,
  [14911] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    ACTIONS(963), 1,
      anon_sym_if,
    STATE(51), 1,
      sym_block,
  [14924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_lambda_repeat1,
  [14937] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      anon_sym_COMMA,
    STATE(340), 1,
      aux_sym_lambda_repeat1,
  [14950] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_GT,
    ACTIONS(969), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_type_parameters_repeat1,
  [14963] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(334), 1,
      aux_sym_destruct_repeat1,
  [14976] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_block,
  [14986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [14994] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(972), 1,
      sym_identifier,
    STATE(235), 1,
      sym__type_identifier,
  [15004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(974), 1,
      sym_identifier,
    STATE(120), 1,
      sym__field_identifier,
  [15014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(976), 1,
      anon_sym_LPAREN,
    ACTIONS(978), 1,
      anon_sym_func,
  [15024] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(980), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15032] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(235), 1,
      sym__type_identifier,
  [15042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(287), 1,
      sym__type_identifier,
  [15052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_identifier,
  [15062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
  [15072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [15082] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_SEMI,
    ACTIONS(986), 1,
      anon_sym_DOT,
  [15092] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15108] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15116] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      sym_identifier,
    STATE(390), 1,
      sym_parameter,
  [15126] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15134] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15142] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(994), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15150] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(998), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15166] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [15184] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1000), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      sym_identifier,
    STATE(289), 1,
      sym__type_identifier,
  [15210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1004), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_identifier,
  [15220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_STAR,
    ACTIONS(1008), 1,
      sym_identifier,
  [15230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15238] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(407), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15246] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_POUND,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
  [15256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_parameters,
  [15290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_POUND,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [15300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(184), 1,
      sym_parameters,
  [15326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      sym_identifier,
    STATE(235), 1,
      sym__type_identifier,
  [15336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1022), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15344] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(650), 2,
      anon_sym_SEMI,
      anon_sym_DOT,
  [15352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1024), 1,
      sym_identifier,
    STATE(235), 1,
      sym__type_identifier,
  [15362] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_parameters,
  [15380] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [15388] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(630), 1,
      anon_sym_LBRACK,
  [15398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block,
  [15408] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_identifier,
  [15418] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(393), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15426] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15434] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_parameters,
  [15444] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1032), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [15460] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [15468] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
  [15478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_block,
  [15488] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15496] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1036), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [15504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(427), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15512] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(435), 2,
      anon_sym_GT,
      anon_sym_COMMA,
  [15520] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_block,
  [15530] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [15537] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_POUND,
  [15544] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
  [15551] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACE,
  [15558] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1040), 1,
      anon_sym_LBRACK,
  [15565] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_DOT,
  [15572] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1042), 1,
      anon_sym_RBRACK,
  [15579] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 1,
      anon_sym_SEMI,
  [15586] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 1,
      anon_sym_SEMI,
  [15593] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
  [15600] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_EQ_GT,
  [15607] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
  [15614] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 1,
      anon_sym_func,
  [15621] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      anon_sym_struct,
  [15628] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1056), 1,
      anon_sym_DOT,
  [15635] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(720), 1,
      anon_sym_in,
  [15642] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(716), 1,
      anon_sym_in,
  [15649] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1058), 1,
      anon_sym_EQ_GT,
  [15656] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
  [15663] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1060), 1,
      anon_sym_EQ_GT,
  [15670] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACK,
  [15677] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1064), 1,
      anon_sym_struct,
  [15684] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(710), 1,
      anon_sym_in,
  [15691] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 1,
      anon_sym_SEMI,
  [15698] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1068), 1,
      anon_sym_RBRACK,
  [15705] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1070), 1,
      anon_sym_EQ_GT,
  [15712] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1072), 1,
      anon_sym_struct,
  [15719] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1012), 1,
      anon_sym_POUND,
  [15726] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [15733] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      anon_sym_if,
  [15740] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(984), 1,
      anon_sym_SEMI,
  [15747] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1074), 1,
      anon_sym_SEMI,
  [15754] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_EQ_GT,
  [15761] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1078), 1,
      anon_sym_EQ_GT,
  [15768] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
  [15775] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_if,
  [15782] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 1,
      sym_identifier,
  [15789] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1084), 1,
      anon_sym_DOT,
  [15796] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 1,
      anon_sym_EQ_GT,
  [15803] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1088), 1,
      anon_sym_struct,
  [15810] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1090), 1,
      ts_builtin_sym_end,
  [15817] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1092), 1,
      anon_sym_in,
  [15824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(714), 1,
      anon_sym_in,
  [15831] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1094), 1,
      anon_sym_in,
  [15838] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      anon_sym_EQ_GT,
  [15845] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(726), 1,
      anon_sym_in,
  [15852] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1098), 1,
      anon_sym_func,
  [15859] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1100), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 135,
  [SMALL_STATE(4)] = 270,
  [SMALL_STATE(5)] = 405,
  [SMALL_STATE(6)] = 540,
  [SMALL_STATE(7)] = 675,
  [SMALL_STATE(8)] = 810,
  [SMALL_STATE(9)] = 945,
  [SMALL_STATE(10)] = 1078,
  [SMALL_STATE(11)] = 1211,
  [SMALL_STATE(12)] = 1329,
  [SMALL_STATE(13)] = 1447,
  [SMALL_STATE(14)] = 1551,
  [SMALL_STATE(15)] = 1649,
  [SMALL_STATE(16)] = 1747,
  [SMALL_STATE(17)] = 1845,
  [SMALL_STATE(18)] = 1940,
  [SMALL_STATE(19)] = 2035,
  [SMALL_STATE(20)] = 2130,
  [SMALL_STATE(21)] = 2225,
  [SMALL_STATE(22)] = 2320,
  [SMALL_STATE(23)] = 2415,
  [SMALL_STATE(24)] = 2510,
  [SMALL_STATE(25)] = 2605,
  [SMALL_STATE(26)] = 2700,
  [SMALL_STATE(27)] = 2795,
  [SMALL_STATE(28)] = 2890,
  [SMALL_STATE(29)] = 2985,
  [SMALL_STATE(30)] = 3080,
  [SMALL_STATE(31)] = 3175,
  [SMALL_STATE(32)] = 3270,
  [SMALL_STATE(33)] = 3365,
  [SMALL_STATE(34)] = 3460,
  [SMALL_STATE(35)] = 3555,
  [SMALL_STATE(36)] = 3650,
  [SMALL_STATE(37)] = 3745,
  [SMALL_STATE(38)] = 3840,
  [SMALL_STATE(39)] = 3935,
  [SMALL_STATE(40)] = 4032,
  [SMALL_STATE(41)] = 4127,
  [SMALL_STATE(42)] = 4222,
  [SMALL_STATE(43)] = 4279,
  [SMALL_STATE(44)] = 4336,
  [SMALL_STATE(45)] = 4390,
  [SMALL_STATE(46)] = 4438,
  [SMALL_STATE(47)] = 4486,
  [SMALL_STATE(48)] = 4534,
  [SMALL_STATE(49)] = 4582,
  [SMALL_STATE(50)] = 4629,
  [SMALL_STATE(51)] = 4676,
  [SMALL_STATE(52)] = 4723,
  [SMALL_STATE(53)] = 4770,
  [SMALL_STATE(54)] = 4817,
  [SMALL_STATE(55)] = 4864,
  [SMALL_STATE(56)] = 4911,
  [SMALL_STATE(57)] = 4962,
  [SMALL_STATE(58)] = 5009,
  [SMALL_STATE(59)] = 5056,
  [SMALL_STATE(60)] = 5103,
  [SMALL_STATE(61)] = 5150,
  [SMALL_STATE(62)] = 5197,
  [SMALL_STATE(63)] = 5241,
  [SMALL_STATE(64)] = 5329,
  [SMALL_STATE(65)] = 5373,
  [SMALL_STATE(66)] = 5461,
  [SMALL_STATE(67)] = 5509,
  [SMALL_STATE(68)] = 5553,
  [SMALL_STATE(69)] = 5635,
  [SMALL_STATE(70)] = 5717,
  [SMALL_STATE(71)] = 5799,
  [SMALL_STATE(72)] = 5881,
  [SMALL_STATE(73)] = 5963,
  [SMALL_STATE(74)] = 6045,
  [SMALL_STATE(75)] = 6124,
  [SMALL_STATE(76)] = 6168,
  [SMALL_STATE(77)] = 6212,
  [SMALL_STATE(78)] = 6257,
  [SMALL_STATE(79)] = 6310,
  [SMALL_STATE(80)] = 6351,
  [SMALL_STATE(81)] = 6387,
  [SMALL_STATE(82)] = 6423,
  [SMALL_STATE(83)] = 6463,
  [SMALL_STATE(84)] = 6499,
  [SMALL_STATE(85)] = 6535,
  [SMALL_STATE(86)] = 6571,
  [SMALL_STATE(87)] = 6607,
  [SMALL_STATE(88)] = 6647,
  [SMALL_STATE(89)] = 6687,
  [SMALL_STATE(90)] = 6723,
  [SMALL_STATE(91)] = 6759,
  [SMALL_STATE(92)] = 6809,
  [SMALL_STATE(93)] = 6845,
  [SMALL_STATE(94)] = 6880,
  [SMALL_STATE(95)] = 6915,
  [SMALL_STATE(96)] = 6950,
  [SMALL_STATE(97)] = 6985,
  [SMALL_STATE(98)] = 7019,
  [SMALL_STATE(99)] = 7071,
  [SMALL_STATE(100)] = 7105,
  [SMALL_STATE(101)] = 7139,
  [SMALL_STATE(102)] = 7173,
  [SMALL_STATE(103)] = 7227,
  [SMALL_STATE(104)] = 7261,
  [SMALL_STATE(105)] = 7295,
  [SMALL_STATE(106)] = 7329,
  [SMALL_STATE(107)] = 7365,
  [SMALL_STATE(108)] = 7399,
  [SMALL_STATE(109)] = 7449,
  [SMALL_STATE(110)] = 7483,
  [SMALL_STATE(111)] = 7517,
  [SMALL_STATE(112)] = 7563,
  [SMALL_STATE(113)] = 7597,
  [SMALL_STATE(114)] = 7641,
  [SMALL_STATE(115)] = 7675,
  [SMALL_STATE(116)] = 7729,
  [SMALL_STATE(117)] = 7783,
  [SMALL_STATE(118)] = 7817,
  [SMALL_STATE(119)] = 7857,
  [SMALL_STATE(120)] = 7891,
  [SMALL_STATE(121)] = 7925,
  [SMALL_STATE(122)] = 7959,
  [SMALL_STATE(123)] = 7993,
  [SMALL_STATE(124)] = 8027,
  [SMALL_STATE(125)] = 8061,
  [SMALL_STATE(126)] = 8115,
  [SMALL_STATE(127)] = 8160,
  [SMALL_STATE(128)] = 8226,
  [SMALL_STATE(129)] = 8292,
  [SMALL_STATE(130)] = 8334,
  [SMALL_STATE(131)] = 8400,
  [SMALL_STATE(132)] = 8453,
  [SMALL_STATE(133)] = 8516,
  [SMALL_STATE(134)] = 8553,
  [SMALL_STATE(135)] = 8616,
  [SMALL_STATE(136)] = 8666,
  [SMALL_STATE(137)] = 8714,
  [SMALL_STATE(138)] = 8764,
  [SMALL_STATE(139)] = 8820,
  [SMALL_STATE(140)] = 8870,
  [SMALL_STATE(141)] = 8920,
  [SMALL_STATE(142)] = 8970,
  [SMALL_STATE(143)] = 9020,
  [SMALL_STATE(144)] = 9070,
  [SMALL_STATE(145)] = 9120,
  [SMALL_STATE(146)] = 9170,
  [SMALL_STATE(147)] = 9220,
  [SMALL_STATE(148)] = 9270,
  [SMALL_STATE(149)] = 9330,
  [SMALL_STATE(150)] = 9380,
  [SMALL_STATE(151)] = 9430,
  [SMALL_STATE(152)] = 9480,
  [SMALL_STATE(153)] = 9527,
  [SMALL_STATE(154)] = 9574,
  [SMALL_STATE(155)] = 9621,
  [SMALL_STATE(156)] = 9668,
  [SMALL_STATE(157)] = 9699,
  [SMALL_STATE(158)] = 9746,
  [SMALL_STATE(159)] = 9793,
  [SMALL_STATE(160)] = 9840,
  [SMALL_STATE(161)] = 9868,
  [SMALL_STATE(162)] = 9896,
  [SMALL_STATE(163)] = 9950,
  [SMALL_STATE(164)] = 9994,
  [SMALL_STATE(165)] = 10048,
  [SMALL_STATE(166)] = 10102,
  [SMALL_STATE(167)] = 10156,
  [SMALL_STATE(168)] = 10210,
  [SMALL_STATE(169)] = 10264,
  [SMALL_STATE(170)] = 10292,
  [SMALL_STATE(171)] = 10346,
  [SMALL_STATE(172)] = 10400,
  [SMALL_STATE(173)] = 10454,
  [SMALL_STATE(174)] = 10508,
  [SMALL_STATE(175)] = 10562,
  [SMALL_STATE(176)] = 10616,
  [SMALL_STATE(177)] = 10667,
  [SMALL_STATE(178)] = 10716,
  [SMALL_STATE(179)] = 10767,
  [SMALL_STATE(180)] = 10818,
  [SMALL_STATE(181)] = 10867,
  [SMALL_STATE(182)] = 10918,
  [SMALL_STATE(183)] = 10969,
  [SMALL_STATE(184)] = 11020,
  [SMALL_STATE(185)] = 11069,
  [SMALL_STATE(186)] = 11120,
  [SMALL_STATE(187)] = 11169,
  [SMALL_STATE(188)] = 11220,
  [SMALL_STATE(189)] = 11271,
  [SMALL_STATE(190)] = 11320,
  [SMALL_STATE(191)] = 11369,
  [SMALL_STATE(192)] = 11420,
  [SMALL_STATE(193)] = 11471,
  [SMALL_STATE(194)] = 11520,
  [SMALL_STATE(195)] = 11571,
  [SMALL_STATE(196)] = 11620,
  [SMALL_STATE(197)] = 11671,
  [SMALL_STATE(198)] = 11719,
  [SMALL_STATE(199)] = 11765,
  [SMALL_STATE(200)] = 11811,
  [SMALL_STATE(201)] = 11859,
  [SMALL_STATE(202)] = 11904,
  [SMALL_STATE(203)] = 11949,
  [SMALL_STATE(204)] = 11994,
  [SMALL_STATE(205)] = 12039,
  [SMALL_STATE(206)] = 12084,
  [SMALL_STATE(207)] = 12129,
  [SMALL_STATE(208)] = 12174,
  [SMALL_STATE(209)] = 12219,
  [SMALL_STATE(210)] = 12264,
  [SMALL_STATE(211)] = 12309,
  [SMALL_STATE(212)] = 12354,
  [SMALL_STATE(213)] = 12381,
  [SMALL_STATE(214)] = 12420,
  [SMALL_STATE(215)] = 12459,
  [SMALL_STATE(216)] = 12498,
  [SMALL_STATE(217)] = 12529,
  [SMALL_STATE(218)] = 12568,
  [SMALL_STATE(219)] = 12607,
  [SMALL_STATE(220)] = 12630,
  [SMALL_STATE(221)] = 12653,
  [SMALL_STATE(222)] = 12675,
  [SMALL_STATE(223)] = 12693,
  [SMALL_STATE(224)] = 12710,
  [SMALL_STATE(225)] = 12731,
  [SMALL_STATE(226)] = 12750,
  [SMALL_STATE(227)] = 12767,
  [SMALL_STATE(228)] = 12788,
  [SMALL_STATE(229)] = 12805,
  [SMALL_STATE(230)] = 12822,
  [SMALL_STATE(231)] = 12841,
  [SMALL_STATE(232)] = 12862,
  [SMALL_STATE(233)] = 12882,
  [SMALL_STATE(234)] = 12900,
  [SMALL_STATE(235)] = 12920,
  [SMALL_STATE(236)] = 12935,
  [SMALL_STATE(237)] = 12952,
  [SMALL_STATE(238)] = 12969,
  [SMALL_STATE(239)] = 12986,
  [SMALL_STATE(240)] = 13003,
  [SMALL_STATE(241)] = 13020,
  [SMALL_STATE(242)] = 13035,
  [SMALL_STATE(243)] = 13052,
  [SMALL_STATE(244)] = 13069,
  [SMALL_STATE(245)] = 13086,
  [SMALL_STATE(246)] = 13103,
  [SMALL_STATE(247)] = 13120,
  [SMALL_STATE(248)] = 13135,
  [SMALL_STATE(249)] = 13149,
  [SMALL_STATE(250)] = 13163,
  [SMALL_STATE(251)] = 13177,
  [SMALL_STATE(252)] = 13191,
  [SMALL_STATE(253)] = 13205,
  [SMALL_STATE(254)] = 13219,
  [SMALL_STATE(255)] = 13233,
  [SMALL_STATE(256)] = 13247,
  [SMALL_STATE(257)] = 13261,
  [SMALL_STATE(258)] = 13275,
  [SMALL_STATE(259)] = 13289,
  [SMALL_STATE(260)] = 13303,
  [SMALL_STATE(261)] = 13326,
  [SMALL_STATE(262)] = 13341,
  [SMALL_STATE(263)] = 13364,
  [SMALL_STATE(264)] = 13387,
  [SMALL_STATE(265)] = 13410,
  [SMALL_STATE(266)] = 13433,
  [SMALL_STATE(267)] = 13450,
  [SMALL_STATE(268)] = 13473,
  [SMALL_STATE(269)] = 13490,
  [SMALL_STATE(270)] = 13513,
  [SMALL_STATE(271)] = 13536,
  [SMALL_STATE(272)] = 13553,
  [SMALL_STATE(273)] = 13572,
  [SMALL_STATE(274)] = 13587,
  [SMALL_STATE(275)] = 13604,
  [SMALL_STATE(276)] = 13627,
  [SMALL_STATE(277)] = 13644,
  [SMALL_STATE(278)] = 13667,
  [SMALL_STATE(279)] = 13690,
  [SMALL_STATE(280)] = 13704,
  [SMALL_STATE(281)] = 13720,
  [SMALL_STATE(282)] = 13736,
  [SMALL_STATE(283)] = 13752,
  [SMALL_STATE(284)] = 13764,
  [SMALL_STATE(285)] = 13780,
  [SMALL_STATE(286)] = 13794,
  [SMALL_STATE(287)] = 13808,
  [SMALL_STATE(288)] = 13828,
  [SMALL_STATE(289)] = 13840,
  [SMALL_STATE(290)] = 13860,
  [SMALL_STATE(291)] = 13874,
  [SMALL_STATE(292)] = 13886,
  [SMALL_STATE(293)] = 13898,
  [SMALL_STATE(294)] = 13915,
  [SMALL_STATE(295)] = 13932,
  [SMALL_STATE(296)] = 13949,
  [SMALL_STATE(297)] = 13966,
  [SMALL_STATE(298)] = 13983,
  [SMALL_STATE(299)] = 14000,
  [SMALL_STATE(300)] = 14013,
  [SMALL_STATE(301)] = 14030,
  [SMALL_STATE(302)] = 14047,
  [SMALL_STATE(303)] = 14066,
  [SMALL_STATE(304)] = 14081,
  [SMALL_STATE(305)] = 14098,
  [SMALL_STATE(306)] = 14109,
  [SMALL_STATE(307)] = 14122,
  [SMALL_STATE(308)] = 14139,
  [SMALL_STATE(309)] = 14151,
  [SMALL_STATE(310)] = 14165,
  [SMALL_STATE(311)] = 14177,
  [SMALL_STATE(312)] = 14191,
  [SMALL_STATE(313)] = 14203,
  [SMALL_STATE(314)] = 14219,
  [SMALL_STATE(315)] = 14235,
  [SMALL_STATE(316)] = 14245,
  [SMALL_STATE(317)] = 14255,
  [SMALL_STATE(318)] = 14265,
  [SMALL_STATE(319)] = 14279,
  [SMALL_STATE(320)] = 14295,
  [SMALL_STATE(321)] = 14311,
  [SMALL_STATE(322)] = 14321,
  [SMALL_STATE(323)] = 14333,
  [SMALL_STATE(324)] = 14343,
  [SMALL_STATE(325)] = 14357,
  [SMALL_STATE(326)] = 14369,
  [SMALL_STATE(327)] = 14382,
  [SMALL_STATE(328)] = 14395,
  [SMALL_STATE(329)] = 14408,
  [SMALL_STATE(330)] = 14421,
  [SMALL_STATE(331)] = 14434,
  [SMALL_STATE(332)] = 14447,
  [SMALL_STATE(333)] = 14460,
  [SMALL_STATE(334)] = 14473,
  [SMALL_STATE(335)] = 14486,
  [SMALL_STATE(336)] = 14499,
  [SMALL_STATE(337)] = 14512,
  [SMALL_STATE(338)] = 14525,
  [SMALL_STATE(339)] = 14538,
  [SMALL_STATE(340)] = 14551,
  [SMALL_STATE(341)] = 14564,
  [SMALL_STATE(342)] = 14577,
  [SMALL_STATE(343)] = 14590,
  [SMALL_STATE(344)] = 14603,
  [SMALL_STATE(345)] = 14616,
  [SMALL_STATE(346)] = 14629,
  [SMALL_STATE(347)] = 14638,
  [SMALL_STATE(348)] = 14651,
  [SMALL_STATE(349)] = 14664,
  [SMALL_STATE(350)] = 14677,
  [SMALL_STATE(351)] = 14690,
  [SMALL_STATE(352)] = 14703,
  [SMALL_STATE(353)] = 14716,
  [SMALL_STATE(354)] = 14729,
  [SMALL_STATE(355)] = 14742,
  [SMALL_STATE(356)] = 14755,
  [SMALL_STATE(357)] = 14768,
  [SMALL_STATE(358)] = 14781,
  [SMALL_STATE(359)] = 14794,
  [SMALL_STATE(360)] = 14807,
  [SMALL_STATE(361)] = 14820,
  [SMALL_STATE(362)] = 14833,
  [SMALL_STATE(363)] = 14846,
  [SMALL_STATE(364)] = 14859,
  [SMALL_STATE(365)] = 14872,
  [SMALL_STATE(366)] = 14885,
  [SMALL_STATE(367)] = 14898,
  [SMALL_STATE(368)] = 14911,
  [SMALL_STATE(369)] = 14924,
  [SMALL_STATE(370)] = 14937,
  [SMALL_STATE(371)] = 14950,
  [SMALL_STATE(372)] = 14963,
  [SMALL_STATE(373)] = 14976,
  [SMALL_STATE(374)] = 14986,
  [SMALL_STATE(375)] = 14994,
  [SMALL_STATE(376)] = 15004,
  [SMALL_STATE(377)] = 15014,
  [SMALL_STATE(378)] = 15024,
  [SMALL_STATE(379)] = 15032,
  [SMALL_STATE(380)] = 15042,
  [SMALL_STATE(381)] = 15052,
  [SMALL_STATE(382)] = 15062,
  [SMALL_STATE(383)] = 15072,
  [SMALL_STATE(384)] = 15082,
  [SMALL_STATE(385)] = 15092,
  [SMALL_STATE(386)] = 15100,
  [SMALL_STATE(387)] = 15108,
  [SMALL_STATE(388)] = 15116,
  [SMALL_STATE(389)] = 15126,
  [SMALL_STATE(390)] = 15134,
  [SMALL_STATE(391)] = 15142,
  [SMALL_STATE(392)] = 15150,
  [SMALL_STATE(393)] = 15158,
  [SMALL_STATE(394)] = 15166,
  [SMALL_STATE(395)] = 15174,
  [SMALL_STATE(396)] = 15184,
  [SMALL_STATE(397)] = 15192,
  [SMALL_STATE(398)] = 15200,
  [SMALL_STATE(399)] = 15210,
  [SMALL_STATE(400)] = 15220,
  [SMALL_STATE(401)] = 15230,
  [SMALL_STATE(402)] = 15238,
  [SMALL_STATE(403)] = 15246,
  [SMALL_STATE(404)] = 15256,
  [SMALL_STATE(405)] = 15264,
  [SMALL_STATE(406)] = 15272,
  [SMALL_STATE(407)] = 15280,
  [SMALL_STATE(408)] = 15290,
  [SMALL_STATE(409)] = 15300,
  [SMALL_STATE(410)] = 15308,
  [SMALL_STATE(411)] = 15316,
  [SMALL_STATE(412)] = 15326,
  [SMALL_STATE(413)] = 15336,
  [SMALL_STATE(414)] = 15344,
  [SMALL_STATE(415)] = 15352,
  [SMALL_STATE(416)] = 15362,
  [SMALL_STATE(417)] = 15370,
  [SMALL_STATE(418)] = 15380,
  [SMALL_STATE(419)] = 15388,
  [SMALL_STATE(420)] = 15398,
  [SMALL_STATE(421)] = 15408,
  [SMALL_STATE(422)] = 15418,
  [SMALL_STATE(423)] = 15426,
  [SMALL_STATE(424)] = 15434,
  [SMALL_STATE(425)] = 15444,
  [SMALL_STATE(426)] = 15452,
  [SMALL_STATE(427)] = 15460,
  [SMALL_STATE(428)] = 15468,
  [SMALL_STATE(429)] = 15478,
  [SMALL_STATE(430)] = 15488,
  [SMALL_STATE(431)] = 15496,
  [SMALL_STATE(432)] = 15504,
  [SMALL_STATE(433)] = 15512,
  [SMALL_STATE(434)] = 15520,
  [SMALL_STATE(435)] = 15530,
  [SMALL_STATE(436)] = 15537,
  [SMALL_STATE(437)] = 15544,
  [SMALL_STATE(438)] = 15551,
  [SMALL_STATE(439)] = 15558,
  [SMALL_STATE(440)] = 15565,
  [SMALL_STATE(441)] = 15572,
  [SMALL_STATE(442)] = 15579,
  [SMALL_STATE(443)] = 15586,
  [SMALL_STATE(444)] = 15593,
  [SMALL_STATE(445)] = 15600,
  [SMALL_STATE(446)] = 15607,
  [SMALL_STATE(447)] = 15614,
  [SMALL_STATE(448)] = 15621,
  [SMALL_STATE(449)] = 15628,
  [SMALL_STATE(450)] = 15635,
  [SMALL_STATE(451)] = 15642,
  [SMALL_STATE(452)] = 15649,
  [SMALL_STATE(453)] = 15656,
  [SMALL_STATE(454)] = 15663,
  [SMALL_STATE(455)] = 15670,
  [SMALL_STATE(456)] = 15677,
  [SMALL_STATE(457)] = 15684,
  [SMALL_STATE(458)] = 15691,
  [SMALL_STATE(459)] = 15698,
  [SMALL_STATE(460)] = 15705,
  [SMALL_STATE(461)] = 15712,
  [SMALL_STATE(462)] = 15719,
  [SMALL_STATE(463)] = 15726,
  [SMALL_STATE(464)] = 15733,
  [SMALL_STATE(465)] = 15740,
  [SMALL_STATE(466)] = 15747,
  [SMALL_STATE(467)] = 15754,
  [SMALL_STATE(468)] = 15761,
  [SMALL_STATE(469)] = 15768,
  [SMALL_STATE(470)] = 15775,
  [SMALL_STATE(471)] = 15782,
  [SMALL_STATE(472)] = 15789,
  [SMALL_STATE(473)] = 15796,
  [SMALL_STATE(474)] = 15803,
  [SMALL_STATE(475)] = 15810,
  [SMALL_STATE(476)] = 15817,
  [SMALL_STATE(477)] = 15824,
  [SMALL_STATE(478)] = 15831,
  [SMALL_STATE(479)] = 15838,
  [SMALL_STATE(480)] = 15845,
  [SMALL_STATE(481)] = 15852,
  [SMALL_STATE(482)] = 15859,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(381),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(130),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(40),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(191),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(66),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(119),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(275),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(78),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3, .production_id = 26),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 33),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(464),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_expr, 4, .production_id = 38),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 5),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 4, .production_id = 32),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 5, .production_id = 35),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expr, 3, .production_id = 25),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 7),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 7),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach, 5),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach, 5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__expr, 1), SHIFT(65),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1), REDUCE(sym__path, 1),
  [295] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym__expr, 1), REDUCE(sym__type_identifier, 1, .production_id = 1), SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(470),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 2, .production_id = 14),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 4, .production_id = 34),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 5, .production_id = 36),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_function, 2, .production_id = 15),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 2), SHIFT_REPEAT(39),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameters, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parameters, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3, .production_id = 27),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 6, .production_id = 37),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_type, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_type, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_access_repeat1, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 29),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_string_literal, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expr, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expr, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_string_literal, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expr, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expr, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expr, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_expr, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expr, 3, .production_id = 28),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 13),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_augment, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_augment, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_statement, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_statement, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destruct, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(399),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(209),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(408),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_destruct, 2), SHIFT(221),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 11),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 17),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 19),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 8),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 3, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 9),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 7),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(303),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(377),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(481),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(481),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 3, .production_id = 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameters, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 1), REDUCE(sym_scoped_identifier, 2, .production_id = 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 3, .production_id = 6),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_proto, 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_proto, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 8),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 8),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 6),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 6),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 7),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 7),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scoped_type_identifier, 2, .production_id = 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 5),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, .production_id = 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_definition, 4),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_definition, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 2, .production_id = 16),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 5),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_array_type, 6),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destruct, 5),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_type, 2),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(19),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(325),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__long_string_literal_repeat1, 2),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(260),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(436),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 2, .production_id = 14),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_region_specifier, 2, .production_id = 14),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(463),
  [807] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(30),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(308),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(277),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat1, 2), SHIFT_REPEAT(462),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [825] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_type_repeat2, 2), SHIFT_REPEAT(444),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [850] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(305),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pattern, 1), SHIFT(375),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_interpolation, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_interpolation, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2), SHIFT_REPEAT(172),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lambda_repeat1, 2), SHIFT_REPEAT(185),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expr_repeat1, 2), SHIFT_REPEAT(20),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mutability, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_parameters_repeat1, 2), SHIFT_REPEAT(188),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(388),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_parameters_repeat1, 2), SHIFT_REPEAT(74),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 1),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parameter, 1),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_path, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_region_parameter, 3, .production_id = 14),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 18),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 20),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 30),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, .production_id = 21),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 6, .production_id = 31),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 12),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 4, .production_id = 10),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune, 1),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_parameter, 2, .production_id = 22),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_destruct_repeat1, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 23),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_header, 5, .production_id = 24),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 4),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 4),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_wildcard, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1090] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vale(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
