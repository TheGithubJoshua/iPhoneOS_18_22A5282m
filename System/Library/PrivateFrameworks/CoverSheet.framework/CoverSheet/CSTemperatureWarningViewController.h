@class NSString;
@protocol CSThermalStatusProviding;

@interface CSTemperatureWarningViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    id<CSThermalStatusProviding> _thermalStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aggregateBehavior:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (id)initWithThermalStatusProvider:(id)a0;

@end
