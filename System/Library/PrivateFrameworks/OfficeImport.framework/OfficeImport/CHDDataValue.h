@interface CHDDataValue : NSObject {
    struct CHDDataPoint { unsigned long long index; struct EDValue { int type; union { BOOL boolean; double number; char *string; unsigned long long stringIndex; int error; } ; } value; unsigned long long contentFormatId; } mDataPoint;
}

+ (id)dataValue;
+ (id)dataValueWithIndex:(long long)a0 value:(struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)a1;

- (id)init;
- (void)setIndex:(long long)a0;
- (long long)index;
- (void)setValue:(struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)value;
- (struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)dataPoint;
- (void)setDataPoint:(struct CHDDataPoint { unsigned long long x0; struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } x1; unsigned long long x2; } *)a0;
- (unsigned long long)contentFormatId;
- (id)contentFormatWithResources:(id)a0;
- (id)initWithIndex:(long long)a0 value:(struct EDValue { int x0; union { BOOL x0; double x1; char *x2; unsigned long long x3; int x4; } x1; } *)a1;
- (void)setContentFormatId:(unsigned long long)a0;
- (void)setContentFormatWithResources:(id)a0 resources:(id)a1;

@end
