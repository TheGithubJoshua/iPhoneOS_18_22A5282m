@class PRSWallpaperObserver, NSString, NSArray, CSComplicationDescriptor, CHSWidgetHost, PRSWallpaperObserverState, PRWidgetMetricsProvider, CHSWidgetDescriptorProvider, UIColor;
@protocol CSWidgetURLHandling, CSApplicationInforming;

@interface CSComplicationManager : NSObject <CSApplicationInformationObserving, CHSWidgetDescriptorProviderObserver> {
    PRSWallpaperObserver *_wallpaperObserver;
    PRSWallpaperObserverState *_wallpaperState;
    CHSWidgetHost *_widgetHost;
    CHSWidgetDescriptorProvider *_widgetDescriptorProvider;
    CSComplicationDescriptor *_inlineComplicationDescriptor;
    CSComplicationDescriptor *_landscapeInlineComplicationDescriptor;
    NSArray *_graphicComplicationDescriptors;
    UIColor *_tintColor;
    PRWidgetMetricsProvider *_widgetMetricsProvider;
    id<CSApplicationInforming> _applicationInformer;
    id<CSWidgetURLHandling> _urlHandler;
}

@property (copy, nonatomic) id /* block */ onInlineComplicationUpdate;
@property (copy, nonatomic) id /* block */ onWidgetUpdate;
@property (copy, nonatomic) id /* block */ onTintColorUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_widgetHasMatchingSystemDescriptor:(id)a0;
- (id)_landscapeWidgetMetricsForPortraitMetrics:(id)a0;
- (void)_updateComplicationsForActivePosterConfiguration;
- (void)_createComplicationDescriptorForWidget:(id)a0 withMetrics:(id)a1 completion:(id /* block */)a2;
- (void)handleLaunchRequestForViewController:(id)a0 withAction:(id)a1;
- (void).cxx_destruct;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)applicationInformer:(id)a0 updatedApplications:(id)a1;
- (void)_openApplicationWithBundleIdentifier:(id)a0 action:(id)a1;
- (void)dealloc;
- (BOOL)_bundleHasOpenURLEntitlement:(id)a0;
- (id)initWithApplicationInformer:(id)a0 urlHandler:(id)a1;
- (void)_updateWidgetHostConfiguration;

@end
