@class PKTextInputInteraction;
@protocol PKTextInputDebugStateIntrospectorDelegate;

@interface PKTextInputDebugStateIntrospector : NSObject

@property (readonly, weak, nonatomic) PKTextInputInteraction *interaction;
@property (weak, nonatomic) id<PKTextInputDebugStateIntrospectorDelegate> delegate;

+ (id)_knownInstances;
+ (void)debugStateDidChange;
+ (id)debugStateLineDescriptionForIntrospectable:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInteraction:(id)a0;
- (void)_debugStateDidChange;
- (id)_introspectableForStateKey:(id)a0;
- (BOOL)debugStateCanShowDetailsForStateKey:(id)a0;
- (id)debugStateDescriptionForStateKey:(id)a0;
- (id)debugStateDetailViewControllerForStateKey:(id)a0;
- (id)debugStateKeys;
- (id)debugStateTitleForStateKey:(id)a0;
- (id)fullDebugStateDescription;

@end
