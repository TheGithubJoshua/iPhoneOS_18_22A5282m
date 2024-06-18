@class NSString, SBAssistantController;

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver>

@property (readonly, nonatomic) SBAssistantController *assistantController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assistantDidDisappear:(id)a0 windowScene:(id)a1;
- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (long long)state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void)assistantWillDisappear:(id)a0 windowScene:(id)a1;
- (id)initWithAssistantController:(id)a0 scene:(id)a1;

@end
