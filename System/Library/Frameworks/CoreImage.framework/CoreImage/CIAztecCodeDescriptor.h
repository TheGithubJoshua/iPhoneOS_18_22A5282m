@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor

@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) BOOL isCompact;
@property (readonly) long long layerCount;
@property (readonly) long long dataCodewordCount;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithPayload:(id)a0 isCompact:(BOOL)a1 layerCount:(long long)a2 dataCodewordCount:(long long)a3;

- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPayload:(id)a0 isCompact:(BOOL)a1 layerCount:(long long)a2 dataCodewordCount:(long long)a3;

@end
