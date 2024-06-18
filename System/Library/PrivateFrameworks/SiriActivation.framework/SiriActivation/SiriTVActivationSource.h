@class SiriLongPressButtonContext, NSString;

@interface SiriTVActivationSource : SiriLongPressButtonSource

@property (nonatomic) double longPressInterval;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) unsigned long long remoteType;

+ (id)activationSourceForIdentifier:(long long)a0;

- (id)_deviceIdentifier;
- (void)setListening:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPTTEligible:(BOOL)a0;

@end
