/*
** Automatically generated from `helloworld.m'
** by the Mercury compiler,
** version 22.01.3
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** UNBOXED_INT64S=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module helloworld.
// :- implementation.

/*
INIT mercury__helloworld__init
ENDINIT
*/

#include "helloworld.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "parsing_utils.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"




static const MR_Integer helloworld__helloworld__functor_number_map_program_0[1];

static const MR_FA_TypeInfo_Struct1 helloworld__list__ti_list_1helloworld__type_ctor_info_statement_0;

static const MR_NotagFunctorDesc helloworld__helloworld__notag_functor_desc_program_0;

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_statement_0_0[2];

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_statement_0_0;

static const MR_FA_TypeInfo_Struct1 helloworld__list__ti_list_1helloworld__type_ctor_info_value_0;

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_statement_0_1[2];

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_statement_0_1;

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_statement_0_0[1];

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_statement_0_1[1];

static const MR_DuPtagLayout helloworld__helloworld__du_ptag_ordered_statement_0[2];

static const MR_DuFunctorDescPtr helloworld__helloworld__du_name_ordered_statement_0[2];

static const MR_Integer helloworld__helloworld__functor_number_map_statement_0[2];

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_value_0_0[1];

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_value_0_0;

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_value_0_1[1];

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_value_0_1;

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_value_0_0[1];

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_value_0_1[1];

static const MR_DuPtagLayout helloworld__helloworld__du_ptag_ordered_value_0[2];

static const MR_DuFunctorDescPtr helloworld__helloworld__du_name_ordered_value_0[2];

static const MR_Integer helloworld__helloworld__functor_number_map_value_0[2];

static void MR_CALL 
helloworld____Compare____statement_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
helloworld____Compare____value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
helloworld____Unify____statement_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
helloworld____Unify____value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
helloworld____Compare____program_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
helloworld____Unify____program_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
helloworld____Compare____identifier_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3);

static MR_bool MR_CALL 
helloworld____Unify____identifier_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2);

static MR_bool MR_CALL 
helloworld__parser_4_p_0(
  MR_Word Src_5,
  MR_Word * Out_6,
  MR_Integer STATE_VARIABLE_PS_0_8,
  MR_Integer * STATE_VARIABLE_PS_9);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
helloworld____Unify____identifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
helloworld____Compare____identifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
helloworld____Unify____program_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
helloworld____Compare____program_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
helloworld____Unify____statement_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
helloworld____Compare____statement_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
helloworld____Unify____value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
helloworld____Compare____value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box helloworld_scalar_common_1[3][2];

static /* final */ const MR_Box helloworld_scalar_common_2[1][7];

static /* final */ const MR_Box helloworld_scalar_common_3[1][3];




static /* final */ const MR_Box helloworld_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_parse_result_1)),
    ((MR_Box) (&helloworld__helloworld__type_ctor_info_program_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&helloworld__helloworld__type_ctor_info_statement_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&helloworld__helloworld__type_ctor_info_value_0))
  },
};

static /* final */ const MR_Box helloworld_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&helloworld__helloworld__type_ctor_info_program_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box helloworld_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&helloworld_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



const MR_TypeCtorInfo_Struct helloworld__helloworld__type_ctor_info_identifier_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (helloworld____Unify____identifier_0_0_10001)),
  ((MR_Box) (helloworld____Compare____identifier_0_0_10001)),
  (MR_String) "helloworld",
  (MR_String) "identifier",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer helloworld__helloworld__functor_number_map_program_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 helloworld__list__ti_list_1helloworld__type_ctor_info_statement_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&helloworld__helloworld__type_ctor_info_statement_0)
  }
};

static const MR_NotagFunctorDesc helloworld__helloworld__notag_functor_desc_program_0 = {
  (MR_String) "program",
  (MR_PseudoTypeInfo) (&helloworld__list__ti_list_1helloworld__type_ctor_info_statement_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct helloworld__helloworld__type_ctor_info_program_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (helloworld____Unify____program_0_0_10001)),
  ((MR_Box) (helloworld____Compare____program_0_0_10001)),
  (MR_String) "helloworld",
  (MR_String) "program",
  {     &helloworld__helloworld__notag_functor_desc_program_0 },
  {     &helloworld__helloworld__notag_functor_desc_program_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  helloworld__helloworld__functor_number_map_program_0,

};

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_statement_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&helloworld__helloworld__type_ctor_info_value_0)
};

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_statement_0_0 = {
  (MR_String) "assignment",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  helloworld__helloworld__field_types_statement_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 helloworld__list__ti_list_1helloworld__type_ctor_info_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&helloworld__helloworld__type_ctor_info_value_0)
  }
};

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_statement_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&helloworld__list__ti_list_1helloworld__type_ctor_info_value_0)
};

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_statement_0_1 = {
  (MR_String) "function_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  helloworld__helloworld__field_types_statement_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_statement_0_0[1] = {
  &helloworld__helloworld__du_functor_desc_statement_0_0
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_statement_0_1[1] = {
  &helloworld__helloworld__du_functor_desc_statement_0_1
};

static const MR_DuPtagLayout helloworld__helloworld__du_ptag_ordered_statement_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    helloworld__helloworld__du_stag_ordered_statement_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    helloworld__helloworld__du_stag_ordered_statement_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_name_ordered_statement_0[2] = {
  &helloworld__helloworld__du_functor_desc_statement_0_0,
  &helloworld__helloworld__du_functor_desc_statement_0_1
};

static const MR_Integer helloworld__helloworld__functor_number_map_statement_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct helloworld__helloworld__type_ctor_info_statement_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (helloworld____Unify____statement_0_0_10001)),
  ((MR_Box) (helloworld____Compare____statement_0_0_10001)),
  (MR_String) "helloworld",
  (MR_String) "statement",
  {     helloworld__helloworld__du_name_ordered_statement_0 },
  {     helloworld__helloworld__du_ptag_ordered_statement_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  helloworld__helloworld__functor_number_map_statement_0,

};

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_value_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_value_0_0 = {
  (MR_String) "integer",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  helloworld__helloworld__field_types_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo helloworld__helloworld__field_types_value_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc helloworld__helloworld__du_functor_desc_value_0_1 = {
  (MR_String) "identifier",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  helloworld__helloworld__field_types_value_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_value_0_0[1] = {
  &helloworld__helloworld__du_functor_desc_value_0_0
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_stag_ordered_value_0_1[1] = {
  &helloworld__helloworld__du_functor_desc_value_0_1
};

static const MR_DuPtagLayout helloworld__helloworld__du_ptag_ordered_value_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    helloworld__helloworld__du_stag_ordered_value_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    helloworld__helloworld__du_stag_ordered_value_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr helloworld__helloworld__du_name_ordered_value_0[2] = {
  &helloworld__helloworld__du_functor_desc_value_0_1,
  &helloworld__helloworld__du_functor_desc_value_0_0
};

static const MR_Integer helloworld__helloworld__functor_number_map_value_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct helloworld__helloworld__type_ctor_info_value_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (helloworld____Unify____value_0_0_10001)),
  ((MR_Box) (helloworld____Compare____value_0_0_10001)),
  (MR_String) "helloworld",
  (MR_String) "value",
  {     helloworld__helloworld__du_name_ordered_value_0 },
  {     helloworld__helloworld__du_ptag_ordered_value_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  helloworld__helloworld__functor_number_map_value_0,

};

static void MR_CALL 
helloworld____Compare____statement_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_29, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          helloworld____Compare____value_0_0(HeadVar__1_1, Var_28, ArgY2_8);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_19;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_19, Var_31, ArgY1_18);
        succeeded = (SubResult1_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_19;
        else
        {
          MR_Word TypeInfo_25_25 = (MR_Word) (&helloworld_scalar_common_1[2]);

          mercury__builtin__compare_3_p_0(TypeInfo_25_25, HeadVar__1_1, ((MR_Box) (Var_30)), ((MR_Box) (ArgY2_21)));
        }
      }
    }
  }
}

static void MR_CALL 
helloworld____Compare____value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_17 < ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > ArgY1_5);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
helloworld____Unify____statement_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
        if (succeeded)
          succeeded = helloworld____Unify____value_0_0(ArgX2_5, ArgY2_6);
      }
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&helloworld_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
helloworld____Unify____value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____program_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word TypeInfo_8_8 = (MR_Word) (&helloworld_scalar_common_1[1]);
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0(TypeInfo_8_8, HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
helloworld____Unify____program_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_7_7 = (MR_Word) (&helloworld_scalar_common_1[1]);
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_7_7, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____identifier_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
helloworld____Unify____identifier_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
helloworld__parser_4_p_0(
  MR_Word Src_5,
  MR_Word * Out_6,
  MR_Integer STATE_VARIABLE_PS_0_8,
  MR_Integer * STATE_VARIABLE_PS_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_12_12 = (MR_Word) (&helloworld__helloworld__type_ctor_info_program_0);
    MR_String Var_10 = (MR_String) "You suck";
    MR_Box conv0_Out_6;

    succeeded = mercury__parsing_utils__fail_with_message_5_p_0(TypeCtorInfo_12_12, Var_10, Src_5, &conv0_Out_6, STATE_VARIABLE_PS_0_8, STATE_VARIABLE_PS_9);
    if (succeeded)
    {
      *Out_6 = ((MR_Word) (conv0_Out_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Out_6;
    MR_Integer conv0_STATE_VARIABLE_PS_9;

    succeeded = helloworld__parser_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Out_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PS_9);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_Out_6));
      *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PS_9));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word ReadResult_4;
    MR_String Var_9 = (MR_String) "./counter.ux";
    MR_String Input_5;

    mercury__io__read_named_file_as_string_4_p_0(Var_9, &ReadResult_4);
    succeeded = ((MR_tag((MR_Word) ReadResult_4)) == (MR_Integer) 0);
    if (succeeded)
    {
      Input_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadResult_4, (MR_Integer) 0))));
      {
        MR_Word TypeCtorInfo_19_19 = (MR_Word) (&helloworld__helloworld__type_ctor_info_program_0);
        MR_Word TypeInfo_20_20;
        MR_Word Parsed_6;
        MR_Word Var_11 = (MR_Word) (&helloworld_scalar_common_3[0]);

        mercury__parsing_utils__parse_3_p_0(TypeCtorInfo_19_19, Input_5, Var_11, &Parsed_6);
        TypeInfo_20_20 = (MR_Word) (&helloworld_scalar_common_1[0]);
        mercury__io__write_line_3_p_0(TypeInfo_20_20, ((MR_Box) (Parsed_6)));
      }
    }
    else
    {
      MR_Word TypeCtorInfo_21_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      MR_String Var_13 = (MR_String) "Uh oh";

      mercury__io__write_line_3_p_0(TypeCtorInfo_21_21, ((MR_Box) (Var_13)));
    }
  }
}

static MR_bool MR_CALL 
helloworld____Unify____identifier_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = helloworld____Unify____identifier_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____identifier_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    helloworld____Compare____identifier_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
helloworld____Unify____program_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = helloworld____Unify____program_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____program_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    helloworld____Compare____program_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
helloworld____Unify____statement_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = helloworld____Unify____statement_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____statement_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    helloworld____Compare____statement_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
helloworld____Unify____value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = helloworld____Unify____value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
helloworld____Compare____value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    helloworld____Compare____value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__helloworld__init(void)
{
}

void mercury__helloworld__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&helloworld__helloworld__type_ctor_info_identifier_0);
	MR_register_type_ctor_info(&helloworld__helloworld__type_ctor_info_program_0);
	MR_register_type_ctor_info(&helloworld__helloworld__type_ctor_info_statement_0);
	MR_register_type_ctor_info(&helloworld__helloworld__type_ctor_info_value_0);
}

void mercury__helloworld__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__helloworld__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module helloworld.
