@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (BOOL)writeComplicationsModularSetCache:(id)a0;
- (id)fetchInlineSetComplicationDescriptors;
- (id)fetchModularSetComplicationDescriptors;

@end
