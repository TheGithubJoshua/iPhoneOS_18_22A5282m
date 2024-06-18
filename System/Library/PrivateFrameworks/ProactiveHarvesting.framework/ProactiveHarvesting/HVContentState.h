@class NSSet;

@interface HVContentState : NSObject <NSCopying, NSMutableCopying> {
    NSSet *_consumers;
    unsigned char _levelOfService;
}

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned char)levelOfService;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;
- (id)consumers;
- (id)_initWithConsumers:(id)a0 levelOfService:(unsigned char)a1;

@end
