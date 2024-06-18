@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalFileSensor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

@property (readonly, retain, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL started;
@property (readonly, copy, nonatomic) id /* block */ eventBlock;

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithPath:(id)a0 eventBlock:(id /* block */)a1;

@end