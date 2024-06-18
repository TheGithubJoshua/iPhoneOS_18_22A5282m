@class _PASLock, TRIClient;

@interface _PSFTZKWTrialWrapper : NSObject {
    _PASLock *_lock;
    _PASLock *_updateLock;
}

@property (readonly, nonatomic) TRIClient *triClient;

+ (void)runWithData:(id /* block */)a0;
+ (id)sharedInstance;
+ (void)runIfUpdated:(id /* block */)a0;

- (void)refresh;
- (void)runWithData:(id /* block */)a0;
- (void)flagAsUpdated;
- (id)init;
- (long long)loadLevelAsConfidenceCategoryFromFactor:(id)a0 withDefault:(long long)a1;
- (BOOL)loadLevelAsBooleanFromFactor:(id)a0 withDefault:(BOOL)a1;
- (void)loadFactors;
- (void).cxx_destruct;
- (void)runIfUpdated:(id /* block */)a0;
- (long long)loadLevelAsInteractionModelTypeFromFactor:(id)a0 withDefault:(long long)a1;
- (void)flagAsSame;

@end
