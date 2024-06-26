@class TSCEValueGrid;

@interface TSCEDenseGrid : TSCEAbstractGrid <NSCopying> {
    TSCEValueGrid *_valueGrid;
    char _gridKind;
    BOOL _isFlattened;
}

- (struct TSCEGridDimensions { unsigned int x0; unsigned int x1; })dimensions;
- (id)initWithValues:(const void *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)error;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })value;
- (unsigned long long)count;
- (id)initWithValueGrid:(id)a0;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1 isFlattened:(BOOL)a2 dimensions:(const struct TSCEGridDimensions { unsigned int x0; unsigned int x1; } *)a3;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })valueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;
- (BOOL)boolean:(id)a0 argIndex:(int)a1 evaluationContext:(void *)a2;
- (id)date:(id)a0 argIndex:(int)a1 evaluationContext:(void *)a2;
- (char)deepType:(void *)a0;
- (struct TSCEGrid { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; })flattenedGrid:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0;
- (struct TSCEGrid { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; })flattenedGridNoThrow:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a0;
- (char)gridKind;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1;
- (id)initWithValues:(const void *)a0 gridKind:(char)a1 isFlattened:(BOOL)a2;
- (char)nativeType;
- (struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; unsigned short x3; BOOL x4; })number:(id)a0 argIndex:(int)a1 evaluationContext:(void *)a2;
- (id)rawString:(id)a0 argIndex:(int)a1 locale:(id)a2;
- (struct TSCEReferenceValue { void /* function */ **x0; id x1; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x2; struct TSUPreserveFlags { unsigned char x0; } x3; BOOL x4; BOOL x5; })reference:(id)a0 argIndex:(int)a1 evaluationContext:(void *)a2;
- (id)string:(id)a0 argIndex:(int)a1 locale:(id)a2;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })subGridValueAtGridCoord:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 width:(int)a1 height:(int)a2 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a3;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })valueAtIndex:(unsigned long long)a0 accessContext:(struct TSCEGridAccessContext { id x0; struct TSCEFunctionArgSpec *x1; int x2; struct TSCEEvaluationContext *x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned char x9; unsigned char x10; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x11; } *)a1;

@end
