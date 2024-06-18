@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (BOOL)isRPILoggingAllowed;
- (id)init;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (BOOL)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;

@end
