@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSURL *dest;
@property (retain, nonatomic) NSFileHandle *file;

- (void)writeData:(id)a0;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;

@end
