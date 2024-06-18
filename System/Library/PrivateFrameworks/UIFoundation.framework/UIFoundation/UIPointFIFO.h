@interface UIPointFIFO : NSObject

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

- (void)flush;
- (void)clear;
- (void)addPoint:(SEL)a0;
- (void)dealloc;
- (void)emitPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
