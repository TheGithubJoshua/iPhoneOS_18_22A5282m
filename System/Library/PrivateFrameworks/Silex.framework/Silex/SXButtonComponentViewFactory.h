@protocol SXActionComponentInteractionHandlerFactory, SXComponentInteractionHandlerManager;

@interface SXButtonComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXActionComponentInteractionHandlerFactory> interactionHandlerFactory;
@property (readonly, nonatomic) id<SXComponentInteractionHandlerManager> interactionHandlerManager;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 interactionHandlerFactory:(id)a4 interactionHandlerManager:(id)a5;

@end
