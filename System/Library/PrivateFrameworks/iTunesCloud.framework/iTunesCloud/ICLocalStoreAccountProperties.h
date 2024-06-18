@class NSDictionary, NSString;

@interface ICLocalStoreAccountProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_storefrontIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;

- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyLocalStoreAccountPropertiesToOtherInstance:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithPropertyListRepresentation:(id)a0;

@end
