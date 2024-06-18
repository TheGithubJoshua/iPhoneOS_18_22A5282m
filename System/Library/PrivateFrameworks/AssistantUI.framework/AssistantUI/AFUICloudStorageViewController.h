@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}

- (id)specifiers;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_disableAndDeleteCloudSync;
- (void)confirmDisable;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)handleDisableAndDeleteButtonPress;

@end
