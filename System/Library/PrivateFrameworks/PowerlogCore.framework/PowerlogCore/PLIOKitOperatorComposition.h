@class PLOperator, NSString;

@interface PLIOKitOperatorComposition : NSObject

@property (retain) PLOperator *operator;
@property struct IONotificationPort { } *ioNotifyPort;
@property unsigned int notificationRef;
@property unsigned int service;
@property (retain) NSString *serviceName;
@property (retain) NSString *serviceClassName;
@property unsigned int iterator;
@property unsigned int conn;
@property (copy, nonatomic) id /* block */ operatorBlock;
@property (copy, nonatomic) id /* block */ matchBlock;

+ (id)snapshotFromIOEntry:(unsigned int)a0;
+ (id)snapshotFromIOEntry:(unsigned int)a0 forKeys:(id)a1;
+ (id)snapshotFromIOEntry:(unsigned int)a0 forKey:(id)a1;

- (id)initWithOperator:(id)a0 forService:(id)a1;
- (id)initWithOperator:(id)a0 forServiceClass:(id)a1;
- (id)propertiesForKeys:(id)a0;
- (void).cxx_destruct;
- (id)propertiesFromIOEntry:(unsigned int)a0;
- (id)initWithOperator:(id)a0 forDynamicServiceClass:(id)a1 forNotificationType:(char[128])a2 withMatchBlock:(id /* block */)a3;
- (void)dealloc;
- (id)propertiesFromIOEntry:(unsigned int)a0 forKey:(id)a1;
- (id)properties;
- (id)initWithOperator:(id)a0 forServiceClass:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithOperator:(id)a0 forService:(id)a1 withBlock:(id /* block */)a2;
- (id)propertiesForKey:(id)a0;

@end
