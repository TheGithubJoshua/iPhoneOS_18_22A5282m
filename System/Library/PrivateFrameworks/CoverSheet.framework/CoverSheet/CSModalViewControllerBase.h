@class NSString;

@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)view;
- (void)aggregateBehavior:(id)a0;
- (long long)presentationStyle;
- (long long)presentationType;
- (void)viewDidLoad;
- (long long)presentationPriority;
- (BOOL)isPortrait;
- (void)aggregateAppearance:(id)a0;
- (id)viewIfLoaded;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
