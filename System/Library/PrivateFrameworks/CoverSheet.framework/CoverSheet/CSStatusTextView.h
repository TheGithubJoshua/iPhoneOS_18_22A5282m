@class NSString, NSArray, SBUILegibilityLabel, _UILegibilitySettings;

@interface CSStatusTextView : UIView <SBUILegibility> {
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    unsigned long long _transactionCount;
}

@property (copy, nonatomic) NSString *internalLegalText;
@property (copy, nonatomic) NSString *supervisionText;
@property (copy, nonatomic) NSArray *deviceInformationText;
@property (copy, nonatomic) NSString *provisionalEnrollmentText;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_font;
- (double)_lineHeightOfNonLegalLabels;
- (double)_nonLegalLabelFontLeading;
- (void)_updateTextViews;
- (void)_updateDeviceInformationLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTextViewsIfNecessary;
- (void)_updateLegibilityStrength;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSupervisionLabel;
- (id)_largeFont;
- (double)_nonLegalTextParagraphSpacing;
- (void).cxx_destruct;
- (double)_spacingBetweenNonLegalLabels;
- (void)_updateProvisionalEnrollmentLabel;
- (void)_updateInternalLegalLabel;
- (void)layoutSubviews;
- (void)updateTextsWithBlock:(id /* block */)a0;

@end
