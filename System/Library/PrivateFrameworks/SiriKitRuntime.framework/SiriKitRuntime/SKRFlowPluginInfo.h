@class NSString;

@interface SKRFlowPluginInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsOnDeviceNL;
    void /* unknown type, empty encoding */ isPersonalRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;

@end
