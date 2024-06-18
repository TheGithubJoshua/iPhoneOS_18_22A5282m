@class NSArray;

@interface SXLayoutInstructions : NSObject

@property (readonly, nonatomic) NSArray *instructions;

+ (id)defaultInstructions;

- (void).cxx_destruct;
- (id)description;
- (BOOL)areFulfilledForBlueprint:(id)a0;
- (void)didLayoutComponentBlueprint:(id)a0 blueprint:(id)a1;
- (id)initWithInstructions:(id)a0;

@end
