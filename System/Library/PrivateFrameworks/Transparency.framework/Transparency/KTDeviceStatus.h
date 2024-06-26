@class KTIDMSDevice, KTLoggableData, NSError;

@interface KTDeviceStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) KTIDMSDevice *idms;
@property (retain) KTLoggableData *loggableData;
@property (retain) NSError *loggableDataError;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
