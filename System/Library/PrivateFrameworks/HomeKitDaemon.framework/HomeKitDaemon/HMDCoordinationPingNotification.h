@class NSUUID;

@interface HMDCoordinationPingNotification : COMeshNotification

@property (readonly) NSUUID *primaryResidentUUID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrimaryResidentUUID:(id)a0;

@end
