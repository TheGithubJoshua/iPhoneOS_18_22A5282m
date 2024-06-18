@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage

@property (readonly, copy, nonatomic) NSData *payload;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;

@end
