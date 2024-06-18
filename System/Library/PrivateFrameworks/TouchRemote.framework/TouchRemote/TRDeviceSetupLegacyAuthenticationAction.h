@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction

@property (retain, nonatomic) NSString *deviceGUID;
@property (retain, nonatomic) NSString *userAgent;

- (id)deviceName;
- (void).cxx_destruct;
- (id)propertyListRepresentation;

@end
