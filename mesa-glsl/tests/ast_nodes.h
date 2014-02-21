/*
 * ast_nodes.h
 *
 *  Created on: 21.02.2014
 */

#ifndef TEST_AST_NODES_H_
#define TEST_AST_NODES_H_

enum ast_node_type {
	AST_NODE,
	AST_EXPRESSION,
	AST_EXPRESSION_BIN,
	AST_FUNCTION_EXPRESSION,
	AST_ARRAY_SPECIFIER,
	AST_AGGREGATE_INITIALIZER,
	AST_DECLARATION,
	AST_STRUCT_SPECIFIER,
	AST_TYPE_SPECIFIER,
	AST_FULLY_SPECIFIED_TYPE,
	AST_PARAMETER_DECLARATOR,
	AST_FUNCTION,
	AST_CASE_LABEL,
	AST_CASE_STATEMENT,
	AST_SWITCH_BODY,
	AST_SELECTION_STATEMENT,
	AST_SWITCH_STATEMENT,
	AST_ITERATION_STATEMENT,
	AST_JUMP_STATEMENT,
	AST_FUNCTION_DEFINITION,
	AST_INTERFACE_BLOCK,
	AST_GS_INPUT_LAYOUT,
	AST_LAST
};

const char* ast_node_names[AST_LAST] = {
	"AST_NODE",	"AST_EXPRESSION", "AST_EXPRESSION_BIN", "AST_FUNCTION_EXPRESSION",
	"AST_ARRAY_SPECIFIER", "AST_AGGREGATE_INITIALIZER", "AST_DECLARATION",
	"AST_STRUCT_SPECIFIER", "AST_TYPE_SPECIFIER", "AST_FULLY_SPECIFIED_TYPE",
	"AST_PARAMETER_DECLARATOR", "AST_FUNCTION", "AST_CASE_LABEL",
	"AST_CASE_STATEMENT", "AST_SWITCH_BODY", "AST_SELECTION_STATEMENT",
	"AST_SWITCH_STATEMENT", "AST_ITERATION_STATEMENT", "AST_JUMP_STATEMENT",
	"AST_FUNCTION_DEFINITION", "AST_INTERFACE_BLOCK", "AST_GS_INPUT_LAYOUT",
};

const char* ast_expr_string_ext[ast_aggregate - ast_array_index + 1] = {
	"array_index", "function_call", "identifier", "int_constant",
	"uint_constant", "float_constant", "bool_constant", "sequence",
	"aggregate"
};


#endif /* TEST_AST_NODES_H_ */
