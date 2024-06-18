@class NSArray;

@interface _SBSystemApertureLayoutState : NSObject

@property (readonly, copy, nonatomic) NSArray *orderedElementLayoutStates;
@property (readonly, nonatomic) long long inertPhase;
@property (readonly, nonatomic, getter=isTargetingInert) BOOL targetingInert;
@property (readonly, nonatomic, getter=isInert) BOOL inert;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithOrderedElementLayoutStates:(id)a0 inertPhase:(long long)a1;
- (id)systemApertureLayoutStateByIncrementingPhase;
- (id)systemApertureLayoutStateByIncrementingPhaseAndUpdatingOrderedElementLayoutStates:(id)a0;

@end
