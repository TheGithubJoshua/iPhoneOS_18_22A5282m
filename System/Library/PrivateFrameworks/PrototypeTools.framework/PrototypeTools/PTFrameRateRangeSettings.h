@class NSString;

@interface PTFrameRateRangeSettings : PTSettings <BSDescriptionProviding>

@property (nonatomic) unsigned long long preset;
@property (nonatomic) unsigned short reasonComponent;
@property (nonatomic) unsigned short reason;
@property (nonatomic) int minimum;
@property (nonatomic) int maximum;
@property (nonatomic) int preferred;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 reasonComponent:(unsigned short)a1 reason:(unsigned short)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)validate;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 highFrameRateReason:(unsigned int)a1;
- (id)drillDownSummary;

@end
