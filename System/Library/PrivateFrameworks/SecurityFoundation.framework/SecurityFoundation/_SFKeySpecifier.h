@interface _SFKeySpecifier : NSObject <NSCopying, NSSecureCoding> {
    id _keySpecifierInternal;
}

@property (class, readonly) Class keyClass;
@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
