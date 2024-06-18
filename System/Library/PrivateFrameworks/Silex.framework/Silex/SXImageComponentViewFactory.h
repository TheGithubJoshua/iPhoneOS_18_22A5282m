@protocol SXAnalyticsReportingProvider, SXMediaSharingPolicyProvider, SXAppStateMonitor, SXImageViewFactory;

@interface SXImageComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXAnalyticsReportingProvider> analyticsReportingProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;

- (void).cxx_destruct;
- (id)type;
- (int)role;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReportingProvider:(id)a4 appStateMonitor:(id)a5 imageViewFactory:(id)a6 mediaSharingPolicyProvider:(id)a7;

@end