@class NSString;

@interface LNLinkEnumerationValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *enumerationIdentifier;

+ (BOOL)supportsSecureCoding;

- (Class)objectClass;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithEnumerationIdentifier:(id)a0;
- (id)typeIdentifierAsString;

@end
