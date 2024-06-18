@class NSOperationQueue;

@interface NTAWorldClockPreferencesListenerObserver : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ block;

- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
