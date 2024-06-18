@class NSOrderedSet, _UITreeDataSourceSnapshotter;
@protocol _UITreeDataSourceSnapshotter;

@interface _NSDiffableDataSourceSectionSnapshotState : NSObject <NSCopying> {
    _UITreeDataSourceSnapshotter *_snapshotter;
    NSOrderedSet *_guaranteedPerformanceIdentifiers;
    unsigned long long _identifierLookupCount;
}

@property (readonly, nonatomic) id<_UITreeDataSourceSnapshotter> snapshotter;
@property (readonly, nonatomic) NSOrderedSet *identifiers;

- (id)init;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)willBecomeWiredToDataSource;
- (long long)indexOfIdentifier:(id)a0;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1;
- (id)initWithSnapshotter:(id)a0 identifiers:(id)a1 identifiersHaveGuaranteedPerformance:(BOOL)a2;
- (id)snapshotterMutableCopy;

@end
