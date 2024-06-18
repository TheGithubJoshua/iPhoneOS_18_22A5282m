@class NSOutputStream;

@interface BRCStreamWriter : NSObject {
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)a0;
- (void)dealloc;
- (void)appendString:(id)a0;
- (void)close;

@end
