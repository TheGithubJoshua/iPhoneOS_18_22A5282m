@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithString:(id)a0;

- (id)stringRepresentation;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (struct CGColorSpace { } *)colorSpace;
- (double)blue;
- (unsigned long long)numberOfComponents;
- (id)initWithString:(id)a0;
- (const double *)components;
- (double)alpha;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)ciColor;
- (double)red;
- (void)dealloc;
- (double)green;
- (struct CGColor { } *)_cgColor;
- (void)convertToRGBA:(double *)a0;

@end
