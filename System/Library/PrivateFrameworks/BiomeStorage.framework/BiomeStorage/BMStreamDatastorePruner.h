@class BMStreamDatastore;
@protocol BMStreamDatastorePruningDelegate;

@interface BMStreamDatastorePruner : NSObject <BMStreamDatastorePruningDelegate> {
    BMStreamDatastore *_inner;
}

@property (weak, nonatomic) id<BMStreamDatastorePruningDelegate> delegate;
@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (BOOL)deleteEventAtBookmark:(id)a0 outTombstoneBookmark:(id *)a1;
- (id)fetchEventsFrom:(double)a0 to:(double)a1;
- (id)newEnumeratorFromStartTime:(double)a0;
- (void)syncMappedFiles;
- (void)eventsFrom:(double)a0 to:(double)a1 shouldDeleteUsingBlock:(id /* block */)a2;
- (id)newEnumeratorFromBookmark:(id)a0;
- (void)eventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 shouldDeleteUsingBlock:(id /* block */)a3;
- (Class)eventBodyClass;
- (void)removeEventsFrom:(double)a0 to:(double)a1 reason:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)didPruneEvents;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 config:(id)a1;
- (void)removeEventsFrom:(double)a0 to:(double)a1 usingBlock:(id /* block */)a2;
- (void)willPruneEvent:(id)a0;
- (void)removeEventsFrom:(double)a0 to:(double)a1 callback:(id /* block */)a2;
- (id)streamIdentifier;

@end
