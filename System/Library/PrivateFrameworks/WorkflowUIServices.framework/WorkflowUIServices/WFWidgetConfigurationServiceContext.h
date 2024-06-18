@protocol WFWidgetConfigurationServiceContextDelegate;

@interface WFWidgetConfigurationServiceContext : NSExtensionContext <WFWidgetConfigurationServiceVendorProtocol>

@property (weak, nonatomic) id<WFWidgetConfigurationServiceContextDelegate> widgetConfigurationDelegate;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)requestViewControllerDismissal;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
