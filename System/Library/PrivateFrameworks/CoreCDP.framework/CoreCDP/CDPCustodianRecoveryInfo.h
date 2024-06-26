@class NSData, NSUUID;

@interface CDPCustodianRecoveryInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *wrappedRKC;
@property (readonly, copy, nonatomic) NSData *wrappingKey;
@property (readonly, copy, nonatomic) NSUUID *custodianUUID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWrappedRKC:(id)a0 wrappingKey:(id)a1 custodianUUID:(id)a2;

@end
