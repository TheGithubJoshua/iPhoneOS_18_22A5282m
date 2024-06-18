@interface FATObject : NSObject <NSCoding, NSCopying>

+ (id)structName;
+ (id)structFields;

- (id)initWithCoder:(id)a0;
- (void)write:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)read:(id)a0;

@end
