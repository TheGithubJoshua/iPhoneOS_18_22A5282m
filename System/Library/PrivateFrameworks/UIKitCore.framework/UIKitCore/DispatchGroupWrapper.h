@class NSObject;
@protocol OS_dispatch_group;

@interface DispatchGroupWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (id)init;
- (void)notify:(id /* block */)a0;
- (void).cxx_destruct;
- (void)executeWithDispatchGroup:(id /* block */)a0;

@end
