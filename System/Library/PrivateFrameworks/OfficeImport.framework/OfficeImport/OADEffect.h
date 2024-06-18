@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (id)initWithType:(int)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setStyleColor:(id)a0;

@end
