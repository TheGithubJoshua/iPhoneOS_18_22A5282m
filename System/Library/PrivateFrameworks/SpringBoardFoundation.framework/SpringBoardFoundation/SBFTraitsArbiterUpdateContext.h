@class NSString, NSArray, SBFTraitsSettingsActuationContext;
@protocol SBFTraitsArbiterDrawingDataSource;

@interface SBFTraitsArbiterUpdateContext : NSObject <SBFTraitsArbiterUpdateContextBuilding, BSDescriptionProviding, SBFTraitsSettingsActuationContextProviding>

@property (weak, nonatomic, setter=_setDrawingConfigurationProvider:) id<SBFTraitsArbiterDrawingDataSource> _drawingConfigProvider;
@property (readonly, nonatomic) BOOL _hasDefaultOrientationActuationContext;
@property (readonly, copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSArray *requestingParticipantsUniqueIdentifiers;
@property (nonatomic) BOOL forceOrientationResolution;
@property (copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setReason:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)succinctDescription;
- (BOOL)hasAnyActuationContext;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
