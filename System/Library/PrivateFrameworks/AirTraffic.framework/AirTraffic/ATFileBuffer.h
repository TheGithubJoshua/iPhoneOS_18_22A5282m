@class NSFileHandle;

@interface ATFileBuffer : NSObject {
    NSFileHandle *_bufferFileHandle;
    unsigned long long _currentReadLocation;
    unsigned long long _length;
}

- (id)readDataOfLength:(unsigned long long)a0;
- (void)rewind:(unsigned long long)a0;
- (id)init;
- (void)appendData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)length;
- (void)rewindData:(id)a0;

@end
