@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPostalAddress:(id)a0;

@end
