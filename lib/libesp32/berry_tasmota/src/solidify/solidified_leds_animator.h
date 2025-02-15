/* Solidification of leds_animator.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Leds_animator_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str_weak(fast_loop),
        }),
        be_str_weak(_X3Clambda_X3E),
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80040000,  //  0003  RET	1	R0
        })
      ),
    }),
    1,                          /* has constants */
    ( &(const bvalue[ 8]) {     /* constants */
    /* K0   */  be_nested_str_weak(strip),
    /* K1   */  be_nested_str_weak(bri),
    /* K2   */  be_nested_str_weak(running),
    /* K3   */  be_nested_str_weak(pixel_count),
    /* K4   */  be_nested_str_weak(animators),
    /* K5   */  be_nested_str_weak(clear),
    /* K6   */  be_nested_str_weak(tasmota),
    /* K7   */  be_nested_str_weak(add_fast_loop),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[19]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x540A0031,  //  0001  LDINT	R2	50
      0x90020202,  //  0002  SETMBR	R0	K1	R2
      0x50080000,  //  0003  LDBOOL	R2	0	0
      0x90020402,  //  0004  SETMBR	R0	K2	R2
      0x8C080303,  //  0005  GETMET	R2	R1	K3
      0x7C080200,  //  0006  CALL	R2	1
      0x90020602,  //  0007  SETMBR	R0	K3	R2
      0x60080012,  //  0008  GETGBL	R2	G18
      0x7C080000,  //  0009  CALL	R2	0
      0x90020802,  //  000A  SETMBR	R0	K4	R2
      0x8C080105,  //  000B  GETMET	R2	R0	K5
      0x7C080200,  //  000C  CALL	R2	1
      0xB80A0C00,  //  000D  GETNGBL	R2	K6
      0x8C080507,  //  000E  GETMET	R2	R2	K7
      0x84100000,  //  000F  CLOSURE	R4	P0
      0x7C080400,  //  0010  CALL	R2	2
      0xA0000000,  //  0011  CLOSE	R0
      0x80000000,  //  0012  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: add_anim
********************************************************************/
be_local_closure(Leds_animator_add_anim,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(animators),
    /* K1   */  be_nested_str_weak(push),
    /* K2   */  be_nested_str_weak(run),
    }),
    be_str_weak(add_anim),
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x5C100200,  //  0002  MOVE	R4	R1
      0x7C080400,  //  0003  CALL	R2	2
      0x8C080302,  //  0004  GETMET	R2	R1	K2
      0x7C080200,  //  0005  CALL	R2	1
      0x80000000,  //  0006  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: stop
********************************************************************/
be_local_closure(Leds_animator_stop,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(running),
    }),
    be_str_weak(stop),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x50040000,  //  0000  LDBOOL	R1	0	0
      0x90020001,  //  0001  SETMBR	R0	K0	R1
      0x80000000,  //  0002  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: fast_loop
********************************************************************/
be_local_closure(Leds_animator_fast_loop,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 7]) {     /* constants */
    /* K0   */  be_nested_str_weak(running),
    /* K1   */  be_const_int(0),
    /* K2   */  be_nested_str_weak(animators),
    /* K3   */  be_nested_str_weak(is_running),
    /* K4   */  be_nested_str_weak(animate),
    /* K5   */  be_const_int(1),
    /* K6   */  be_nested_str_weak(remove),
    }),
    be_str_weak(fast_loop),
    &be_const_str_solidified,
    ( &(const binstruction[25]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x78060015,  //  0001  JMPF	R1	#0018
      0x58040001,  //  0002  LDCONST	R1	K1
      0x6008000C,  //  0003  GETGBL	R2	G12
      0x880C0102,  //  0004  GETMBR	R3	R0	K2
      0x7C080200,  //  0005  CALL	R2	1
      0x14080202,  //  0006  LT	R2	R1	R2
      0x780A000D,  //  0007  JMPF	R2	#0016
      0x88080102,  //  0008  GETMBR	R2	R0	K2
      0x94080401,  //  0009  GETIDX	R2	R2	R1
      0x8C0C0503,  //  000A  GETMET	R3	R2	K3
      0x7C0C0200,  //  000B  CALL	R3	1
      0x780E0003,  //  000C  JMPF	R3	#0011
      0x8C0C0504,  //  000D  GETMET	R3	R2	K4
      0x7C0C0200,  //  000E  CALL	R3	1
      0x00040305,  //  000F  ADD	R1	R1	K5
      0x70020003,  //  0010  JMP		#0015
      0x880C0102,  //  0011  GETMBR	R3	R0	K2
      0x8C0C0706,  //  0012  GETMET	R3	R3	K6
      0x5C140200,  //  0013  MOVE	R5	R1
      0x7C0C0400,  //  0014  CALL	R3	2
      0x7001FFEC,  //  0015  JMP		#0003
      0x8C080104,  //  0016  GETMET	R2	R0	K4
      0x7C080200,  //  0017  CALL	R2	1
      0x80000000,  //  0018  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: animate
********************************************************************/
be_local_closure(Leds_animator_animate,   /* name */
  be_nested_proto(
    1,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    0,                          /* has constants */
    NULL,                       /* no const */
    be_str_weak(animate),
    &be_const_str_solidified,
    ( &(const binstruction[ 1]) {  /* code */
      0x80000000,  //  0000  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: remove
********************************************************************/
be_local_closure(Leds_animator_remove,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(tasmota),
    /* K1   */  be_nested_str_weak(remove_driver),
    }),
    be_str_weak(remove),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0xB8060000,  //  0000  GETNGBL	R1	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x5C0C0000,  //  0002  MOVE	R3	R0
      0x7C040400,  //  0003  CALL	R1	2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_bri
********************************************************************/
be_local_closure(Leds_animator_set_bri,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(bri),
    }),
    be_str_weak(set_bri),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x80000000,  //  0001  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: get_bri
********************************************************************/
be_local_closure(Leds_animator_get_bri,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(bri),
    }),
    be_str_weak(get_bri),
    &be_const_str_solidified,
    ( &(const binstruction[ 2]) {  /* code */
      0x88080100,  //  0000  GETMBR	R2	R0	K0
      0x80040400,  //  0001  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: start
********************************************************************/
be_local_closure(Leds_animator_start,   /* name */
  be_nested_proto(
    2,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 1]) {     /* constants */
    /* K0   */  be_nested_str_weak(running),
    }),
    be_str_weak(start),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x50040200,  //  0000  LDBOOL	R1	1	0
      0x90020001,  //  0001  SETMBR	R0	K0	R1
      0x80000000,  //  0002  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: clear
********************************************************************/
be_local_closure(Leds_animator_clear,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 3]) {     /* constants */
    /* K0   */  be_nested_str_weak(stop),
    /* K1   */  be_nested_str_weak(strip),
    /* K2   */  be_nested_str_weak(clear),
    }),
    be_str_weak(clear),
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x7C040200,  //  0001  CALL	R1	1
      0x88040101,  //  0002  GETMBR	R1	R0	K1
      0x8C040302,  //  0003  GETMET	R1	R1	K2
      0x7C040200,  //  0004  CALL	R1	1
      0x80000000,  //  0005  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Leds_animator
********************************************************************/
be_local_class(Leds_animator,
    5,
    NULL,
    be_nested_map(15,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(init, 12), be_const_closure(Leds_animator_init_closure) },
        { be_const_key_weak(clear, -1), be_const_closure(Leds_animator_clear_closure) },
        { be_const_key_weak(stop, 13), be_const_closure(Leds_animator_stop_closure) },
        { be_const_key_weak(add_anim, 4), be_const_closure(Leds_animator_add_anim_closure) },
        { be_const_key_weak(pixel_count, 6), be_const_var(1) },
        { be_const_key_weak(animate, -1), be_const_closure(Leds_animator_animate_closure) },
        { be_const_key_weak(animators, 7), be_const_var(4) },
        { be_const_key_weak(strip, -1), be_const_var(0) },
        { be_const_key_weak(bri, -1), be_const_var(2) },
        { be_const_key_weak(remove, 8), be_const_closure(Leds_animator_remove_closure) },
        { be_const_key_weak(get_bri, -1), be_const_closure(Leds_animator_get_bri_closure) },
        { be_const_key_weak(start, -1), be_const_closure(Leds_animator_start_closure) },
        { be_const_key_weak(running, -1), be_const_var(3) },
        { be_const_key_weak(fast_loop, -1), be_const_closure(Leds_animator_fast_loop_closure) },
        { be_const_key_weak(set_bri, 1), be_const_closure(Leds_animator_set_bri_closure) },
    })),
    be_str_weak(Leds_animator)
);
/*******************************************************************/

void be_load_Leds_animator_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Leds_animator);
    be_setglobal(vm, "Leds_animator");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
