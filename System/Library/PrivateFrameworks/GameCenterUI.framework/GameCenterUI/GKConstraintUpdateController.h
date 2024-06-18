@class NSPointerArray;

@interface GKConstraintUpdateController : NSObject

@property (retain, nonatomic) NSPointerArray *constraintsToUpdate;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (void)dealloc;
- (void)registerConstraint:(id)a0 leading:(double)a1 forFontTextStyle:(id)a2;
- (void)updateConstraint:(id)a0;

@end
