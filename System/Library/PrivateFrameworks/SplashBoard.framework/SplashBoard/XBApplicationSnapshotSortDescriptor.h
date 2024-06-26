@class NSString, NSSortDescriptor;

@interface XBApplicationSnapshotSortDescriptor : NSObject <BSDescriptionProviding>

@property (nonatomic) unsigned long long key;
@property (nonatomic) BOOL ascending;
@property (copy, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) NSSortDescriptor *NSSortDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortDescriptorWithKey:(unsigned long long)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;
+ (id)_propertyKeyForSnapshotKey:(unsigned long long)a0 overriddenForNil:(BOOL *)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_stringForKey:(unsigned long long)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithKey:(unsigned long long)a0 ascending:(BOOL)a1 comparator:(id /* block */)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
