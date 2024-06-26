@interface FxVector : NSObject {
    unsigned long long _count;
    union { double vec[4]; double *ptr; } _u;
}

+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
+ (id)vectorWithX:(double)a0 Y:(double)a1 Z:(double)a2;
+ (id)vectorWithString:(id)a0;
+ (id)vectorWithValues:(const double *)a0 count:(unsigned long long)a1;
+ (id)vectorWithX:(double)a0 Y:(double)a1;
+ (id)vectorWithX:(double)a0;
+ (id)vectorWithCIVector:(id)a0;

- (id)stringRepresentation;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithString:(id)a0;
- (double)valueAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (double)X;
- (double)W;
- (double)Y;
- (double)Z;
- (id)initWithX:(double)a0;
- (id)initWithX:(double)a0 Y:(double)a1;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
- (id)ciVector;
- (id)initWithCIVector:(id)a0;

@end
