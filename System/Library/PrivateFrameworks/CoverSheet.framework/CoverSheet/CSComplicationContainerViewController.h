@class UIColor, NSMutableDictionary, NSArray, NSString, CSComplicationManager, BSUIVibrancyConfiguration;
@protocol CSComplicationContainerViewControllerDelegate;

@interface CSComplicationContainerViewController : CSCoverSheetViewControllerBase <CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding>

@property (retain, nonatomic) CSComplicationManager *complicationManager;
@property (retain, nonatomic) NSMutableDictionary *widgetViewControllersByUniqueIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByUniqueIdentifier;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) NSArray *widgetDescriptors;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (weak, nonatomic) id<CSComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL screenOff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interpretsViewAsContent:(id)a0;
- (void)_setTextParametersAndFontForWidgetController:(id)a0;
- (id)initWithComplicationManager:(id)a0 forLandscapeOrientation:(BOOL)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)endCancellingTouches;
- (void)beginCancellingTouches;
- (void)setVisible:(BOOL)a0;
- (id)_widgetTintParameters;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_layoutModularComplications;
- (void)_layoutInlineComplication;
- (id)_inlineComplicationDescriptorIfSolo;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setWidgetViewControllersToPresentationMode:(unsigned long long)a0;
- (void)handleComplicationSelectionGesture:(id)a0;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)widgetHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;

@end
