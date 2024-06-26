@protocol SXLayoutInvalidator;

@interface SXDebugComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXLayoutInvalidator> invalidator;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 invalidator:(id)a4;

@end
