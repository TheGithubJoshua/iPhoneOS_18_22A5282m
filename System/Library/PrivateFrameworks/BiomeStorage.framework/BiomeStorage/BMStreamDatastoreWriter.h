@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore *_inner;
}

@property (readonly, nonatomic) BOOL canReadOrPruneData;

- (BOOL)writeEventWithEventBody:(id)a0 timestamp:(double)a1;
- (void)syncMappedFiles;
- (BOOL)writeEventWithEventBody:(id)a0;
- (Class)eventBodyClass;
- (BOOL)writeEventBodyClass:(Class)a0;
- (BOOL)_writeEventData:(id)a0 dataVersion:(unsigned int)a1 timestamp:(double)a2 outBookmark:(id *)a3;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0 config:(id)a1;
- (id)streamIdentifier;

@end
