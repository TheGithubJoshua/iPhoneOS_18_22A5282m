@interface _UIBarAppearanceData : NSObject <NSCopying> {
    BOOL _immutable;
}

+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (id)replicate;
- (BOOL)checkEqualTo:(id)a0;
- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (void)assertMutable:(SEL)a0;
- (id)writableInstance;
- (id)markReadOnly;
- (long long)hashInto:(long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
