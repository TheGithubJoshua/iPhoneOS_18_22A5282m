@interface CIConstColor : CIColor

+ (id)alloc;

- (struct CGColor { } *)cgColor;
- (struct CGColorSpace { } *)colorSpace;
- (double)blue;
- (unsigned long long)numberOfComponents;
- (const double *)components;
- (oneway void)release;
- (double)alpha;
- (unsigned long long)hash;
- (id)autorelease;
- (struct CGColor { } *)rgbColor;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (double)red;
- (id)retain;
- (void)dealloc;
- (double)green;

@end
