@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    struct __CTServerConnection { } *_serverConnection;
}

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;

- (id)initDefault;
- (id)getLogger;
- (unsigned long long)dataUsage;
- (void)dealloc;
- (id)cellularUsagePolicy;
- (void)setCellularUsagePolicy:(id)a0;

@end
