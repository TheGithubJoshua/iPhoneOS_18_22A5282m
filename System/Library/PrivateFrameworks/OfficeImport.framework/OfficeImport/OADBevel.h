@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (id)init;
- (void)setWidth:(float)a0;
- (void)setType:(int)a0;
- (float)height;
- (float)width;
- (unsigned long long)hash;
- (void)setHeight:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;

@end
