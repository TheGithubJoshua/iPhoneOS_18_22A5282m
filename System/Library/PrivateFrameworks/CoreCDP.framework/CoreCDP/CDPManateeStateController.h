@class NSString, CDPContext;
@protocol CDPDCircleProxy;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {
    CDPContext *_context;
}

@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(id)a0;
- (void)_reportManateeAvailability:(BOOL)a0 value:(unsigned long long)a1;
- (void)_didCreateCircleProxy;
- (void)circleViewStatusChanged;
- (void)checkCircleStatusAndSendManateeAvailabilityNotification;
- (void)_sendNotification:(const char *)a0 withUserInfo:(id)a1;
- (void).cxx_destruct;
- (void)circleStatusChanged;
- (void)securityLevelChanged:(BOOL)a0 forAltDSID:(id)a1;
- (BOOL)isManateeAvailable:(id *)a0;
- (BOOL)_checkSecurityEligibilityForContext:(id)a0 error:(id *)a1;
- (BOOL)_isPrimaryAccount:(id)a0;

@end
