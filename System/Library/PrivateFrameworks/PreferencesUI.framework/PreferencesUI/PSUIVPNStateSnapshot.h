@class NSString;

@interface PSUIVPNStateSnapshot : NSObject

@property (nonatomic) unsigned long long _vpnSettingsVisibilityStyle;
@property (nonatomic) unsigned long long _vpnConnectivityState;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;

+ (id)na_identity;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVisibilityStyle:(unsigned long long)a0 connectivityState:(unsigned long long)a1;

@end
