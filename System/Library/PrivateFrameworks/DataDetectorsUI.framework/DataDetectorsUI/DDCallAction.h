@interface DDCallAction : DDTelephoneNumberAction

+ (BOOL)isAvailable;
+ (id)callProvider;

- (id)subtitle;
- (BOOL)isEmail;
- (double)_systemFontSize;
- (id)localizedName;
- (id)notificationURL;
- (int)interactionType;
- (id)notificationTitle;
- (long long)TTYType;
- (BOOL)_titleFitsInActionSheet:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)dialRequest;
- (id)dialRequestWithProvider:(id)a0;
- (id)localizedCallStringForName:(id)a0 usingCallRelay:(BOOL)a1;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitleTargetString;
- (void)performFromView:(id)a0;

@end
