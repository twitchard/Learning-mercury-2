/*
** Automatically generated from `cgi.m'
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


// :- module cgi.
// :- implementation.

/*
INIT mercury__cgi__init
ENDINIT
*/

#include "cgi.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo cgi__cgi__field_types_request_0_0[3];

static const MR_ConstString cgi__cgi__field_names_request_0_0[3];

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_request_0_0;

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_request_0_0[1];

static const MR_DuPtagLayout cgi__cgi__du_ptag_ordered_request_0[1];

static const MR_DuFunctorDescPtr cgi__cgi__du_name_ordered_request_0[1];

static const MR_Integer cgi__cgi__functor_number_map_request_0[1];

static const MR_PseudoTypeInfo cgi__cgi__field_types_response_0_0[1];

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_response_0_0;

static const MR_PseudoTypeInfo cgi__cgi__field_types_response_0_1[1];

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_response_0_1;

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_response_0_0[1];

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_response_0_1[1];

static const MR_DuPtagLayout cgi__cgi__du_ptag_ordered_response_0[2];

static const MR_DuFunctorDescPtr cgi__cgi__du_name_ordered_response_0[2];

static const MR_Integer cgi__cgi__functor_number_map_response_0[2];

static void MR_CALL 
cgi__log_err_3_p_0(
  MR_String Message_4);

static MR_String MR_CALL 
cgi__get_body_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
cgi____Unify____request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
cgi____Compare____request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
cgi____Unify____response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
cgi____Compare____response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box cgi_scalar_common_1[1][2];

static /* final */ const MR_Box cgi_scalar_common_2[2][1];




static /* final */ const MR_Box cgi_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box cgi_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Unable to construct a request from environment variables"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo cgi__cgi__field_types_request_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString cgi__cgi__field_names_request_0_0[3] = {
  (MR_String) "verb",
  (MR_String) "url",
  (MR_String) "body"
};

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_request_0_0 = {
  (MR_String) "request",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  cgi__cgi__field_types_request_0_0,
  cgi__cgi__field_names_request_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_request_0_0[1] = {
  &cgi__cgi__du_functor_desc_request_0_0
};

static const MR_DuPtagLayout cgi__cgi__du_ptag_ordered_request_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    cgi__cgi__du_stag_ordered_request_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr cgi__cgi__du_name_ordered_request_0[1] = {
  &cgi__cgi__du_functor_desc_request_0_0
};

static const MR_Integer cgi__cgi__functor_number_map_request_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct cgi__cgi__type_ctor_info_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (cgi____Unify____request_0_0_10001)),
  ((MR_Box) (cgi____Compare____request_0_0_10001)),
  (MR_String) "cgi",
  (MR_String) "request",
  {     cgi__cgi__du_name_ordered_request_0 },
  {     cgi__cgi__du_ptag_ordered_request_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  cgi__cgi__functor_number_map_request_0,

};

static const MR_PseudoTypeInfo cgi__cgi__field_types_response_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_response_0_0 = {
  (MR_String) "success",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  cgi__cgi__field_types_response_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo cgi__cgi__field_types_response_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc cgi__cgi__du_functor_desc_response_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  cgi__cgi__field_types_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_response_0_0[1] = {
  &cgi__cgi__du_functor_desc_response_0_0
};

static const MR_DuFunctorDescPtr cgi__cgi__du_stag_ordered_response_0_1[1] = {
  &cgi__cgi__du_functor_desc_response_0_1
};

static const MR_DuPtagLayout cgi__cgi__du_ptag_ordered_response_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    cgi__cgi__du_stag_ordered_response_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    cgi__cgi__du_stag_ordered_response_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr cgi__cgi__du_name_ordered_response_0[2] = {
  &cgi__cgi__du_functor_desc_response_0_1,
  &cgi__cgi__du_functor_desc_response_0_0
};

static const MR_Integer cgi__cgi__functor_number_map_response_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct cgi__cgi__type_ctor_info_response_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (cgi____Unify____response_0_0_10001)),
  ((MR_Box) (cgi____Compare____response_0_0_10001)),
  (MR_String) "cgi",
  (MR_String) "response",
  {     cgi__cgi__du_name_ordered_response_0 },
  {     cgi__cgi__du_ptag_ordered_response_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  cgi__cgi__functor_number_map_response_0,

};

void MR_CALL 
cgi____Compare____response_0_0(
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
      MR_String Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
cgi____Unify____response_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
cgi____Compare____request_0_0(
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
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
cgi____Unify____request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
cgi__process_3_p_0(
  MR_Word Handler_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_53_53;
    MR_Word MaybeRequestMethod_6;
    MR_Word MaybeRequestUri_7;
    MR_Word MaybeContentLength_8;
    MR_Word RequestBodyResult_11;
    MR_String Var_19 = (MR_String) "REQUEST_METHOD";
    MR_String Var_21;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_27;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_31;
    MR_String Var_33;
    MR_String Var_35;
    MR_String Var_36;
    MR_Word StdErr_58;
    MR_String Var_60;
    MR_String Var_62;
    MR_Word StdErr_67;
    MR_String Var_69;
    MR_String Var_71;
    MR_Word StdErr_76;
    MR_String Var_78;
    MR_String Var_80;
    MR_String ContentLengthString_9;
    MR_Integer ContentLength_10;
    MR_Integer Var_37;
    MR_String RequestMethod_12;
    MR_String RequestUri_13;
    MR_String RequestBody_14;

    mercury__io__get_environment_var_4_p_0(Var_19, &MaybeRequestMethod_6);
    Var_23 = (MR_String) "REQUEST_METHOD: ";
    TypeInfo_53_53 = (MR_Word) (&cgi_scalar_common_1[0]);
    Var_24 = mercury__string__string_1_f_0(TypeInfo_53_53, ((MR_Box) (MaybeRequestMethod_6)));
    Var_21 = mercury__string__f_43_43_2_f_0(Var_23, Var_24);
    mercury__io__stderr_stream_3_p_0(&StdErr_58);
    Var_62 = (MR_String) "\n";
    Var_60 = mercury__string__f_43_43_2_f_0(Var_21, Var_62);
    mercury__io__write_string_4_p_0(StdErr_58, Var_60);
    Var_25 = (MR_String) "REQUEST_URI";
    mercury__io__get_environment_var_4_p_0(Var_25, &MaybeRequestUri_7);
    Var_29 = (MR_String) "REQUEST_URI: ";
    Var_30 = mercury__string__string_1_f_0(TypeInfo_53_53, ((MR_Box) (MaybeRequestUri_7)));
    Var_27 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
    mercury__io__stderr_stream_3_p_0(&StdErr_67);
    Var_71 = (MR_String) "\n";
    Var_69 = mercury__string__f_43_43_2_f_0(Var_27, Var_71);
    mercury__io__write_string_4_p_0(StdErr_67, Var_69);
    Var_31 = (MR_String) "CONTENT_LENGTH";
    mercury__io__get_environment_var_4_p_0(Var_31, &MaybeContentLength_8);
    Var_35 = (MR_String) "CONTENT_LENGTH: ";
    Var_36 = mercury__string__string_1_f_0(TypeInfo_53_53, ((MR_Box) (MaybeContentLength_8)));
    Var_33 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
    mercury__io__stderr_stream_3_p_0(&StdErr_76);
    Var_80 = (MR_String) "\n";
    Var_78 = mercury__string__f_43_43_2_f_0(Var_33, Var_80);
    mercury__io__write_string_4_p_0(StdErr_76, Var_78);
    succeeded = (MaybeContentLength_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ContentLengthString_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeContentLength_8, (MR_Integer) 0))));
      succeeded = mercury__string__to_int_2_p_0(ContentLengthString_9, &ContentLength_10);
      if (succeeded)
      {
        Var_37 = (MR_Integer) 0;
        succeeded = (ContentLength_10 > Var_37);
      }
    }
    if (succeeded)
      mercury__io__read_file_as_string_3_p_0(&RequestBodyResult_11);
    else
      RequestBodyResult_11 = (MR_Word) (&cgi_scalar_common_2[0]);
    succeeded = (MaybeRequestMethod_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      RequestMethod_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeRequestMethod_6, (MR_Integer) 0))));
      succeeded = (MaybeRequestUri_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        RequestUri_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeRequestUri_7, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) RequestBodyResult_11)) == (MR_Integer) 0);
        if (succeeded)
          RequestBody_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), RequestBodyResult_11, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word Req_15;
      MR_Word Out_16;
      MR_String Var_41;
      MR_String Var_43;
      MR_String Var_44;
      MR_String Var_45;
      MR_Word StdErr_85;
      MR_String Var_87;
      MR_String Var_89;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
      MR_Box conv2_Out_16;
      MR_Box conv1_STATE_VARIABLE_IO_40_40;

      {
        Req_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Req_15, 0) = ((MR_Box) (RequestMethod_12));
        MR_hl_field(MR_mktag(0), Req_15, 1) = ((MR_Box) (RequestUri_13));
        MR_hl_field(MR_mktag(0), Req_15, 2) = ((MR_Box) (RequestBody_14));
      }
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Handler_4, (MR_Integer) 1))));
      func_0(((MR_Box) (Handler_4)), ((MR_Box) (Req_15)), &conv2_Out_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_40_40);
      Out_16 = ((MR_Word) (conv2_Out_16));
      Var_43 = (MR_String) "WRITING SUCCESS RESPONSE: ";
      Var_44 = cgi__get_body_1_f_0(Out_16);
      Var_41 = mercury__string__f_43_43_2_f_0(Var_43, Var_44);
      mercury__io__stderr_stream_3_p_0(&StdErr_85);
      Var_89 = (MR_String) "\n";
      Var_87 = mercury__string__f_43_43_2_f_0(Var_41, Var_89);
      mercury__io__write_string_4_p_0(StdErr_85, Var_87);
      Var_45 = cgi__get_body_1_f_0(Out_16);
      mercury__io__write_string_3_p_0(Var_45);
    }
    else
    {
      MR_String Var_48 = (MR_String) "WRITING ERROR RESPONSE";
      MR_String Var_50;
      MR_Word Out_52 = (MR_Word) (MR_mkword(MR_mktag(1), &cgi_scalar_common_2[1]));

      cgi__log_err_3_p_0(Var_48);
      Var_50 = cgi__get_body_1_f_0(Out_52);
      mercury__io__write_string_3_p_0(Var_50);
    }
  }
}

static void MR_CALL 
cgi__log_err_3_p_0(
  MR_String Message_4)
{
  {
    MR_Word StdErr_6;
    MR_String Var_10;
    MR_String Var_12;

    mercury__io__stderr_stream_3_p_0(&StdErr_6);
    Var_12 = (MR_String) "\n";
    Var_10 = mercury__string__f_43_43_2_f_0(Message_4, Var_12);
    mercury__io__write_string_4_p_0(StdErr_6, Var_10);
  }
}

static MR_String MR_CALL 
cgi__get_body_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String X_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_6 = (MR_String) "Status: 500 Internal Server Error\nContent-Type: text/html\n\n";

      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_6, X_5);
    }
    else
    {
      MR_String X_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Var_4 = (MR_String) "Content-Type: text/html\n\n";

      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_4, X_3);
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
cgi__error_resp_1_f_0(
  MR_String X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
cgi__success_resp_1_f_0(
  MR_String X_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (X_3));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
cgi____Unify____request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = cgi____Unify____request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
cgi____Compare____request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    cgi____Compare____request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
cgi____Unify____response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = cgi____Unify____response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
cgi____Compare____response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    cgi____Compare____response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__cgi__init(void)
{
}

void mercury__cgi__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&cgi__cgi__type_ctor_info_request_0);
	MR_register_type_ctor_info(&cgi__cgi__type_ctor_info_response_0);
}

void mercury__cgi__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__cgi__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module cgi.
