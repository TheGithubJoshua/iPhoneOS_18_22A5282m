@class NSString, NSData;

@interface ENSignature : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *appleBundleID;
@property (copy, nonatomic) NSString *androidBundleID;
@property (nonatomic) unsigned int batchNumber;
@property (nonatomic) unsigned int batchCount;
@property (copy, nonatomic) NSString *keyID;
@property (copy, nonatomic) NSString *keyVersion;
@property (copy, nonatomic) NSString *signatureAlgorithm;
@property (copy, nonatomic) NSData *signatureData;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBytes:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_encodeInfoWithProtobufCoder:(id)a0 error:(id *)a1;
- (BOOL)_readSignatureInfoPtr:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)encodeWithProtobufCoder:(id)a0 error:(id *)a1;

@end
