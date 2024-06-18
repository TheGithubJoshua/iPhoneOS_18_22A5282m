@class NSString;

@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int service;
@property (readonly, nonatomic) unsigned int connect;
@property (copy, nonatomic) NSString *name;

- (unsigned long long)registryID;
- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)open;
- (void)dealloc;
- (BOOL)reset;
- (BOOL)setPower:(long long)a0;
- (void)close;
- (id)getBootLoader;
- (BOOL)getPower:(long long *)a0;

@end
