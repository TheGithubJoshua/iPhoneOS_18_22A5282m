@interface PHASERootObject : PHASEObject

+ (id)new;

- (void)setParent:(id)a0;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithEngine:(id)a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1 shapes:(id)a2;

@end
