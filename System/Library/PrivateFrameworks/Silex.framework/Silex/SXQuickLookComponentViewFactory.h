@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;

@interface SXQuickLookComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXQuickLookModule> quickLookModule;
@property (readonly, nonatomic) id<SXQuickLookComponentFileProvider> fileProvider;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 fileProvider:(id)a4 quickLookModule:(id)a5;

@end
