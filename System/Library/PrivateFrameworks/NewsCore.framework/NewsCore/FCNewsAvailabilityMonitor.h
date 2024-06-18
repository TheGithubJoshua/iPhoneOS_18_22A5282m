@class NSString, LSApplicationProxy, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FCNewsAvailabilityMonitor : NSObject <FCNewsAvailabilityMonitor>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isNewsAvailable) BOOL NewsIsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateAvailability;
- (id)initWithProcessVariant:(unsigned long long)a0 queue:(id)a1;
- (id)init;
- (id)initWithApplicationProxy:(id)a0 queue:(id)a1;
- (void)setNewsIsAvailable:(BOOL)a0;
- (void)addNotificationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_isNewsAvailable;
- (void)dealloc;
- (id)initWithProcessVariant:(unsigned long long)a0;

@end
