@class NSURL, RadiosPreferences;
@protocol AMSUIDAirplaneModeInquiryDelegate;

@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate>

@property (class, readonly) NSURL *settingsURL;

@property (readonly, nonatomic) RadiosPreferences *radiosPreferences;
@property (weak, nonatomic) id<AMSUIDAirplaneModeInquiryDelegate> delegate;
@property (readonly, nonatomic) BOOL isEnabled;

- (id)init;
- (void)airplaneModeChanged;
- (void).cxx_destruct;

@end
