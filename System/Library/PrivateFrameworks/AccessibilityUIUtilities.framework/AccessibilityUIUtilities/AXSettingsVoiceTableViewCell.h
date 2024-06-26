@class NSString, UIImageView, SKUIItemOfferButton, UILabel;
@protocol AXResourceDownloadInformationDelegate;

@interface AXSettingsVoiceTableViewCell : PSTableCell <SKUIItemOfferButtonDelegate> {
    SKUIItemOfferButton *_downloadButton;
    SKUIItemOfferButton *_sampleButton;
    UILabel *_infoLabel;
}

@property (retain, nonatomic) UIImageView *siriImageView;
@property (nonatomic) BOOL showsInfoLabel;
@property (nonatomic) BOOL showsUsageInfo;
@property (nonatomic) BOOL showsPlayButton;
@property (nonatomic) BOOL indentsForVoiceGraphic;
@property (weak, nonatomic) id<AXResourceDownloadInformationDelegate> infoDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)resources;
- (id)accessibilityCustomActions;
- (void)layoutSubviews;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (id)infoLabel;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (BOOL)_axDownload;
- (void)_axPlaySample;
- (void)_axShowCloudImageFor:(id)a0;
- (void)_updateInfoLabelText;
- (id)colorFromHexString:(id)a0 alpha:(float)a1;
- (void)updateInformation;

@end
