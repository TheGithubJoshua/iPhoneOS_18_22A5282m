@class NSData;

@interface SGPatternDataFile : NSObject {
    NSData *_fileData;
}

- (id)init;
- (id)initWithPath:(id)a0;
- (id)dataForOffset:(id)a0 includeTerminator:(int)a1;
- (id)dataForOffset:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
