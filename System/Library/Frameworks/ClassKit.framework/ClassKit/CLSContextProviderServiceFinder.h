@class NSArray, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CLSContextProviderServiceFinderDelegate;

@interface CLSContextProviderServiceFinder : NSObject {
    id<CLSContextProviderServiceFinderDelegate> _delegate;
    id _extensionsFinderContext;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    NSDictionary *_extensionAttributes;
    NSMutableArray *_mutableAvailableServices;
}

@property (readonly, copy, nonatomic) NSArray *availableServices;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
