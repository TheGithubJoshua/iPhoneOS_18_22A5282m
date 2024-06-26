@class NSError;
@protocol NSStreamDelegate;

@interface NSStream : NSObject

@property id<NSStreamDelegate> delegate;
@property (readonly) unsigned long long streamStatus;
@property (readonly, copy) NSError *streamError;

+ (void)getBoundStreamsWithBufferSize:(unsigned long long)a0 inputStream:(id *)a1 outputStream:(id *)a2;
+ (void)getStreamsToHost:(id)a0 port:(long long)a1 inputStream:(id *)a2 outputStream:(id *)a3;
+ (void)getStreamsToHostWithName:(id)a0 port:(long long)a1 inputStream:(id *)a2 outputStream:(id *)a3;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)init;
- (id)streamError;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)open;
- (id)propertyForKey:(id)a0;
- (void)close;

@end
