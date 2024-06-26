@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 mediaSharingPolicyProvider:(id)a4;

@end
