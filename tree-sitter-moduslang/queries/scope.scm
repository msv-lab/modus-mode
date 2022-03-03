; Scope-aware variables

(clause_definition) @local.scope

(head
 (term_list
   (term_definition
    (variable_identifier) @local.definition)))

(variable_identifier) @local.reference
