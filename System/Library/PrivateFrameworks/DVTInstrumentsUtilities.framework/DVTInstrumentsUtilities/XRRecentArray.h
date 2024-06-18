@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface XRRecentArray : NSObject {
    NSMutableArray *_entries;
    unsigned long long _maximumRecentCount;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (nonatomic) unsigned long long maximumRecentCount;

- (id)init;
- (id)entries;
- (void)removeEntry:(id)a0;
- (void).cxx_destruct;
- (void)removeEntryAtIndex:(unsigned long long)a0;
- (void)addEntry:(id)a0;
- (id)entryAtIndex:(unsigned long long)a0;
- (BOOL)containsEntry:(id)a0;
- (id)initWithMaximumRecentCount:(unsigned long long)a0;

@end
