@class HMHome;

@interface HUSoftwareUpdateSettingsItem : HFItem

@property (retain, nonatomic) HMHome *home;

+ (id)footerTitleForHome:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithHome:(id)a0;
- (BOOL)_shouldShowSoftwareUpdateIcon;
- (id)_subclass_updateWithOptions:(id)a0;

@end
