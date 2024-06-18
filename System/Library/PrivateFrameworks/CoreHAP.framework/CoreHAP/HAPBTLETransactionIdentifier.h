@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue;

+ (unsigned char)generateRequestIdentifier;
+ (id)randomTransactionIdentifier;

- (id)shortDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithUnsignedCharValue:(unsigned char)a0;

@end
