@class NSNumber, NSArray;

@interface CBMutableService : CBService

@property (retain) NSNumber *ID;
@property (retain) NSArray *includedServices;
@property (retain) NSArray *characteristics;

- (id)initWithDictionary:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithType:(id)a0 primary:(BOOL)a1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)handlePowerNotOn;

@end
