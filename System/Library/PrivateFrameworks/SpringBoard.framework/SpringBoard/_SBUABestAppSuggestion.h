@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {
    UABestAppSuggestion *_appSuggestion;
}

- (id)lastUpdateTime;
- (id)activityType;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)uniqueIdentifier;
- (id)bundleIdentifier;
- (BOOL)isHandoff;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)originatingDeviceIdentifier;
- (BOOL)isLocationBasedSuggestion;
- (BOOL)isCallContinuitySuggestion;
- (BOOL)isLocallyGeneratedSuggestion;
- (BOOL)isNotificationSuggestion;
- (BOOL)isOpenURLSuggestion;

@end
