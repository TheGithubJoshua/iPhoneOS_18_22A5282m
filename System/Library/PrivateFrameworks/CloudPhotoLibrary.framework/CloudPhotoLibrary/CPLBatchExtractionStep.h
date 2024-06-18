@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

@interface CPLBatchExtractionStep : NSObject

@property (readonly, nonatomic) id<CPLBatchExtractionStrategyStorage> storage;
@property (readonly, copy, nonatomic) NSString *scopeIdentifier;

- (id)shortDescription;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (BOOL)extractToBatch:(id)a0 maximumCount:(unsigned long long)a1 maximumResourceSize:(unsigned long long)a2 error:(id *)a3;
- (id)initWithStorage:(id)a0 scopeIdentifier:(id)a1;
- (void)resetConditionallyFromNewIncomingChange:(id)a0;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)a0;

@end
