@class NSPUserNotification, PrivacyProxyServiceStatus, NSMutableArray, NSObject;
@protocol NSPServiceStatusManagerDelegate;

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying> {
    PrivacyProxyServiceStatus *_serviceStatus;
    NSMutableArray *_serviceStatusTimeline;
    NSObject<NSPServiceStatusManagerDelegate> *_delegate;
    long long _diskVersion;
    unsigned long long _generation;
    NSPUserNotification *_userNotification;
    NSMutableArray *_networkStatusTimeline;
    unsigned long long _userTier;
    unsigned long long _effectiveTier;
    unsigned long long _lastOutageType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) PrivacyProxyServiceStatus *serviceStatus;
@property (readonly, retain) NSMutableArray *serviceStatusTimeline;

+ (void)removeFromPreferences;

- (id)initWithCoder:(id)a0;
- (void)reportActiveOnWiFiName:(id)a0;
- (void)reportBlockedOnCellularName:(id)a0;
- (void)reportServiceOutageWithType:(unsigned long long)a0 outageReasonStats:(id)a1;
- (void)reportBlockedOnWiFiName:(id)a0;
- (void)reportUnsupportedRegion:(id)a0;
- (void)reportDisabledOnCellularName:(id)a0;
- (void)clearNetworkStatusForType:(int)a0;
- (id)diagnostics;
- (void)publishDailyServiceStatus;
- (void)reportSubscriberUnsupportedRegion:(id)a0;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)reportServiceDisabledShouldReport:(BOOL)a0;
- (BOOL)isNetworkOutage;
- (void)encodeWithCoder:(id)a0;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (BOOL)isServiceOutage;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isServiceActive;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reportFraudAlert;
- (void)reportSystemIncompatibility;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (void)reportBlockedOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportActiveOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportActiveOnCellularName:(id)a0;
- (void)reportServiceActiveShouldReport:(BOOL)a0;
- (void)reportDisabledOnWiFiName:(id)a0;
- (void)publishDailyNetworkStatus;
- (void)reportDisabledOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;

@end
