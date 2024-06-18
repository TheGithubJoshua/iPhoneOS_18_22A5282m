@interface OADRelativeRect : NSObject <NSCopying> {
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (float)left;
- (id)init;
- (float)top;
- (float)right;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBottom:(float)a0;
- (void)setTop:(float)a0;
- (float)bottom;
- (void)setLeft:(float)a0;
- (void)setRight:(float)a0;
- (id)initWithLeft:(float)a0 top:(float)a1 right:(float)a2 bottom:(float)a3;

@end
