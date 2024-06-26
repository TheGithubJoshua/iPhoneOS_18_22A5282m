@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}

- (id)metricName;
- (void)lockStateDidChange:(BOOL)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)displayStateDidChange:(BOOL)a0;
- (id)initWithInterfaceName:(id)a0;

@end
