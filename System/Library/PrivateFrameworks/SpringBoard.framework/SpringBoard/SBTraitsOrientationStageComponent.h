@class NSNumber, NSString;

@interface SBTraitsOrientationStageComponent : NSObject <SBFTraitsPreferencesStageComponent>

@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)preferencesType;
- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)a0;

@end
