@class NSString, CSLPRFTwoWaySyncSetting;
@protocol CSLPRFTwoWaySyncSettingDelegate;

@interface CSLPRFStingSystemSettings : NSObject <CSLPRFTwoWaySyncSettingDelegate> {
    CSLPRFTwoWaySyncSetting *_stingSystemSettings;
}

@property (weak, nonatomic) id<CSLPRFTwoWaySyncSettingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)write:(id)a0;
- (id)read;
- (void).cxx_destruct;
- (void)twoWaySyncSettingDidUpdate:(id)a0;

@end
