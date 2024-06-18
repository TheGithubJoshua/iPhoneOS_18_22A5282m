@interface AMSDaemonConnectionInterface : NSObject

+ (id)interface;
+ (id)_deviceMessengerClientInterface;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)a0;
+ (id)_deviceMessengerServiceInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)a0;
+ (id)_cookieServiceInterface;
+ (id)_securityClientInterface;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)a0;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)a0;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)a0;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)a0;
+ (id)_purchaseServiceInterface;
+ (id)_fraudReportServiceInterface;

@end
