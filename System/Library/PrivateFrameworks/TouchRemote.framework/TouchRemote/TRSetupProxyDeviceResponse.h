@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage

@property (retain, nonatomic) AKDevice *proxyDevice;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
