@class NSString;

@interface _GCSyntheticDevice : NSObject

@property (readonly) unsigned int service;
@property (readonly) NSString *identifier;

+ (id)devicePropertiesWithDescription:(id)a0;
+ (id)deviceWithService:(unsigned int)a0;

- (id)init;
- (id)initWithService:(unsigned int)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
