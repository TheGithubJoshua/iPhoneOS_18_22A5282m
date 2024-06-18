@class NSURL, RadiosPreferences;
@protocol AMSUIAirplaneModeInquiryDelegate;

@interface AMSUIAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;
@property (weak, nonatomic) id<AMSUIAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)init;
- (void)airplaneModeChanged;
- (void).cxx_destruct;

@end
