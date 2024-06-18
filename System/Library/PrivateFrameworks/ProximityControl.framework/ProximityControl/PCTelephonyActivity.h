@class UIImage;

@interface PCTelephonyActivity : NSUserActivity <PCActivity> {
    UIImage *_callImage;
    BOOL _hostedOnCurrentDeviceIsValid;
    BOOL _hostedOnCurrentDevice;
}

- (id)image;
- (id)contactIdentifier;
- (id)displayName;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)activityString;
- (id)title;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (id)callUUID;
- (id)dateConnected;
- (BOOL)hostedOnCurrentDevice;
- (unsigned long long)pcactivityType;
- (id)callImage;
- (BOOL)hostedOnCurrentDeviceIsValid;
- (id)initFromKnownCall:(id)a0;
- (id)initFromSensitiveCall:(id)a0;

@end
