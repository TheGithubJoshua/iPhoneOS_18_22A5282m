@class NSUUID, NSString, HDAssertionManager;

@interface HDAssertion : NSObject {
    HDAssertionManager *_manager;
    long long _state;
    double _remainingBudget;
    double _budgetIntervalStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) long long rawState;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *assertionIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly) long long state;
@property (nonatomic) double budget;
@property (readonly) double remainingBudget;

- (id)_lock_description;
- (BOOL)_lock_setBudget:(double)a0 error:(id *)a1;
- (BOOL)_consumeFromBudgetThroughTime:(double)a0;
- (long long)_takeWithManager:(id)a0;
- (id)cloneWithOwnerIdentifier:(id)a0;
- (void)invalidate;
- (void)_setBudgetIntervalStartTime:(double)a0;
- (void).cxx_destruct;
- (id)description;
- (long long)_lock_state;
- (id)initWithAssertionIdentifier:(id)a0 ownerIdentifier:(id)a1;
- (double)_lock_remainingBudget;
- (id)_lock_setBudgetIntervalStartTime:(double)a0;
- (void)_invalidateAndRelease:(BOOL)a0;
- (void)dealloc;
- (long long)_lock_consumeBudgetThroughTime:(double)a0 error:(id *)a1;
- (id)_lock_cloneWithOwnerIdentifier:(id)a0;

@end
