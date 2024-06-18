@interface KVPriorInfo : NSObject <NSSecureCoding, NSCopying> {
    unsigned int _ordinality;
    float _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (float)score;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)ordinality;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;
- (BOOL)isEqualToPriorInfo:(id)a0;

@end
