@class NSDictionary, NSSet, CKMergeableDeltaMetadata;

@interface CKMergeableDeltaMetadataReplacementValues : NSObject

@property (retain, nonatomic) NSDictionary *replacementDeltaMetadatas;
@property (retain, nonatomic) NSSet *removableDeltaMetadatas;
@property (retain, nonatomic) CKMergeableDeltaMetadata *updatedNextDeltaMetadata;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
