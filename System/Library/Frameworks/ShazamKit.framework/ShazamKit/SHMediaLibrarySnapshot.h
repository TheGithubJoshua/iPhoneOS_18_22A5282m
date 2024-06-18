@class NSArray, NSMutableOrderedSet;

@interface SHMediaLibrarySnapshot : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableOrderedSet *changeset;
@property (readonly, nonatomic) NSArray *changes;

- (void)addItem:(id)a0;
- (void)removeItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)addChanges:(id)a0;
- (void)updateItem:(id)a0;
- (id)initWithChanges:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsLibraryItem:(id)a0;
- (BOOL)evaluateUsingPredicate:(id)a0;
- (BOOL)isConflictingChange:(id)a0;
- (void)mergeSnapshot:(id)a0;

@end
