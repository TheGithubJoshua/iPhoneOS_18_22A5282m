@class NSString;

@interface AADeviceProvisioningSession : NSObject {
    NSString *_dsid;
    unsigned long long _dsidNumber;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorageRef;
}

- (id)initWithAccount:(id)a0;
- (id)init;
- (void)addProvisioningInfoToAARequest:(id)a0 withFallback:(BOOL)a1;
- (id)initWithDSID:(id)a0;
- (int)eraseProvisioning;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (int)synchronizeProvisioningWithData:(id)a0;
- (void).cxx_destruct;
- (int)provisionDeviceWithData:(id)a0;
- (void)addProvisioningInfoToAARequest:(id)a0;
- (void)addProvisioningInfoToURLRequest:(id)a0 sendEmptyValues:(BOOL)a1;
- (id)deviceProvisioningInfo;

@end
