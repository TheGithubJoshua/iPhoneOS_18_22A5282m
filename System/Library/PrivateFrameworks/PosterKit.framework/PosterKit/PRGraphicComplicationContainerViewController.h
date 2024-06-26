@class PRComplicationWrapperViewController, NSArray, NSString, NSMutableDictionary, BSUIVibrancyConfiguration;
@protocol PRGraphicComplicationContainerViewControllerDelegate, UIDropSession;

@interface PRGraphicComplicationContainerViewController : UIViewController <PRComplicationWrapperViewControllerDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, BSInvalidatable> {
    id<UIDropSession> _activeDropSession;
    NSMutableDictionary *_widgetViewControllersByUniqueIdentifier;
    PRComplicationWrapperViewController *_prewarmedComplicationWrapperViewController;
    unsigned long long _lastProposedDropOperation;
}

@property (retain, nonatomic) NSArray *complicationDescriptors;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (weak, nonatomic) id<PRGraphicComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)_tapGestureRecognized:(id)a0;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)loadView;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)viewDidLoad;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void)invalidate;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)_addDescriptor:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)_addHostViewControllerForDescriptor:(id)a0 animated:(BOOL)a1;
- (id)_complicationLayout;
- (void)_removeDescriptor:(id)a0;
- (void)_updateComplicationLayoutAnimated:(BOOL)a0;
- (void)cancelPrewarmComplicationDescriptor:(id)a0;
- (void)complicationWrapperViewControllerDidTapComplication:(id)a0;
- (void)complicationWrapperViewControllerDidTapRemove:(id)a0;
- (id)initWithComplicationDescriptors:(id)a0;
- (void)prewarmComplicationDescriptor:(id)a0;
- (void)setComplicationDescriptors:(id)a0 animated:(BOOL)a1;
- (void)setFocused:(BOOL)a0 animated:(BOOL)a1;
- (void)setFocused:(BOOL)a0 animationSettings:(id)a1;

@end
