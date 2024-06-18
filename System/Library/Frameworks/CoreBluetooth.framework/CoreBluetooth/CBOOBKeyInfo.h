@class NSData;

@interface CBOOBKeyInfo : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSData *btAddressData;
@property (copy, nonatomic) NSData *irkData;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
