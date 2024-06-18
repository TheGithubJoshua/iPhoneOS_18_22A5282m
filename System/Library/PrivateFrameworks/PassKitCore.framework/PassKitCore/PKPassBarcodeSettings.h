@class NSURL;

@interface PKPassBarcodeSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long initialBarcodeFetchCount;
@property (readonly, nonatomic) NSURL *barcodeServiceURL;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end