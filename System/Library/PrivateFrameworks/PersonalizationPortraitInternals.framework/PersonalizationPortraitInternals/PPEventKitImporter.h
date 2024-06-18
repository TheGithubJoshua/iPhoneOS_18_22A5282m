@class PPLocalTopicStore, SGURLDissector, SGSqlEntityStore, PPLocalLocationStore, PPNamedEntityDissector, PPLocalNamedEntityStore, PPLocalEventStore;

@interface PPEventKitImporter : NSObject {
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    PPLocalTopicStore *_topicStore;
    SGSqlEntityStore *_urlStore;
    SGURLDissector *_urlDissector;
    PPNamedEntityDissector *_neDissector;
    Class _dataDetectorMatchClass;
    struct atomic_flag { _Atomic BOOL _Value; } _fullImportInProgress;
}

+ (id)defaultInstance;

- (id)init;
- (void)importEvent:(id)a0;
- (id)importEventData;
- (void)importChangedEvents:(id)a0;
- (id)initWithEventStore:(id)a0 namedEntityStore:(id)a1 locationStore:(id)a2 topicStore:(id)a3 urlStore:(id)a4 urlDissector:(id)a5 namedEntityDissector:(id)a6 dataDetectorMatchClass:(Class)a7;
- (void).cxx_destruct;
- (BOOL)deleteAndReimportAllData;
- (id)importEventDataWithShouldContinueBlock:(id /* block */)a0;

@end
