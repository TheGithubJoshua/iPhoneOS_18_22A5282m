@interface HearingAppPlugin.NoiseAvailability : NSObject {
    void /* unknown type, empty encoding */ _featureStatus;
    void /* unknown type, empty encoding */ _promotionVisibility;
    void /* unknown type, empty encoding */ promoteIfOnboarded;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pairedDevicesDidUpdate;

@end
