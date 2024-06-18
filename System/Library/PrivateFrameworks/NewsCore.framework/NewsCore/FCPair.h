@interface FCPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    id mFirst;
    id mSecond;
}

+ (id)pairWithFirst:(id)a0 second:(id)a1;
+ (id)pair;
+ (id)pairWithPair:(id)a0;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)p_SetSecond:(id)a0;
- (id)first;
- (id)init;
- (id)second;
- (id)initWithPair:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)p_SetFirst:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
