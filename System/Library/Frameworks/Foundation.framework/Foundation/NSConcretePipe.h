@class NSFileHandle;

@interface NSConcretePipe : NSPipe {
    NSFileHandle *_readHandle;
    NSFileHandle *_writeHandle;
}

- (void)_closeOnDealloc;
- (id)init;
- (id)fileHandleForReading;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileHandleForWriting;
- (void)dealloc;

@end
