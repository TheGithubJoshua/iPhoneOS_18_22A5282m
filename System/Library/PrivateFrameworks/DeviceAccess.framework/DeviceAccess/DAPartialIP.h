@class NSData;

@interface DAPartialIP : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *mask;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithAddress:(id)a0 mask:(id)a1;

@end
