@class NSString, CAStateController, CALayer, NSMutableArray;

@interface SFCAPackageView : UIView <CAStateControllerDelegate>

@property (retain) CAStateController *stateController;
@property (readonly) NSMutableArray *completionHandlers;
@property (readonly, getter=isInitialState) BOOL initialState;
@property (readonly, copy) NSString *stateName;
@property (readonly) CALayer *packageRootLayer;
@property (readonly) float duration;

+ (id)keyPathsForValuesAffectingPackageRootLayer;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)setStateName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)statesCount;
- (void)setInitialState;
- (void)_changeAppearance;
- (id)_getStateWithName:(id)a0;
- (id)_newStateControllerWithSuperlayer:(id)a0;
- (void)_stcaPackageViewCommonInit;
- (void)animateToInitialStateWithCompletionHandler:(id /* block */)a0;
- (void)animateToStateName:(id)a0 completionHandler:(id /* block */)a1;

@end
