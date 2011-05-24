#ifndef CIL_BUILD_AST_H_
#define CIL_BUILD_AST_H_

#include <stdint.h>

#include "cil.h"
#include "cil_tree.h"
#include "cil_list.h"

int cil_parse_to_list(struct cil_tree_node *, struct cil_list *, uint32_t);
int cil_gen_perm_nodes(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);

int cil_gen_block(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *, uint16_t, char *);
void cil_destroy_block(struct cil_block *);
int cil_gen_perm(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_perm(struct cil_perm *);
int cil_gen_class(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_class(struct cil_class *);
int cil_gen_common(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_common(struct cil_common *);
int cil_gen_classcommon(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_classcommon(struct cil_classcommon *);
int cil_gen_sid(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_sid(struct cil_sid *);
int cil_gen_sidcontext(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_sidcontext(struct cil_sidcontext *);
int cil_gen_avrule(struct cil_tree_node *, struct cil_tree_node *, uint32_t);
void cil_destroy_avrule(struct cil_avrule *);
int cil_gen_type_rule(struct cil_tree_node *, struct cil_tree_node *, uint32_t);
void cil_destroy_type_rule(struct cil_type_rule *);
int cil_gen_type(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *, uint32_t);
void cil_destroy_type(struct cil_type *);
int cil_gen_user(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_user(struct cil_user *);
int cil_gen_role(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_role(struct cil_role *);
int cil_gen_userrole(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_userrole(struct cil_userrole *);
int cil_gen_roletype(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_roletype(struct cil_roletype *);
int cil_gen_roletrans(struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_roletrans(struct cil_role_trans *);
int cil_gen_roleallow(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_roleallow(struct cil_role_allow *);
int cil_gen_roledominance(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_roledominance(struct cil_roledominance *);
int cil_gen_bool(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *, uint32_t flavor);
void cil_destroy_bool(struct cil_bool *);
int cil_gen_expr_stack(struct cil_tree_node *current, uint32_t flavor, struct cil_tree_node **stack);
int cil_gen_boolif(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_boolif(struct cil_booleanif *);
int cil_gen_else(struct cil_db *db, struct cil_tree_node *parse_current, struct cil_tree_node *ast_node);
int cil_gen_tunif(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_tunif(struct cil_tunableif *);
void cil_destroy_conditional(struct cil_conditional *);
int cil_gen_typealias(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_typealias(struct cil_typealias *);
int cil_gen_typeattr(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_typeattr(struct cil_typeattribute *);
int cil_gen_typebounds(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_typebounds(struct cil_typebounds *);
int cil_gen_sensitivity(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_sensitivity(struct cil_sens *);
int cil_gen_category(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_category(struct cil_cat *);
int cil_gen_sensalias(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_sensalias(struct cil_sensalias *);
int cil_gen_catalias(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_catalias(struct cil_catalias *);
int cil_set_to_list(struct cil_tree_node *, struct cil_list *, uint8_t);
int cil_gen_catset(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
int cil_fill_catset(struct cil_tree_node *, struct cil_catset *);
void cil_destroy_catset(struct cil_catset *);
int cil_gen_catorder(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_catorder(struct cil_catorder *);
int cil_gen_dominance(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_dominance(struct cil_sens_dominates *);
int cil_gen_senscat(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_senscat(struct cil_senscat *);
int cil_fill_level(struct cil_tree_node *, struct cil_level *);
int cil_gen_level(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_level(struct cil_level *);
int cil_gen_constrain(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *, uint32_t);
void cil_destroy_constrain(struct cil_constrain *);
void cil_destroy_constrain_node(struct cil_tree_node *);
int cil_gen_context(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
int cil_fill_context(struct cil_tree_node *, struct cil_context *);
void cil_destroy_context(struct cil_context *);
int cil_gen_portcon(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_portcon(struct cil_portcon *);
int cil_gen_netifcon(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_netifcon(struct cil_netifcon *);
int cil_gen_macro(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_macro(struct cil_macro *);
int cil_gen_call(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_call(struct cil_call *);
void cil_destroy_args(struct cil_args *);
int cil_gen_policycap(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_policycap(struct cil_policycap *);
int cil_gen_optional(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);
void cil_destroy_optional(struct cil_optional *);

int cil_build_ast(struct cil_db *, struct cil_tree_node *, struct cil_tree_node *);

#endif /* CIL_BUILD_AST_H_ */
