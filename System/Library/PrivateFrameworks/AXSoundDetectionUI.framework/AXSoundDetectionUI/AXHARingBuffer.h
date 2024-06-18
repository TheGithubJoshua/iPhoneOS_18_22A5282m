@class NSMutableArray;

@interface AXHARingBuffer : NSObject {
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (id)content;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)reset;

@end
