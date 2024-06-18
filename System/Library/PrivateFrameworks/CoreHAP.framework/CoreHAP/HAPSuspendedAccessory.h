@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HAPSuspendedAccessory : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 identifier:(id)a1 type:(unsigned long long)a2 queue:(id)a3;
- (void)wakeWithCompletion:(id /* block */)a0;

@end