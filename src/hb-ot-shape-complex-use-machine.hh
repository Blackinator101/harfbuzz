
#line 1 "hb-ot-shape-complex-use-machine.rl"
/*
 * Copyright © 2015  Mozilla Foundation.
 * Copyright © 2015  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Mozilla Author(s): Jonathan Kew
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH

#include "hb.hh"
#include "hb-ot-shape-complex-machine-index.hh"


#line 39 "hb-ot-shape-complex-use-machine.hh"
static const unsigned char _use_syllable_machine_trans_keys[] = {
	12u, 44u, 1u, 15u, 1u, 1u, 12u, 44u, 0u, 47u, 11u, 47u, 11u, 47u, 1u, 15u, 
	1u, 1u, 22u, 47u, 23u, 47u, 24u, 47u, 25u, 47u, 26u, 47u, 45u, 46u, 46u, 46u, 
	24u, 47u, 24u, 47u, 24u, 47u, 23u, 47u, 23u, 47u, 23u, 47u, 22u, 47u, 22u, 47u, 
	22u, 47u, 22u, 47u, 11u, 47u, 1u, 47u, 13u, 13u, 4u, 4u, 11u, 47u, 41u, 42u, 
	42u, 42u, 11u, 47u, 22u, 47u, 23u, 47u, 24u, 47u, 25u, 47u, 26u, 47u, 45u, 46u, 
	46u, 46u, 24u, 47u, 24u, 47u, 24u, 47u, 23u, 47u, 23u, 47u, 23u, 47u, 22u, 47u, 
	22u, 47u, 22u, 47u, 22u, 47u, 11u, 47u, 1u, 47u, 1u, 15u, 4u, 4u, 13u, 13u, 
	12u, 44u, 1u, 47u, 11u, 47u, 41u, 42u, 42u, 42u, 1u, 5u, 0
};

static const char _use_syllable_machine_key_spans[] = {
	33, 15, 1, 33, 48, 37, 37, 15, 
	1, 26, 25, 24, 23, 22, 2, 1, 
	24, 24, 24, 25, 25, 25, 26, 26, 
	26, 26, 37, 47, 1, 1, 37, 2, 
	1, 37, 26, 25, 24, 23, 22, 2, 
	1, 24, 24, 24, 25, 25, 25, 26, 
	26, 26, 26, 37, 47, 15, 1, 1, 
	33, 47, 37, 2, 1, 5
};

static const short _use_syllable_machine_index_offsets[] = {
	0, 34, 50, 52, 86, 135, 173, 211, 
	227, 229, 256, 282, 307, 331, 354, 357, 
	359, 384, 409, 434, 460, 486, 512, 539, 
	566, 593, 620, 658, 706, 708, 710, 748, 
	751, 753, 791, 818, 844, 869, 893, 916, 
	919, 921, 946, 971, 996, 1022, 1048, 1074, 
	1101, 1128, 1155, 1182, 1220, 1268, 1284, 1286, 
	1288, 1322, 1370, 1408, 1411, 1413
};

static const char _use_syllable_machine_indicies[] = {
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	1, 0, 3, 2, 2, 2, 2, 2, 
	2, 2, 2, 2, 2, 2, 2, 2, 
	4, 2, 3, 2, 6, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 6, 5, 7, 8, 
	9, 7, 10, 11, 9, 9, 9, 9, 
	9, 3, 12, 13, 9, 14, 7, 7, 
	15, 16, 9, 9, 17, 18, 19, 20, 
	21, 22, 23, 17, 24, 25, 26, 27, 
	28, 29, 9, 30, 31, 32, 9, 33, 
	34, 35, 36, 37, 38, 39, 9, 41, 
	1, 40, 40, 42, 40, 40, 40, 40, 
	40, 40, 43, 44, 45, 46, 47, 48, 
	49, 43, 50, 8, 51, 52, 53, 54, 
	40, 55, 56, 57, 40, 40, 40, 40, 
	58, 59, 60, 61, 40, 41, 1, 40, 
	40, 42, 40, 40, 40, 40, 40, 40, 
	43, 44, 45, 46, 47, 48, 49, 43, 
	50, 51, 51, 52, 53, 54, 40, 55, 
	56, 57, 40, 40, 40, 40, 58, 59, 
	60, 61, 40, 41, 62, 62, 62, 62, 
	62, 62, 62, 62, 62, 62, 62, 62, 
	62, 63, 62, 41, 62, 43, 44, 45, 
	46, 47, 40, 40, 40, 40, 40, 40, 
	52, 53, 54, 40, 55, 56, 57, 40, 
	40, 40, 40, 44, 59, 60, 61, 40, 
	44, 45, 46, 47, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 55, 56, 
	57, 40, 40, 40, 40, 40, 59, 60, 
	61, 40, 45, 46, 47, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 59, 
	60, 61, 40, 46, 47, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 59, 
	60, 61, 40, 47, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 59, 60, 
	61, 40, 59, 60, 40, 60, 40, 45, 
	46, 47, 40, 40, 40, 40, 40, 40, 
	40, 40, 40, 40, 55, 56, 57, 40, 
	40, 40, 40, 40, 59, 60, 61, 40, 
	45, 46, 47, 40, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 56, 57, 
	40, 40, 40, 40, 40, 59, 60, 61, 
	40, 45, 46, 47, 40, 40, 40, 40, 
	40, 40, 40, 40, 40, 40, 40, 40, 
	57, 40, 40, 40, 40, 40, 59, 60, 
	61, 40, 44, 45, 46, 47, 40, 40, 
	40, 40, 40, 40, 52, 53, 54, 40, 
	55, 56, 57, 40, 40, 40, 40, 44, 
	59, 60, 61, 40, 44, 45, 46, 47, 
	40, 40, 40, 40, 40, 40, 40, 53, 
	54, 40, 55, 56, 57, 40, 40, 40, 
	40, 44, 59, 60, 61, 40, 44, 45, 
	46, 47, 40, 40, 40, 40, 40, 40, 
	40, 40, 54, 40, 55, 56, 57, 40, 
	40, 40, 40, 44, 59, 60, 61, 40, 
	43, 44, 45, 46, 47, 40, 49, 43, 
	40, 40, 40, 52, 53, 54, 40, 55, 
	56, 57, 40, 40, 40, 40, 44, 59, 
	60, 61, 40, 43, 44, 45, 46, 47, 
	40, 64, 43, 40, 40, 40, 52, 53, 
	54, 40, 55, 56, 57, 40, 40, 40, 
	40, 44, 59, 60, 61, 40, 43, 44, 
	45, 46, 47, 40, 40, 43, 40, 40, 
	40, 52, 53, 54, 40, 55, 56, 57, 
	40, 40, 40, 40, 44, 59, 60, 61, 
	40, 43, 44, 45, 46, 47, 48, 49, 
	43, 40, 40, 40, 52, 53, 54, 40, 
	55, 56, 57, 40, 40, 40, 40, 44, 
	59, 60, 61, 40, 41, 1, 40, 40, 
	42, 40, 40, 40, 40, 40, 40, 43, 
	44, 45, 46, 47, 48, 49, 43, 50, 
	40, 51, 52, 53, 54, 40, 55, 56, 
	57, 40, 40, 40, 40, 58, 59, 60, 
	61, 40, 41, 62, 62, 62, 62, 62, 
	62, 62, 62, 62, 62, 62, 62, 62, 
	63, 62, 62, 62, 62, 62, 62, 62, 
	44, 45, 46, 47, 62, 62, 62, 62, 
	62, 62, 62, 62, 62, 62, 55, 56, 
	57, 62, 62, 62, 62, 62, 59, 60, 
	61, 62, 66, 65, 10, 67, 41, 1, 
	40, 40, 42, 40, 40, 40, 40, 40, 
	40, 43, 44, 45, 46, 47, 48, 49, 
	43, 50, 8, 51, 52, 53, 54, 40, 
	55, 56, 57, 40, 16, 68, 40, 58, 
	59, 60, 61, 40, 16, 68, 69, 68, 
	69, 3, 6, 70, 70, 71, 70, 70, 
	70, 70, 70, 70, 17, 18, 19, 20, 
	21, 22, 23, 17, 24, 26, 26, 27, 
	28, 29, 70, 30, 31, 32, 70, 70, 
	70, 70, 36, 37, 38, 39, 70, 17, 
	18, 19, 20, 21, 70, 70, 70, 70, 
	70, 70, 27, 28, 29, 70, 30, 31, 
	32, 70, 70, 70, 70, 18, 37, 38, 
	39, 70, 18, 19, 20, 21, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	30, 31, 32, 70, 70, 70, 70, 70, 
	37, 38, 39, 70, 19, 20, 21, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 37, 38, 39, 70, 20, 21, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 37, 38, 39, 70, 21, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	37, 38, 39, 70, 37, 38, 70, 38, 
	70, 19, 20, 21, 70, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 30, 31, 
	32, 70, 70, 70, 70, 70, 37, 38, 
	39, 70, 19, 20, 21, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	31, 32, 70, 70, 70, 70, 70, 37, 
	38, 39, 70, 19, 20, 21, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 32, 70, 70, 70, 70, 70, 
	37, 38, 39, 70, 18, 19, 20, 21, 
	70, 70, 70, 70, 70, 70, 27, 28, 
	29, 70, 30, 31, 32, 70, 70, 70, 
	70, 18, 37, 38, 39, 70, 18, 19, 
	20, 21, 70, 70, 70, 70, 70, 70, 
	70, 28, 29, 70, 30, 31, 32, 70, 
	70, 70, 70, 18, 37, 38, 39, 70, 
	18, 19, 20, 21, 70, 70, 70, 70, 
	70, 70, 70, 70, 29, 70, 30, 31, 
	32, 70, 70, 70, 70, 18, 37, 38, 
	39, 70, 17, 18, 19, 20, 21, 70, 
	23, 17, 70, 70, 70, 27, 28, 29, 
	70, 30, 31, 32, 70, 70, 70, 70, 
	18, 37, 38, 39, 70, 17, 18, 19, 
	20, 21, 70, 72, 17, 70, 70, 70, 
	27, 28, 29, 70, 30, 31, 32, 70, 
	70, 70, 70, 18, 37, 38, 39, 70, 
	17, 18, 19, 20, 21, 70, 70, 17, 
	70, 70, 70, 27, 28, 29, 70, 30, 
	31, 32, 70, 70, 70, 70, 18, 37, 
	38, 39, 70, 17, 18, 19, 20, 21, 
	22, 23, 17, 70, 70, 70, 27, 28, 
	29, 70, 30, 31, 32, 70, 70, 70, 
	70, 18, 37, 38, 39, 70, 3, 6, 
	70, 70, 71, 70, 70, 70, 70, 70, 
	70, 17, 18, 19, 20, 21, 22, 23, 
	17, 24, 70, 26, 27, 28, 29, 70, 
	30, 31, 32, 70, 70, 70, 70, 36, 
	37, 38, 39, 70, 3, 70, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	70, 70, 4, 70, 70, 70, 70, 70, 
	70, 70, 18, 19, 20, 21, 70, 70, 
	70, 70, 70, 70, 70, 70, 70, 70, 
	30, 31, 32, 70, 70, 70, 70, 70, 
	37, 38, 39, 70, 3, 73, 73, 73, 
	73, 73, 73, 73, 73, 73, 73, 73, 
	73, 73, 4, 73, 74, 70, 13, 70, 
	6, 73, 73, 73, 73, 73, 73, 73, 
	73, 73, 73, 73, 73, 73, 73, 73, 
	73, 73, 73, 73, 73, 73, 73, 73, 
	73, 73, 73, 73, 73, 73, 73, 73, 
	6, 73, 8, 70, 70, 70, 8, 70, 
	70, 70, 70, 70, 3, 6, 13, 70, 
	71, 70, 70, 70, 70, 70, 70, 17, 
	18, 19, 20, 21, 22, 23, 17, 24, 
	25, 26, 27, 28, 29, 70, 30, 31, 
	32, 70, 33, 34, 70, 36, 37, 38, 
	39, 70, 3, 6, 70, 70, 71, 70, 
	70, 70, 70, 70, 70, 17, 18, 19, 
	20, 21, 22, 23, 17, 24, 25, 26, 
	27, 28, 29, 70, 30, 31, 32, 70, 
	70, 70, 70, 36, 37, 38, 39, 70, 
	33, 34, 70, 34, 70, 8, 73, 73, 
	73, 8, 73, 0
};

static const char _use_syllable_machine_trans_targs[] = {
	4, 7, 4, 33, 2, 4, 1, 4, 
	5, 4, 28, 30, 53, 54, 56, 57, 
	31, 34, 35, 36, 37, 38, 47, 48, 
	50, 58, 51, 44, 45, 46, 41, 42, 
	43, 59, 60, 61, 52, 39, 40, 4, 
	4, 6, 0, 9, 10, 11, 12, 13, 
	22, 23, 25, 26, 19, 20, 21, 16, 
	17, 18, 27, 14, 15, 4, 4, 8, 
	24, 4, 29, 4, 32, 4, 4, 3, 
	49, 4, 55
};

static const char _use_syllable_machine_trans_actions[] = {
	1, 0, 2, 3, 0, 4, 0, 7, 
	8, 9, 0, 8, 10, 0, 10, 3, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 3, 3, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 3, 0, 0, 11, 
	12, 8, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 8, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 13, 14, 0, 
	0, 15, 0, 16, 0, 17, 18, 0, 
	0, 19, 0
};

static const char _use_syllable_machine_to_state_actions[] = {
	0, 0, 0, 0, 5, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0
};

static const char _use_syllable_machine_from_state_actions[] = {
	0, 0, 0, 0, 6, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0
};

static const short _use_syllable_machine_eof_trans[] = {
	1, 3, 3, 6, 0, 41, 41, 63, 
	63, 41, 41, 41, 41, 41, 41, 41, 
	41, 41, 41, 41, 41, 41, 41, 41, 
	41, 41, 41, 63, 66, 68, 41, 70, 
	70, 71, 71, 71, 71, 71, 71, 71, 
	71, 71, 71, 71, 71, 71, 71, 71, 
	71, 71, 71, 71, 71, 74, 71, 71, 
	74, 71, 71, 71, 71, 74
};

static const int use_syllable_machine_start = 4;
static const int use_syllable_machine_first_final = 4;
static const int use_syllable_machine_error = -1;

static const int use_syllable_machine_en_main = 4;


#line 39 "hb-ot-shape-complex-use-machine.rl"



#line 149 "hb-ot-shape-complex-use-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", (*ts).second.first, (*te).second.first, #syllable_type); \
    for (unsigned i = (*ts).second.first; i < (*te).second.first; ++i) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    syllable_serial++; \
    if (unlikely (syllable_serial == 16)) syllable_serial = 1; \
  } HB_STMT_END

static void
find_syllables (hb_buffer_t *buffer)
{
  hb_glyph_info_t *info = buffer->info;
  auto p =
    + hb_iter (info, buffer->len)
    | hb_enumerate
    | hb_filter ([&] (hb_glyph_info_t &i)
		 { return !((i.use_category() == USE_O || i.use_category() == USE_Rsv) && _hb_glyph_info_is_default_ignorable (&i)); },
		 hb_second)
    | hb_filter ([&] (const hb_pair_t<unsigned, hb_glyph_info_t &> p)
                {
		  if (p.second.use_category() == USE_ZWNJ)
		    for (unsigned i = p.first + 1; i < buffer->len; ++i)
		      if (!((info[i].use_category() == USE_O || info[i].use_category() == USE_Rsv)
			    && _hb_glyph_info_is_default_ignorable (&info[i])))
			return !(_hb_glyph_info_is_unicode_mark (&info[i]));
		  return true;
		})
    | hb_enumerate
    | machine_index;
  auto pe = p + p.len ();
  auto eof = +pe;
  auto ts = +p;
  auto te = +p;
  unsigned int act;
  int cs;
  
#line 364 "hb-ot-shape-complex-use-machine.hh"
	{
	cs = use_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 190 "hb-ot-shape-complex-use-machine.rl"


  unsigned int syllable_serial = 1;
  
#line 377 "hb-ot-shape-complex-use-machine.hh"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const char *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _use_syllable_machine_from_state_actions[cs] ) {
	case 6:
#line 1 "NONE"
	{ts = p;}
	break;
#line 391 "hb-ot-shape-complex-use-machine.hh"
	}

	_keys = _use_syllable_machine_trans_keys + (cs<<1);
	_inds = _use_syllable_machine_indicies + _use_syllable_machine_index_offsets[cs];

	_slen = _use_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( (*p).second.second.use_category()) &&
		( (*p).second.second.use_category()) <= _keys[1] ?
		( (*p).second.second.use_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _use_syllable_machine_trans_targs[_trans];

	if ( _use_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _use_syllable_machine_trans_actions[_trans] ) {
	case 8:
#line 1 "NONE"
	{te = p+1;}
	break;
	case 7:
#line 138 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (independent_cluster); }}
	break;
	case 13:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (standard_cluster); }}
	break;
	case 11:
#line 144 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (broken_cluster); }}
	break;
	case 9:
#line 145 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (non_cluster); }}
	break;
	case 14:
#line 139 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (virama_terminated_cluster); }}
	break;
	case 12:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (standard_cluster); }}
	break;
	case 16:
#line 141 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (number_joiner_terminated_cluster); }}
	break;
	case 15:
#line 142 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (numeral_cluster); }}
	break;
	case 17:
#line 143 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (symbol_cluster); }}
	break;
	case 18:
#line 144 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (broken_cluster); }}
	break;
	case 19:
#line 145 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (non_cluster); }}
	break;
	case 1:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{{p = ((te))-1;}{ found_syllable (standard_cluster); }}
	break;
	case 4:
#line 144 "hb-ot-shape-complex-use-machine.rl"
	{{p = ((te))-1;}{ found_syllable (broken_cluster); }}
	break;
	case 2:
#line 1 "NONE"
	{	switch( act ) {
	case 7:
	{{p = ((te))-1;} found_syllable (broken_cluster); }
	break;
	case 8:
	{{p = ((te))-1;} found_syllable (non_cluster); }
	break;
	}
	}
	break;
	case 3:
#line 1 "NONE"
	{te = p+1;}
#line 144 "hb-ot-shape-complex-use-machine.rl"
	{act = 7;}
	break;
	case 10:
#line 1 "NONE"
	{te = p+1;}
#line 145 "hb-ot-shape-complex-use-machine.rl"
	{act = 8;}
	break;
#line 489 "hb-ot-shape-complex-use-machine.hh"
	}

_again:
	switch ( _use_syllable_machine_to_state_actions[cs] ) {
	case 5:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 498 "hb-ot-shape-complex-use-machine.hh"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _use_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _use_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 195 "hb-ot-shape-complex-use-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH */
