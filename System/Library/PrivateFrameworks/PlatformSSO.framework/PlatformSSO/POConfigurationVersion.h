@interface POConfigurationVersion : NSObject {
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (unsigned long long)_state;
- (id)init;
- (void)increaseVersionWithMessage:(id)a0;
- (long long)checkVersion;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (void)dealloc;
- (void)setPlatformSSOUnavailable;

@end
