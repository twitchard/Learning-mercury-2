/*
** Automatically generated from `html.m'
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


// :- module html.
// :- implementation.

/*
INIT mercury__html__init
ENDINIT
*/

#include "html.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo html__html__field_types_attribute_0_0[2];

static const MR_DuFunctorDesc html__html__du_functor_desc_attribute_0_0;

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_attribute_0_0[1];

static const MR_DuPtagLayout html__html__du_ptag_ordered_attribute_0[1];

static const MR_DuFunctorDescPtr html__html__du_name_ordered_attribute_0[1];

static const MR_Integer html__html__functor_number_map_attribute_0[1];

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_0;

static const MR_PseudoTypeInfo html__html__field_types_html_0_1[1];

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_1;

static const MR_FA_TypeInfo_Struct1 html__list__ti_list_1html__type_ctor_info_attribute_0;

static const MR_FA_TypeInfo_Struct1 html__list__ti_list_1html__type_ctor_info_html_0;

static const MR_PseudoTypeInfo html__html__field_types_html_0_2[4];

static const MR_DuArgLocn html__html__field_locns_html_0_2[4];

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_2;

static const MR_PseudoTypeInfo html__html__field_types_html_0_3[1];

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_3;

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_0[1];

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_1[1];

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_2[1];

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_3[1];

static const MR_DuPtagLayout html__html__du_ptag_ordered_html_0[4];

static const MR_DuFunctorDescPtr html__html__du_name_ordered_html_0[4];

static const MR_Integer html__html__functor_number_map_html_0[4];

static const MR_EnumFunctorDesc html__html__enum_functor_desc_is_void_0_0;

static const MR_EnumFunctorDesc html__html__enum_functor_desc_is_void_0_1;

static const MR_EnumFunctorDescPtr html__html__enum_ordinal_ordered_is_void_0[2];

static const MR_EnumFunctorDescPtr html__html__enum_name_ordered_is_void_0[2];

static const MR_Integer html__html__functor_number_map_is_void_0[2];

static MR_Box MR_CALL 
html__render_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
html__render_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
html__render_attributes_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
html____Unify____attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html____Compare____attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html____Unify____html_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html____Compare____html_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html____Unify____is_void_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html____Compare____is_void_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
html____Unify____tag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
html____Compare____tag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box html_scalar_common_1[3][2];

static /* final */ const MR_Box html_scalar_common_2[1][5];

static /* final */ const MR_Box html_scalar_common_3[2][3];




static /* final */ const MR_Box html_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&html__html__type_ctor_info_html_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&html__html__type_ctor_info_attribute_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "type")),
    ((MR_Box) ((MR_String) "hidden"))
  },
};

static /* final */ const MR_Box html_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&html__html__type_ctor_info_html_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box html_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&html_scalar_common_2[0])),
    ((MR_Box) (html__render_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&html_scalar_common_2[0])),
    ((MR_Box) (html__render_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};






static const MR_PseudoTypeInfo html__html__field_types_attribute_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc html__html__du_functor_desc_attribute_0_0 = {
  (MR_String) "attribute",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  html__html__field_types_attribute_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_attribute_0_0[1] = {
  &html__html__du_functor_desc_attribute_0_0
};

static const MR_DuPtagLayout html__html__du_ptag_ordered_attribute_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    html__html__du_stag_ordered_attribute_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr html__html__du_name_ordered_attribute_0[1] = {
  &html__html__du_functor_desc_attribute_0_0
};

static const MR_Integer html__html__functor_number_map_attribute_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct html__html__type_ctor_info_attribute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (html____Unify____attribute_0_0_10001)),
  ((MR_Box) (html____Compare____attribute_0_0_10001)),
  (MR_String) "html",
  (MR_String) "attribute",
  {     html__html__du_name_ordered_attribute_0 },
  {     html__html__du_ptag_ordered_attribute_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  html__html__functor_number_map_attribute_0,

};

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_0 = {
  (MR_String) "empty",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo html__html__field_types_html_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_1 = {
  (MR_String) "text",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  html__html__field_types_html_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 html__list__ti_list_1html__type_ctor_info_attribute_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&html__html__type_ctor_info_attribute_0)
  }
};

static const MR_FA_TypeInfo_Struct1 html__list__ti_list_1html__type_ctor_info_html_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&html__html__type_ctor_info_html_0)
  }
};

static const MR_PseudoTypeInfo html__html__field_types_html_0_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&html__html__type_ctor_info_is_void_0),
  (MR_PseudoTypeInfo) (&html__list__ti_list_1html__type_ctor_info_attribute_0),
  (MR_PseudoTypeInfo) (&html__list__ti_list_1html__type_ctor_info_html_0)
};

static const MR_DuArgLocn html__html__field_locns_html_0_2[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_2 = {
  (MR_String) "element",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  html__html__field_types_html_0_2,
  NULL,
  html__html__field_locns_html_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo html__html__field_types_html_0_3[1] = {
  (MR_PseudoTypeInfo) (&html__list__ti_list_1html__type_ctor_info_html_0)
};

static const MR_DuFunctorDesc html__html__du_functor_desc_html_0_3 = {
  (MR_String) "concat",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  html__html__field_types_html_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_0[1] = {
  &html__html__du_functor_desc_html_0_0
};

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_1[1] = {
  &html__html__du_functor_desc_html_0_1
};

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_2[1] = {
  &html__html__du_functor_desc_html_0_2
};

static const MR_DuFunctorDescPtr html__html__du_stag_ordered_html_0_3[1] = {
  &html__html__du_functor_desc_html_0_3
};

static const MR_DuPtagLayout html__html__du_ptag_ordered_html_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    html__html__du_stag_ordered_html_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    html__html__du_stag_ordered_html_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    html__html__du_stag_ordered_html_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    html__html__du_stag_ordered_html_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr html__html__du_name_ordered_html_0[4] = {
  &html__html__du_functor_desc_html_0_3,
  &html__html__du_functor_desc_html_0_2,
  &html__html__du_functor_desc_html_0_0,
  &html__html__du_functor_desc_html_0_1
};

static const MR_Integer html__html__functor_number_map_html_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct html__html__type_ctor_info_html_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (html____Unify____html_0_0_10001)),
  ((MR_Box) (html____Compare____html_0_0_10001)),
  (MR_String) "html",
  (MR_String) "html",
  {     html__html__du_name_ordered_html_0 },
  {     html__html__du_ptag_ordered_html_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  html__html__functor_number_map_html_0,

};

static const MR_EnumFunctorDesc html__html__enum_functor_desc_is_void_0_0 = {
  (MR_String) "yes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc html__html__enum_functor_desc_is_void_0_1 = {
  (MR_String) "no",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr html__html__enum_ordinal_ordered_is_void_0[2] = {
  &html__html__enum_functor_desc_is_void_0_0,
  &html__html__enum_functor_desc_is_void_0_1
};

static const MR_EnumFunctorDescPtr html__html__enum_name_ordered_is_void_0[2] = {
  &html__html__enum_functor_desc_is_void_0_1,
  &html__html__enum_functor_desc_is_void_0_0
};

static const MR_Integer html__html__functor_number_map_is_void_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct html__html__type_ctor_info_is_void_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (html____Unify____is_void_0_0_10001)),
  ((MR_Box) (html____Compare____is_void_0_0_10001)),
  (MR_String) "html",
  (MR_String) "is_void",
  {     html__html__enum_name_ordered_is_void_0 },
  {     html__html__enum_ordinal_ordered_is_void_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  html__html__functor_number_map_is_void_0,

};

const MR_TypeCtorInfo_Struct html__html__type_ctor_info_tag_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (html____Unify____tag_0_0_10001)),
  ((MR_Box) (html____Compare____tag_0_0_10001)),
  (MR_String) "html",
  (MR_String) "tag",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
html____Compare____tag_0_0(
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

MR_bool MR_CALL 
html____Unify____tag_0_0(
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

void MR_CALL 
html____Compare____is_void_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
html____Unify____is_void_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
html____Compare____html_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_55 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_56 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_55 == CastY_56);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_68 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_68, ArgY1_12);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_String Var_67 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_30 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_31;

                  mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_31, Var_67, ArgY1_30);
                  succeeded = (SubResult1_31 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_31;
                  else
                  {
                    MR_Word SubResult2_34;
                    MR_Integer Var_69 = (MR_Integer) (Var_66);
                    MR_Integer Var_70 = (MR_Integer) (ArgY2_33);

                    succeeded = (Var_69 < Var_70);
                    if (succeeded)
                      SubResult2_34 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_69 > Var_70);
                      if (succeeded)
                        SubResult2_34 = (MR_Integer) 2;
                      else
                        SubResult2_34 = (MR_Integer) 0;
                    }
                    succeeded = (SubResult2_34 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_34;
                    else
                    {
                      MR_Word SubResult3_37;
                      MR_Word TypeInfo_60_60 = (MR_Word) (&html_scalar_common_1[1]);

                      mercury__builtin__compare_3_p_0(TypeInfo_60_60, &SubResult3_37, ((MR_Box) (Var_65)), ((MR_Box) (ArgY3_36)));
                      succeeded = (SubResult3_37 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_37;
                      else
                      {
                        MR_Word TypeInfo_61_61 = (MR_Word) (&html_scalar_common_1[0]);

                        mercury__builtin__compare_3_p_0(TypeInfo_61_61, HeadVar__1_1, ((MR_Box) (Var_64)), ((MR_Box) (ArgY4_39)));
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeInfo_57_57 = (MR_Word) (&html_scalar_common_1[0]);
                  MR_Word ArgY1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0(TypeInfo_57_57, HeadVar__1_1, ((MR_Box) (Var_63)), ((MR_Box) (ArgY1_54)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
html____Unify____html_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
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
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_20_20;
            MR_Word TypeInfo_21_21;
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;
            MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              if (succeeded)
              {
                succeeded = (ArgX2_9 == ArgY2_10);
                if (succeeded)
                {
                  TypeInfo_20_20 = (MR_Word) (&html_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
                  if (succeeded)
                  {
                    TypeInfo_21_21 = (MR_Word) (&html_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_19_19;
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_19_19 = (MR_Word) (&html_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
html____Compare____attribute_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
html____Unify____attribute_0_0(
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
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
html__script_1_f_0(
  MR_String Src_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4 = (MR_String) "script";
    MR_Word Var_5 = (MR_Integer) 1;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_String Var_8 = (MR_String) "src";
    MR_Word Var_9;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (Src_3));
    }
    Var_9 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (Var_9));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) (Var_5));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 3) = ((MR_Box) (Var_9));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
html__hiddenInput_2_f_0(
  MR_String Name_4,
  MR_String Value_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "input";
    MR_Word Var_7 = (MR_Integer) 0;
    MR_Word Var_8;
    MR_Word Var_9 = (MR_Word) (&html_scalar_common_1[2]);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_String Var_14 = (MR_String) "name";
    MR_Word Var_15;
    MR_Word Var_16;
    MR_String Var_17;
    MR_Word Var_18;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Name_4));
    }
    Var_17 = (MR_String) "value";
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Value_5));
    }
    Var_18 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_12));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_18));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__form_3_f_0(
  MR_String Action_5,
  MR_Word Attrs_6,
  MR_Word Contents_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_String Var_8 = (MR_String) "form";
    MR_Word Var_9 = (MR_Integer) 1;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_String Var_12 = (MR_String) "action";

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Action_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Attrs_6));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 3) = ((MR_Box) (Contents_7));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
html__pre_2_f_0(
  MR_String Contents_4,
  MR_Word Attrs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "pre";
    MR_Word Var_7 = (MR_Integer) 1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Contents_4));
    }
    Var_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Attrs_5));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__pre_1_f_0(
  MR_String Contents_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4 = (MR_String) "pre";
    MR_Word Var_5 = (MR_Integer) 1;
    MR_Word Var_6 = (MR_Word) ((MR_Unsigned) 0U);
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Contents_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) (Var_5));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
html__button_2_f_0(
  MR_String Contents_4,
  MR_Word Attrs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "button";
    MR_Word Var_7 = (MR_Integer) 1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Contents_4));
    }
    Var_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Attrs_5));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__button_1_f_0(
  MR_String Contents_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4 = (MR_String) "button";
    MR_Word Var_5 = (MR_Integer) 1;
    MR_Word Var_6 = (MR_Word) ((MR_Unsigned) 0U);
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Contents_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) (Var_5));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
html__a_3_f_0(
  MR_String Href_5,
  MR_String Contents_6,
  MR_Word Attrs_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_String Var_8 = (MR_String) "a";
    MR_Word Var_9 = (MR_Integer) 1;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_String Var_12 = (MR_String) "href";
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Href_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Attrs_7));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Contents_6));
    }
    Var_15 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    {
      HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 1) = (MR_Box) ((MR_Unsigned) (Var_9));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 2) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(2), HeadVar__4_4, 3) = ((MR_Box) (Var_13));
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
html__a_2_f_0(
  MR_String Href_4,
  MR_String Contents_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "a";
    MR_Word Var_7 = (MR_Integer) 1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_String Var_10 = (MR_String) "href";
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Href_4));
    }
    Var_11 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Contents_5));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_11));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_12));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__h2_2_f_0(
  MR_String Contents_4,
  MR_Word Attrs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "h2";
    MR_Word Var_7 = (MR_Integer) 1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Contents_4));
    }
    Var_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Attrs_5));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__h2_1_f_0(
  MR_String Contents_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4 = (MR_String) "h2";
    MR_Word Var_5 = (MR_Integer) 1;
    MR_Word Var_6 = (MR_Word) ((MR_Unsigned) 0U);
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Contents_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) (Var_5));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
html__h1_2_f_0(
  MR_String Contents_4,
  MR_Word Attrs_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6 = (MR_String) "h1";
    MR_Word Var_7 = (MR_Integer) 1;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Contents_4));
    }
    Var_10 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_10));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = (MR_Box) ((MR_Unsigned) (Var_7));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) (Attrs_5));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
html__h1_1_f_0(
  MR_String Contents_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4 = (MR_String) "h1";
    MR_Word Var_5 = (MR_Integer) 1;
    MR_Word Var_6 = (MR_Word) ((MR_Unsigned) 0U);
    MR_Word Var_7;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Contents_3));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (Var_6));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 1) = (MR_Box) ((MR_Unsigned) (Var_5));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 3) = ((MR_Box) (Var_7));
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
html__render_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = html__render_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
html__render_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = html__render_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
html__render_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_String Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));

          switch (Var_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorInfo_45_45;
                MR_Word TypeCtorInfo_46_46;
                MR_String LeftTag_23;
                MR_String Content_24;
                MR_String RightTag_25;
                MR_String Var_27;
                MR_String Var_28 = (MR_String) "<";
                MR_String Var_29;
                MR_String Var_30;
                MR_String Var_31 = (MR_String) " ";
                MR_String Var_32;
                MR_String Var_33;
                MR_String Var_34;
                MR_String Var_35;
                MR_String Var_36;
                MR_String Var_37;
                MR_String Var_38;
                MR_Word Var_39;
                MR_Word Var_40;

                Var_33 = html__render_attributes_1_f_0(Var_50);
                Var_34 = (MR_String) ">";
                Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
                Var_30 = mercury__string__f_43_43_2_f_0(Var_31, Var_32);
                Var_29 = mercury__string__f_43_43_2_f_0(Var_52, Var_30);
                LeftTag_23 = mercury__string__f_43_43_2_f_0(Var_28, Var_29);
                Var_35 = (MR_String) "</";
                Var_37 = (MR_String) ">";
                Var_36 = mercury__string__f_43_43_2_f_0(Var_52, Var_37);
                RightTag_25 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
                Var_38 = (MR_String) "";
                TypeCtorInfo_45_45 = (MR_Word) (&html__html__type_ctor_info_html_0);
                TypeCtorInfo_46_46 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
                Var_40 = (MR_Word) (&html_scalar_common_3[1]);
                Var_39 = mercury__list__map_2_f_0(TypeCtorInfo_45_45, TypeCtorInfo_46_46, Var_40, Var_49);
                Content_24 = mercury__string__join_list_2_f_0(Var_38, Var_39);
                Var_27 = mercury__string__f_43_43_2_f_0(Content_24, RightTag_25);
                HeadVar__2_2 = mercury__string__f_43_43_2_f_0(LeftTag_23, Var_27);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_String Var_13 = (MR_String) "<";
                MR_String Var_14;
                MR_String Var_15;
                MR_String Var_16 = (MR_String) " ";
                MR_String Var_17;
                MR_String Var_18;
                MR_String Var_19;

                Var_18 = html__render_attributes_1_f_0(Var_50);
                Var_19 = (MR_String) "/>";
                Var_17 = mercury__string__f_43_43_2_f_0(Var_18, Var_19);
                Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
                Var_14 = mercury__string__f_43_43_2_f_0(Var_52, Var_15);
                HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeCtorInfo_41_41 = (MR_Word) (&html__html__type_ctor_info_html_0);
          MR_Word TypeCtorInfo_42_42 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          MR_Word HtmlList_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          MR_String Var_4 = (MR_String) "";
          MR_Word Var_5;
          MR_Word Var_6 = (MR_Word) (&html_scalar_common_3[0]);

          Var_5 = mercury__list__map_2_f_0(TypeCtorInfo_41_41, TypeCtorInfo_42_42, Var_6, HtmlList_3);
          HeadVar__2_2 = mercury__string__join_list_2_f_0(Var_4, Var_5);
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
html__render_attributes_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_String Key_3;
      MR_String Value_4;
      MR_Word Attrs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String Space_6;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_12;
      MR_String Var_13;
      MR_String Var_14;

      Key_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      Value_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
      Var_9 = (MR_String) "=\"";
      Var_12 = (MR_String) "\"";
      Var_14 = html__render_attributes_1_f_0(Attrs_5);
      succeeded = (Attrs_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Space_6 = (MR_String) "";
      else
        Space_6 = (MR_String) " ";
      Var_13 = mercury__string__f_43_43_2_f_0(Space_6, Var_14);
      Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
      Var_10 = mercury__string__f_43_43_2_f_0(Value_4, Var_11);
      Var_8 = mercury__string__f_43_43_2_f_0(Var_9, Var_10);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Key_3, Var_8);
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
html____Unify____attribute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html____Unify____attribute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html____Compare____attribute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html____Compare____attribute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html____Unify____html_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html____Unify____html_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html____Compare____html_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html____Compare____html_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html____Unify____is_void_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html____Unify____is_void_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html____Compare____is_void_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html____Compare____is_void_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
html____Unify____tag_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = html____Unify____tag_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
html____Compare____tag_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    html____Compare____tag_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__html__init(void)
{
}

void mercury__html__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&html__html__type_ctor_info_attribute_0);
	MR_register_type_ctor_info(&html__html__type_ctor_info_html_0);
	MR_register_type_ctor_info(&html__html__type_ctor_info_is_void_0);
	MR_register_type_ctor_info(&html__html__type_ctor_info_tag_0);
}

void mercury__html__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__html__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module html.
