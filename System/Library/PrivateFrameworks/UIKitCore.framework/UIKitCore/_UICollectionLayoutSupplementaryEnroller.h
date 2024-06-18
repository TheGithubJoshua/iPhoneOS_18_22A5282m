@class NSMutableDictionary, NSMutableSet, NSMutableOrderedSet;

@interface _UICollectionLayoutSupplementaryEnroller : NSObject {
    NSMutableOrderedSet *_enrollmentIdentifiers;
    NSMutableSet *_uncommittedEnrollmentIdentifiers;
    NSMutableDictionary *_enrollmentsDict;
    NSMutableDictionary *_kindEnrollmentsDict;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
