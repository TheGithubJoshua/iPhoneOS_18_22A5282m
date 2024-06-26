@class NSNumber, NSString;

@interface SBTraitsOrientationDefaultTreeNodesSpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeNodesSpecifying>

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updateStageTreeNodesSpecifications:(id)a0 stageParticipantsRoles:(id)a1 context:(id)a2;
- (id)_activeOrientationOrderedNodesWithContext:(id)a0;

@end
