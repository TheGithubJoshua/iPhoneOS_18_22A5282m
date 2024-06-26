@class NSString, NSMutableDictionary;

@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    NSMutableDictionary *_banned;
    NSMutableDictionary *_stores;
    int _numCerts;
    int _numNonBannedCerts;
    int _numCertOrigins;
    BOOL _captivityReportingDisabled;
    id _resetObserver;
    unsigned int _threshold;
    unsigned int _outrankCertThreshold;
    unsigned int _outrankOriginThreshold;
    double _dampeningCurrentInterval;
    double _dampeningInitialInterval;
    double _dampeningIncrement;
    double _dampeningMaxInterval;
    double _lastCaptivityReportTime;
    double _lastOutrankReportTime;
    double _outrankEventGraceTime;
    double _outrankEventMaxTime;
}

@property (nonatomic) unsigned int maxAge;
@property (nonatomic) unsigned int maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (void)restoreDefaults;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (BOOL)noteSymptom:(id)a0;
- (BOOL)allowNotifyingCaptivityAt:(double)a0;
- (void)_reset:(id)a0;
- (id)init;
- (id)evaluate:(id)a0 forThreshold:(long long)a1;
- (void)storeMaintenance;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowNotifyingOutrankAt:(double)a0;

@end
