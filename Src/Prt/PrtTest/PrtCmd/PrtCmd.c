#include "PrtCmd.h"

void StaticTypeCreateTest()
{
	PRT_TYPE intType = { PRT_KIND_INT, NULL };
	PrtCmdPrintType(intType);
	printf_s("\n");

	PRT_TYPE twoInts[] = { { PRT_KIND_INT, NULL }, { PRT_KIND_INT, NULL } };
	PRT_TUPTYPE twoIntTup = { 2, twoInts };
	PRT_TYPE tupType = { PRT_KIND_TUPLE, &twoIntTup };

	PrtCmdPrintType(tupType);
	printf_s("\n");

	PRT_TYPE twoPairsOfInts[] = { { PRT_KIND_TUPLE, &twoIntTup }, { PRT_KIND_TUPLE, &twoIntTup } };
	PRT_TUPTYPE twoPairIntTup = { 2, twoPairsOfInts };
	PRT_TYPE tupPairType = { PRT_KIND_TUPLE, &twoPairIntTup };
	
	PrtCmdPrintType(tupPairType);
	printf_s("\n");

	PRT_MAPTYPE mapPairIntTup2Int = { { PRT_KIND_TUPLE, &twoPairIntTup }, { PRT_KIND_INT, NULL } };
	PRT_TYPE mapPairIntTup2IntType = { PRT_KIND_MAP, &mapPairIntTup2Int };

	PrtCmdPrintType(mapPairIntTup2IntType);
	printf_s("\n");

	PRT_SEQTYPE seqPairIntTup2Int = { { PRT_KIND_TUPLE, &twoPairIntTup } };
	PRT_TYPE seqPairIntTup2IntType = { PRT_KIND_SEQ, &seqPairIntTup2Int };

	PrtCmdPrintType(seqPairIntTup2IntType);
	printf_s("\n");
}

void StaticTypeCreateTest2()
{
	PRT_TYPE P_GEND_TYPE_0 =
	{
		PRT_KIND_ANY,
		NULL
	};
	PRT_TYPE P_GEND_TYPE_1 =
	{
		PRT_KIND_BOOL,
		NULL
	};
	PRT_TYPE P_GEND_TYPE_2 =
	{
		PRT_KIND_EVENT,
		NULL
	};
	PRT_TYPE P_GEND_TYPE_3 =
	{
		PRT_KIND_INT,
		NULL
	};
	PRT_TYPE P_GEND_TYPE_4 =
	{
		PRT_KIND_MODEL,
		NULL
	};
	PRT_TYPE P_GEND_TYPE_5 =
	{
		PRT_KIND_MACHINE,
		NULL
	};
	PRT_MAPTYPE P_GEND_TYPE_MAP_6 =
	{

		{
			PRT_KIND_BOOL,
			NULL
		},

		{
			PRT_KIND_BOOL,
			NULL
		}
	};
	PRT_TYPE P_GEND_TYPE_6 =
	{
		PRT_KIND_MAP,
		&P_GEND_TYPE_MAP_6
	};
	PRT_STRING P_GEND_TYPE_NMDTUP_NARR_7[] =
	{
		"z"
	};
	PRT_TYPE P_GEND_TYPE_NMDTUP_TARR_7[] =
	{

		{
			PRT_KIND_EVENT,
			NULL
		}
	};
	PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_7 =
	{
		1,
		P_GEND_TYPE_NMDTUP_NARR_7,
		P_GEND_TYPE_NMDTUP_TARR_7
	};
	PRT_TYPE P_GEND_TYPE_7 =
	{
		PRT_KIND_NMDTUP,
		(PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_7
	};
	PRT_SEQTYPE P_GEND_TYPE_SEQ_8 =
	{

		{
			PRT_KIND_ANY,
			NULL
		}
	};
	PRT_TYPE P_GEND_TYPE_8 =
	{
		PRT_KIND_SEQ,
		(PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_8
	};
	PRT_SEQTYPE P_GEND_TYPE_SEQ_9 =
	{

		{
			PRT_KIND_INT,
			NULL
		}
	};
	PRT_TYPE P_GEND_TYPE_9 =
	{
		PRT_KIND_SEQ,
		(PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_9
	};
	PRT_TYPE P_GEND_TYPE_TUP_ARR_10[] =
	{

		{
			PRT_KIND_MODEL,
			NULL
		}
	};
	PRT_TUPTYPE P_GEND_TYPE_TUP_10 =
	{
		1,
		P_GEND_TYPE_TUP_ARR_10
	};
	PRT_TYPE P_GEND_TYPE_10 =
	{
		PRT_KIND_TUPLE,
		(PRT_MAPTYPE *)&P_GEND_TYPE_TUP_10
	};
	PRT_STRING P_GEND_TYPE_NMDTUP_NARR_11[] =
	{
		"y",
		"z"
	};
	PRT_TYPE P_GEND_TYPE_NMDTUP_TARR_11[] =
	{

		{
			PRT_KIND_MACHINE,
			NULL
		},

		{
			PRT_KIND_EVENT,
			NULL
		}
	};
	PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_11 =
	{
		2,
		P_GEND_TYPE_NMDTUP_NARR_11,
		P_GEND_TYPE_NMDTUP_TARR_11
	};
	PRT_TYPE P_GEND_TYPE_11 =
	{
		PRT_KIND_NMDTUP,
		(PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_11
	};
	PRT_SEQTYPE P_GEND_TYPE_SEQ_12 =
	{

		{
			PRT_KIND_SEQ,
			(PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_8
		}
	};
	PRT_TYPE P_GEND_TYPE_12 =
	{
		PRT_KIND_SEQ,
		(PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_12
	};
	PRT_TYPE P_GEND_TYPE_TUP_ARR_13[] =
	{

		{
			PRT_KIND_BOOL,
			NULL
		},

		{
			PRT_KIND_MODEL,
			NULL
		}
	};
	PRT_TUPTYPE P_GEND_TYPE_TUP_13 =
	{
		2,
		P_GEND_TYPE_TUP_ARR_13
	};
	PRT_TYPE P_GEND_TYPE_13 =
	{
		PRT_KIND_TUPLE,
		(PRT_MAPTYPE *)&P_GEND_TYPE_TUP_13
	};
	PRT_MAPTYPE P_GEND_TYPE_MAP_14 =
	{

		{
			PRT_KIND_SEQ,
			(PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_9
		},

		{
			PRT_KIND_MAP,
			&P_GEND_TYPE_MAP_6
		}
	};
	PRT_TYPE P_GEND_TYPE_14 =
	{
		PRT_KIND_MAP,
		&P_GEND_TYPE_MAP_14
	};
	PRT_STRING P_GEND_TYPE_NMDTUP_NARR_15[] =
	{
		"x",
		"y",
		"z"
	};
	PRT_TYPE P_GEND_TYPE_NMDTUP_TARR_15[] =
	{

		{
			PRT_KIND_MODEL,
			NULL
		},

		{
			PRT_KIND_MACHINE,
			NULL
		},

		{
			PRT_KIND_EVENT,
			NULL
		}
	};
	PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_15 =
	{
		3,
		P_GEND_TYPE_NMDTUP_NARR_15,
		P_GEND_TYPE_NMDTUP_TARR_15
	};
	PRT_TYPE P_GEND_TYPE_15 =
	{
		PRT_KIND_NMDTUP,
		(PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_15
	};
	PRT_TYPE P_GEND_TYPE_TUP_ARR_16[] =
	{

		{
			PRT_KIND_INT,
			NULL
		},

		{
			PRT_KIND_BOOL,
			NULL
		},

		{
			PRT_KIND_MODEL,
			NULL
		}
	};
	PRT_TUPTYPE P_GEND_TYPE_TUP_16 =
	{
		3,
		P_GEND_TYPE_TUP_ARR_16
	};
	PRT_TYPE P_GEND_TYPE_16 =
	{
		PRT_KIND_TUPLE,
		(PRT_MAPTYPE *)&P_GEND_TYPE_TUP_16
	};

	PrtCmdPrintType(P_GEND_TYPE_0);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_1);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_2);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_3);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_4);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_5);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_6);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_7);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_8);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_9);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_10);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_11);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_12);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_13);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_14);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_15);
	printf_s("\n");
	PrtCmdPrintType(P_GEND_TYPE_16);
	printf_s("\n");
}

void TypeCreateTest()
{
	//// Make the integer type
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);

	//// Make the bool type
	PRT_TYPE boolType = PrtMkPrimitiveType(PRT_KIND_BOOL);

	//// Make the sequence of booleans type
	PRT_TYPE seqBoolType = PrtMkSeqType(boolType);

	//// Make the int -> seq of bool type.
	PRT_TYPE int2seqType = PrtMkMapType(intType, seqBoolType);

	//// Clone the type
	PRT_TYPE clone = PrtCloneType(int2seqType);

	//// Print it
	PrtCmdPrintType(int2seqType);

	//// Free the type
	PrtFreeType(int2seqType);

	//// Print the clone
	printf_s("\n");
	PrtCmdPrintType(clone);

	//// Free the clone
	PrtFreeType(clone);

	//// Free the remainder
	PrtFreeType(intType);
	PrtFreeType(boolType);
	PrtFreeType(seqBoolType);
}

void TupleTest()
{
	PRT_TYPE anyType = PrtMkPrimitiveType(PRT_KIND_ANY);
	PRT_TYPE anyPairType = PrtMkTupType(2);
	
	PrtSetFieldType(anyPairType, 0, anyType);
	PrtSetFieldType(anyPairType, 1, anyType);

	PRT_VALUE *oneVal = PrtMkIntValue(1);
	PRT_VALUE *boolVal = PrtMkBoolValue(PRT_TRUE);
	PRT_VALUE *anyPair = PrtMkDefaultValue(anyPairType);
	
	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtTupleSet(anyPair, 0, oneVal);

	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtTupleSet(anyPair, 1, boolVal);

	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtTupleGet(anyPair, 0));
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtTupleGet(anyPair, 1));
	printf_s("\n");
}

void NamedTupleTest()
{
	PRT_TYPE anyType = PrtMkPrimitiveType(PRT_KIND_ANY);
	PRT_TYPE anyPairType = PrtMkNmdTupType(2);

	PrtSetFieldName(anyPairType, 0, "foo");
	PrtSetFieldType(anyPairType, 0, anyType);
	PrtSetFieldName(anyPairType, 1, "bar");
	PrtSetFieldType(anyPairType, 1, anyType);

	PRT_VALUE *oneVal = PrtMkIntValue(1);
	PRT_VALUE *boolVal = PrtMkBoolValue(PRT_TRUE);
	PRT_VALUE *anyPair = PrtMkDefaultValue(anyPairType);

	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtNmdTupleSet(anyPair, "foo", oneVal);

	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtNmdTupleSet(anyPair, "bar", boolVal);

	PrtCmdPrintValueAndType(anyPair);
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtNmdTupleGet(anyPair, "foo"));
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtNmdTupleGet(anyPair, "bar"));
	printf_s("\n");
}

void SeqAppendTest()
{
	PRT_INT32 i;
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);
	PRT_TYPE iseqType = PrtMkSeqType(intType);
	PRT_VALUE *seq = PrtMkDefaultValue(iseqType);
	
	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 0; i <= 10; ++i)
	{
		PrtSeqInsert(seq, seq->valueUnion.seq->size, PrtMkIntValue(i));
	}

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 10; i >= 0; --i)
	{
		PrtSeqInsert(seq, seq->valueUnion.seq->size, PrtMkIntValue(i));
	}

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");
}

void SeqPrependTest()
{
	PRT_INT32 i;
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);
	PRT_TYPE iseqType = PrtMkSeqType(intType);
	PRT_VALUE *seq = (PRT_VALUE *)PrtMkDefaultValue(iseqType);

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 0; i <= 10; ++i)
	{
		PrtSeqInsert(seq, 0, PrtMkIntValue(i));
	}

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 10; i >= 0; --i)
	{
		PrtSeqInsert(seq, 0, PrtMkIntValue(i));
	}

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");
}

void SeqAppendRemoveTest()
{
	PRT_INT32 i;
	PRT_INT32 j;
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);
	PRT_TYPE iseqType = PrtMkSeqType(intType);
	PRT_VALUE *seq = PrtMkDefaultValue(iseqType);

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 1; i < 10; ++i)
	{
		for (j = 0; j < i; ++j)
		{
			PrtSeqInsert(seq, seq->valueUnion.seq->size, PrtMkIntValue(j));
		}

		PrtCmdPrintValueAndType(seq);
		printf_s("\n");

		if (i % 2 == 0)
		{
			for (j = 0; j < i; ++j)
			{
				PrtSeqRemove(seq, 0);
				PrtCmdPrintValueAndType(seq);
				printf_s("\n");
			}
		}
		else 
		{
			for (j = i - 1; j >= 0; --j)
			{
				PrtSeqRemove(seq, j);
				PrtCmdPrintValueAndType(seq);
				printf_s("\n");

				if (j == 0)
				{
					break;
				}
			}
		}
	}
}

void SeqNestedTest()
{
	PRT_INT32 i;
	PRT_TYPE anyType = PrtMkPrimitiveType(PRT_KIND_ANY);
	PRT_TYPE aseqType = PrtMkSeqType(anyType);
	PRT_VALUE *seq = PrtMkDefaultValue(aseqType);

	PrtCmdPrintValueAndType(seq);
	printf_s("\n");

	for (i = 0; i < 10; ++i)
	{
		PrtSeqInsert(seq, seq->valueUnion.seq->size, seq);
		PrtCmdPrintValueAndType(seq);
		printf_s("\n");
	}
}

void TupleTest2()
{
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);
	PRT_TYPE intPairType = PrtMkTupType(2);

	PrtSetFieldType(intPairType, 0, intType);
	PrtSetFieldType(intPairType, 1, intType);

	PRT_VALUE *oneVal = PrtMkIntValue(1);
	PRT_VALUE *boolVal = PrtMkBoolValue(PRT_TRUE);
	PRT_VALUE *intPair = PrtMkDefaultValue(intPairType);

	PrtCmdPrintValueAndType(intPair);
	printf_s("\n");

	PrtTupleSet(intPair, 0, oneVal);

	PrtCmdPrintValueAndType(intPair);
	printf_s("\n");

	PrtTupleSet(intPair, 1, boolVal);

	PrtCmdPrintValueAndType(intPair);
	printf_s("\n");
}

void MapTest1()
{
	PRT_TYPE anyType = PrtMkPrimitiveType(PRT_KIND_ANY);
	PRT_TYPE any2anyType = PrtMkMapType(anyType, anyType);
	PRT_VALUE *a2aMap = PrtMkDefaultValue(any2anyType);

	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PRT_VALUE *falseVal = PrtMkBoolValue(PRT_FALSE);
	PrtMapUpdate(a2aMap, falseVal, falseVal);

	PRT_UINT32 i;
	for (i = 0; i < 5; ++i)
	{
		PrtMapUpdate(a2aMap, PrtMkIntValue(i), PrtMkIntValue(i));
		PrtCmdPrintValueAndType(a2aMap);
		printf_s("\n");
	}

	PrtMapUpdate(a2aMap, falseVal, PrtMkIntValue(10));
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtMapGetKeys(a2aMap));
	printf_s("\n");

	PrtCmdPrintValueAndType(PrtMapGetValues(a2aMap));
	printf_s("\n");
}

void MapTest2()
{
	PRT_TYPE anyType = PrtMkPrimitiveType(PRT_KIND_ANY);
	PRT_TYPE any2anyType = PrtMkMapType(anyType, anyType);
	PRT_VALUE *a2aMap = PrtMkDefaultValue(any2anyType);

	PRT_VALUE *zeroVal = PrtMkIntValue(0);
	PRT_VALUE *falseVal = PrtMkBoolValue(PRT_FALSE);

	PrtMapUpdate(a2aMap, zeroVal, zeroVal);
	PrtMapUpdate(a2aMap, falseVal, falseVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, zeroVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, zeroVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, falseVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapUpdate(a2aMap, falseVal, falseVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapUpdate(a2aMap, zeroVal, zeroVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, zeroVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, zeroVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");

	PrtMapRemove(a2aMap, falseVal);
	PrtCmdPrintValueAndType(a2aMap);
	printf_s("\n");
}

void BinaryBoolFunTest()
{
	PRT_TYPE boolType = PrtMkPrimitiveType(PRT_KIND_BOOL);
	PRT_TYPE intType = PrtMkPrimitiveType(PRT_KIND_INT);
	PRT_TYPE boolTupType = PrtMkTupType(2);
	PrtSetFieldType(boolTupType, 0, boolType);
	PrtSetFieldType(boolTupType, 1, boolType);
	PRT_TYPE binFunType = PrtMkMapType(boolTupType, boolType);
	PRT_TYPE popFunType = PrtMkMapType(binFunType, intType);
	
	printf_s("Bool fun type = ");
	PrtCmdPrintType(binFunType);
	printf_s("\n");

	printf_s("Population fun type = ");
	PrtCmdPrintType(popFunType);
	printf_s("\n");
	
	PRT_UINT32 funImg;
	PRT_UINT32 funRng;
	PRT_VALUE *boolVal;
	PRT_VALUE *popCntVal;
	PRT_VALUE *boolTup;
	PRT_VALUE *popFun = PrtMkDefaultValue(popFunType);
	for (funImg = 0; funImg < 16; ++funImg)
	{
		PRT_VALUE *fun = PrtMkDefaultValue(binFunType);
		for (funRng = 0; funRng < 4; ++funRng)
		{
			//// Set (funRng_1, funRng_0) -> img_0
			boolTup = PrtMkDefaultValue(boolTupType);

			boolVal = PrtMkBoolValue((funRng & 0x00000002) == 0 ? PRT_FALSE : PRT_TRUE);
			PrtTupleSet(boolTup, 0, boolVal);
			PrtFreeValue(boolVal);

			boolVal = PrtMkBoolValue((funRng & 0x00000001) == 0 ? PRT_FALSE : PRT_TRUE);
			PrtTupleSet(boolTup, 1, boolVal);
			PrtFreeValue(boolVal);

			boolVal = PrtMkBoolValue(((funImg >> funRng) & 0x00000001) == 0 ? PRT_FALSE : PRT_TRUE);
			PrtMapUpdate(fun, boolTup, boolVal);
			PrtFreeValue(boolVal);
			PrtFreeValue(boolTup);
		}

		popCntVal = PrtMkIntValue(
			(0x00000001 & funImg) +
			(0x00000001 & (funImg >> 1)) +
			(0x00000001 & (funImg >> 2)) +
			(0x00000001 & (funImg >> 3)));

		PrtCmdPrintValue(fun);
		printf_s("\n");

		PrtMapUpdate(popFun, fun, popCntVal);

		PrtFreeValue(popCntVal);
		PrtFreeValue(fun);
	}
	
	PrtCmdPrintValue(popFun);
	printf_s("\n");
	
	//// Build the population function in reverse.
	//// Get the keys of the population function.
	PRT_UINT32 i;
	PRT_VALUE *popKeys = PrtMapGetKeys(popFun);
	PRT_VALUE *revPopFun = PrtMkDefaultValue(popFunType);
	for (i = 1; i <= 16; ++i)
	{
		popCntVal = PrtMapGet(popFun, popKeys->valueUnion.seq->values[16 - i]);
		PrtMapUpdate(revPopFun, popKeys->valueUnion.seq->values[16 - i], popCntVal);
		PrtFreeValue(popCntVal);
	}
	
	PrtFreeValue(popKeys);
	PrtCmdPrintValue(revPopFun);
	printf_s("\n");

	PrtAssert(PrtGetHashCodeValue(popFun) == PrtGetHashCodeValue(revPopFun), "Equivalent maps should have equivalent hash codes");
	
	PrtFreeValue(revPopFun);
	PrtFreeValue(popFun);
	PrtFreeType(intType);
	PrtFreeType(boolType);
	PrtFreeType(boolTupType);
	PrtFreeType(binFunType);
	PrtFreeType(popFunType);
}

int main(int argc, char *argv[])
{
	PRT_DBG_START_MEM_BALANCED_REGION
	{
		BinaryBoolFunTest();
	}
	PRT_DBG_END_MEM_BALANCED_REGION

	
	TupleTest();
	NamedTupleTest();
	SeqAppendTest();
	SeqPrependTest();
	SeqAppendRemoveTest();
	SeqNestedTest();
	MapTest1();
	MapTest2();
	StaticTypeCreateTest();
	StaticTypeCreateTest2();

	return 0;
}