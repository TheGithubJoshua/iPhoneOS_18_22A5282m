@protocol SXAnalyticsReportingProvider, SXResourceDataSourceProvider, SXAppStateMonitor, SXHost;

@interface SXAudioComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (readonly, nonatomic) id<SXHost> host;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 resourceDataSourceProvider:(id)a6 host:(id)a7;

@end
