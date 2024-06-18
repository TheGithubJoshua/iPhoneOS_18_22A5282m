@class PREditorLookSwitchingComplicationTransition, NSString, PREditorFixedTimeTransition, PREditingLook;
@protocol CSProminentDisplayTransitioning, PREditingStandaloneLabelViewTransitioning;

@interface PREditorLookTransition : NSObject <BSDescriptionStreamable>

@property (readonly, copy, nonatomic) PREditingLook *currentLook;
@property (readonly, copy, nonatomic) PREditingLook *destinationLook;
@property (retain, nonatomic) id<CSProminentDisplayTransitioning> timeStyleTransition;
@property (retain, nonatomic) PREditorFixedTimeTransition *timeScrollingTransition;
@property (retain, nonatomic) id<CSProminentDisplayTransitioning> subtitleStyleTransition;
@property (retain, nonatomic) PREditorLookSwitchingComplicationTransition *complicationTransition;
@property (retain, nonatomic) id<PREditingStandaloneLabelViewTransitioning> lookNameTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateInteractiveTransition:(double)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (id)initWithCurrentLook:(id)a0 destinationLook:(id)a1;
- (BOOL)matchesCurrentLook:(id)a0 destinationLook:(id)a1;

@end
