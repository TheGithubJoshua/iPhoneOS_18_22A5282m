@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short bluetoothProductID;
@property (nonatomic) unsigned int colorCode;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) double timeoutSeconds;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
