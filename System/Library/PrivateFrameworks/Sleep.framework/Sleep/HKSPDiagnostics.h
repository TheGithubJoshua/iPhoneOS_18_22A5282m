@class NSString, HKSPObserverSet;

@interface HKSPDiagnostics : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) HKSPObserverSet *providers;

- (void)addProvider:(id)a0;
- (id)initWithLabel:(id)a0;
- (void)removeProvider:(id)a0;
- (void)_registerStateHandler;
- (void).cxx_destruct;

@end
