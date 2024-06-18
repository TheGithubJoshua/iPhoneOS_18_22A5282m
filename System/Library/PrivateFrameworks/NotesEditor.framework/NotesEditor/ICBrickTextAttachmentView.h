@class ICAttachmentBrickView;

@interface ICBrickTextAttachmentView : ICAttachmentView

@property (retain, nonatomic) ICAttachmentBrickView *attachmentBrickView;

- (void)setHighlightColor:(id)a0;
- (void)setupConstraints;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)dealloc;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (void)updateCornerRadius;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (id)quickLookTransitionView;
- (void)setHighlightPatternRegex:(id)a0;
- (void)setInsideSystemPaper:(BOOL)a0;
- (void)requestAttachmentContentUpdate;
- (void)sharedInit:(BOOL)a0;

@end
