@class NSString;

@interface LNEntityValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithTypeName:(id)a0;
- (id)metadataClassesForCoding;

@end
